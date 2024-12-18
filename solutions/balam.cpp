#include "bits/stdc++.h"
// #include "segtree.h"
using namespace std;
#define FASTIO                                 ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define int                                    long long
#define inf                                    100000000000000000
#define setbit                                 __builtin_popcountll
#define vi                                     vector <int>
#define pb                                     push_back
#define all(x)                                 x.begin(),x.end()
#define Yes                                    cout << "Yes" << endl
#define no                                     cout << "no" << endl
#define Y                                      cout << "YES" << endl
#define N                                      cout << "NO" << endl
#define ff                                     first
#define ss                                     second
#define rep(i,a,b)                             for(int i=a; i<b;  i++)
#define per(i,a,b)                             for(int i=a; i>=b; i--)
#define MAXN 100001
#define vpi                                    vector <pair<int,int>>
#define pi                                     pair<int,int>
#define vvi(a,b)                               vector<vi> dp (a, vi (b)) ;         

void __print(int x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

#ifndef ONLINE_JUDGE
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif

// int M = 1e9+7 ;
// int power(int a , int n );
// int minv(int a){ return power(a , M-2 ); }
// int modM( int n, int m ) { return (  (n % M) * (m % M) ) % M; }
// int modA( int n, int m ) { return ( (n % M) + (m % M) ) % M; }
// int modS( int n, int m ) { return ( ( (n % M) - (m % M) ) + M) % M; }
// int modD( int n, int m ) { return (  (n % M) * (minv(m) % M) ) % M; }

// // Operator overloads 
template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){ for (auto &it : v)  cin >> it;  return istream; }
 
template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }
 
// Utility functions
template <typename T>
void print(T &&t)  { cout << t << "\n"; }
template <typename T, typename... Args>
void print(T &&t, Args &&... args) { cout << t << " ";  print(forward<Args>(args)...); }

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}


class DSU{
    vector <int> parent, rank, minimum, maximum, total_elements , sum , val;
    
    public:
        DSU(int n){
            parent.resize(n + 1);
            minimum.resize(n + 1);
            maximum.resize(n + 1);
            sum.resize(n + 1) ;
            val.resize(n + 1) ;
            total_elements.assign(n + 1, 1);
            rank.assign(n + 1, 0);
            initialize(n);
        }

        void initialize(int n){
            for(int i = 1 ; i <= n ; ++i){
                parent[i] = i;
                minimum[i] = i;
                maximum[i] = i;
                rank[i] = 1;
            }
        }

        int find_parent(int element){
            if(parent[element] == element) return element;
            // path compression
            return parent[element] = find_parent(parent[element]);
            // without path compression
            // return find_parent(element) ;
        }
        
        void unite(int a, int b){
           
            //by rank

            int pa = find_parent(a);
            int pb = find_parent(b);

            if(pa == pb) return;

            if(rank[pa] < rank[pb]) swap(pa, pb) ;
            
            parent[pb] = pa ;
            sum[pb] -= sum[pa] ;
            minimum[pa] = min(minimum[pa] , minimum[pb]) ;
            maximum[pa] = max(maximum[pa] , maximum[pb]) ;
           
            if(rank[pa] == rank[pb]){
              rank[pa]++ ;
            }
        }

        void add(int x , int y){
         sum[find_parent(x)] += y ;
        }

        int getSum(int x){
          if(parent[x] == x)return val[x] + sum[x] ;
          return val[x] + sum[x] + getSum(parent[x]) ;
        }

        int getSize(int v){
            return total_elements[find_parent(v)];
        }

        int getMin(int v){
            return minimum[find_parent(v)];
        }

        int getMax(int v){
            return maximum[find_parent(v)];
        }
};

void solve()
{
   int n , k , m ;
   cin >> n >> m >> k ;

   DSU dsu(n);
   
   vector<pi> a(m) ;

   rep(i, 0, m){
    int x , y ;
    cin >> x >> y ;
    a[i] = {x, y} ;
   }
   
   vector <int> s ;
   vector <pi> b ;

   rep(i, 0, k){
    int t ;
    cin >> t ;

    int x, y ;
    cin >> x >> y ;

    s.pb(t) ;
    b.pb({x,y}) ;

   }

   vector <string> ans ;
  

   reverse(all(b)) ;
   reverse(all(s)) ;

   rep(i, 0, k){
    if(s[i] == 2){
      if(dsu.find_parent(b[i].ff) == dsu.find_parent(b[i].ss)){
        ans.pb("YES") ;
      }
      else{
        ans.pb("NO") ;
      }
    }
    else{
      int x = dsu.find_parent(b[i].ff) ;
      int y = dsu.find_parent(b[i].ss) ;
      if(x != y) dsu.unite(x , y) ;
    }
   }
   reverse(all(ans)) ;

   rep(i,0,ans.size()){
    cout << ans[i] << endl ;
   }
}

signed main(){
 

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin );
  freopen("output.txt","w", stdout);
#endif
  
 FASTIO;
 
 int t = 1; 
 
 // cin >> t;

 // precalculation() ;
 
 for(int tc=1; tc<=t; ++tc){
   
 // cout << "Case #" << tc << ": "  ;
 
 solve();
 
 
 }
}
