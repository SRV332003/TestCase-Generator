#include"bits/stdc++.h"
// #include <ext/pb_ds/detail/standard_policies.hpp>
// #include <ext/pb_ds/assoc_container.hpp> // Common file
// #include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
 
// using namespace __gnu_pbds;
using namespace std;
using namespace std :: chrono;

double PI = 3.141592653589793238;

#define FASTIO                                 ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define vip(x)                                 for(int i=0;i<x.size();i++) {cin>>x[i];}
#define int                                    long long
#define vi                                     vector <int>
#define rep(i,a,b)                             for(int i=a; i<b;  i++)
#define fe(i,b)                                for(int i=1; i<=b; i++)
#define Y                                      cout<<"YES \n"
#define N                                      cout<<"NO \n" 
#define en                                     "\n"
#define eb                                     emplace_back
#define pb                                     push_back
#define bs                                     binary_search
#define all(x)                                 x.begin(),x.end()
#define GCD(a,b)                               __gcd(a,b)
#define mi1                                    cout <<-1 << endl;
#define vvi(a,b,c)                               vector<vi> dp (a, vi (b , c)) ;         
#define pz                                     cout << 0 << endl;
#define setbit                                 __builtin_popcountll
#define arrsorted(arr)                         is_sorted(arr.begin(),arr.end())
#define lb                                     lower_bound
#define ub                                     upper_bound
#define ff                                     first
#define ss                                     second
#define mx_ele(a)                              *max_element(all(a))
#define mi_ele(a)                              *min_element(all(a))   
#define vpi                                    vector <pair<int,int>>
#define pi                                     pair<int,int>
#define inf                                    1e18
#define nline                                  '\n'
#define ll     long long 
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

// Policy Based Data Structure
// Note:Upper Bound would work as lower bound and vice versa
// less_equal ko less krdenge to set && agar less ko less_equal krdenge toh multiset
// typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> pbds ; 
// order_of_key (val): returns the no. of values less than val
// find_by_order (k): returns the kth largest element.(0-based)

// Operator overloads 
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


#ifndef ONLINE_JUDGE
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif

int msb(int);
int lsb(int);
int power(int , int , int);
bool isPowerOfTwo(int);
int gcd (int , int);
int add (int , int);
int sub (int , int);
int mult(int , int);

int M = 1e9 + 7;
// int M = 998244353 ;
int minv(int a){ return power(a , M-2, M ); }
int modM( int n, int m ) { return (  (n % M) * (m % M) ) % M; }
int modA( int n, int m ) { return ( (n % M) + (m % M) ) % M; }
int modS( int n, int m ) { return ( ( (n % M) - (m % M) ) + M) % M; }
int modD( int n, int m ) { return (  (n % M) * (minv(m) % M) ) % M; }


//*********************************************************************************************************************************************************************************************
//**** COMPARATOR FUNCTION ****
bool compare(int t, int r){
 return t%2<r%2;
}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//***** CHECKER FUNCTION *****
 
// bool chck(int l , int r , int &k){

 
// }
 
//*******************************************************************************************************************************************************************************
// Sieve...... 


// int MAXN = 3e6+3 ;
// vi fac(MAXN) ;
// vi inv(MAXN) ;

// // * Precomputes n! from 0 to MAXN. 
// void factorial(int p) {
//   fac[0] = 1;
//   for (int i = 1; i <= MAXN; i++) {
//     fac[i] = fac[i - 1] * i % p;
//   }
// }

// // * Precomputes all modular inverse factorials from 0 to MAXN in O(n + log p) time 
// void inverses(int p) {
//   inv[MAXN] = power(fac[MAXN], p - 2, p);
//   for (int i = MAXN; i >= 1; i--) {
//     inv[i - 1] = inv[i] * i % p;
//   }

// }

// /** Computes nCr mod p */
// int choose(int n, int r, int p) {
//   if(r>n){
//     return 0 ;
//   }
//   return fac[n] * inv[r] % p * inv[n - r] % p;
// }

//***********************************************************************************************************************************************************************************************
// **** MAIN SOLUTION ****


// int calc(int mask, int n, vi &a){
//  int sum = 0 ;

//  rep(i, 0, n){
//   if(mask & (1 << i)){
//     sum += a[i] ;
//   }
//  }
 
// }
// vvi (1001,10001, -1) ;

// int helper(int x , int i, vi&cost , vi&page)
// {
//   if(x == 0){
//     return 0 ;
//   }
//   if(dp[i][x] != -1){
//     return dp[i][x] ;
//   }


//   return dp[i]

// }
// set <int> s ;
 // int dp[21][21][2] ;
 // int digit[21] ;

 
 // //states 1.pos:- position on which we are
 // //       2.st:- count of non zero digit till now
 // //       3.tight:- whether digit upto pos are max possible :- 1 means yes , 0 means no 
 // int solve1(string &num ,int pos, int cnt, bool tight)
 // {
 //    if(dp[pos][cnt][tight] != -1){
 //      return dp[pos][cnt][tight] ;
 //    }
 //    if(pos == 20){
 //      return 0 ;
 //    }
 
 //    int res = 0 ;
 
 //    int ub = (tight == 0) ? digit[pos] : 9 ;
 
 //    for(int i = 0 ; i < ub ; i++){
 //      res += solve1(num, pos+1 , cnt + (i != 4), 1) ;
 //    }
 //    if(tight == 0)res += solve1(num, pos+1, cnt + (digit[pos]!=4), 0) ;
 
 //    return dp[pos][cnt][tight] = res ;
 // }
// int dp[20][2];
// int func(string& nums, int n, int tight) {
//   if (n == 0) {
//     return 1;
//   }
//   if (dp[n][tight] != -1)
//     return dp[n][tight];
//   int ub = 9;
//   if (tight) {
//     ub = nums[nums.length() - n] - '0';
//   }
//   int ans = 0;
//   for (int i = 0; i <= ub; i++) {
//     if (i) {
//       ans += func(nums, n - 1, (tight & (ub == i)));
//     } else if (i == 0) {
//       ans += func(nums, n - 1, tight & (ub == i));
//     }
//   }
//   return dp[n][tight] = ans;
// }

const int r = 1e6 + 1 ;


// int p[r], elem[r], info[r]; //info[findp(i)] means special vertex connected to set i
// int ran[r] ;

// int find_parent(int a) {
//     if(p[a] == a) {
//         return a ;
//     }
//     return p[a] = find_parent(p[a]) ;
// }
 
// void unite(int a, int b) {
//     int pa = find_parent(a), pb = find_parent(b);
//     if(pa == pb) {
//         return ;
//     }
//     if(elem[pa] >= elem[pb]) {
//         p[pb] = pa;
//         elem[pa] += elem[pb];
//         info[pa] += info[pb];
//     } 
//     else {
//         p[pa] = pb;
//         elem[pb] += elem[pa];
//         info[pb] += info[pa];
//     }
// }

// void unite_by_rank(int a, int b){
//   int pa = find_parent(a) , pb = find_parent(b) ;

//   if(pa == pb)return ;

//   p[pa] = pb ;

//   if(ran[pa] == ran[pb])ran[pb]++ ;
//   return ;
// }


class TrieNode{
   public:
      
      TrieNode* children[2] ;
      int data ;
      int cnt ;

   TrieNode(int d){
        this -> data = d ;
        children[0] = NULL ;
        children[1] = NULL ;
        cnt = 0 ;
      }
} ;


class Trie{

   public:
    TrieNode* root ;

    Trie(){
      root = new TrieNode(0);
    }

    void insertUtil(TrieNode* root, int &num){
      
      TrieNode* curr = root ;
      curr -> cnt++ ;
      for(int i = 30 ; i >= 0 ; i--){
        int bit = (1 & (num >> i)) ;
        
        if(curr -> children[bit] == NULL){
          curr -> children[bit] = new TrieNode(bit) ;
        }

        curr = curr -> children[bit] ;
        curr -> cnt++ ;
      }
    }

    void eraseUtil(TrieNode*root, int num){
      TrieNode* curr = root ;
      curr -> cnt-- ;
      for(int i = 30 ; i >= 0 ; i--){
        int bit = (1 & (num >> i)) ;
        
        curr = curr -> children[bit] ;
        curr -> cnt-- ;
      }
    }

    void insert(int &word){
      insertUtil(root, word) ;
    }

    void erase(int word){
      eraseUtil(root, word) ;
    }

    int getMax(TrieNode*root, int num){
      
      int mx = 0 ;

      TrieNode* curr = root ;

      for(int i = 30; i >= 0 ; i--){
        int bit = (1 & (num >> i)) ;

        if((curr -> children[1 - bit]) != NULL and curr -> children[1-bit] -> cnt > 0){
          mx = (mx + (1ll << i)) ;
          curr = curr->children[1 - bit] ;
        }
        else{

          curr = curr->children[bit] ;
        }

      }

      return mx ;

    }

    int mi_xor(TrieNode* &root, int val)
    {
        int ans=0;
        TrieNode* temp = root;

        for(int i=30;i>=0;i--)
        {
            int bit=1;
            if((val&(1<<i))==0)
                    bit=0;
 
            int req=bit;
 
            if(temp->children[req]==NULL)
            {
                ans+=(1ll<<i);
                temp=temp->children[1-req];
            }
            else if(temp->children[req]->cnt==0)
            {
                ans+=(1ll<<i);
                temp=temp->children[1-req];
            }
            else
                temp=temp->children[req];
        }
 
        return ans;
    }

    int min_xor(int val){
      return mi_xor(root, val) ;
    }

    int Max(int num){
      return getMax(root, num) ;
    }

    // void erase(string word){

    //   for(int i = 0 ; i < word.size() ; i++){
    //     if(root->children[word[i] - 'a'] != NULL){
    //       root = root->children[word[i] - 'a'] ;
    //     }
    //     else{
    //       return ;
    //     }
    //   }

    //   if(root->isTerminal){
    //     root->isTerminal = 0 ;
    //   }

    // }



    //To insert or initialise, use Trie* t = new Trie() ;

} ;


// class Node{
//     public:
//         int data ;
//         Node* next ;

//         Node(int val){
//           this->data = val ;
//           this->next = NULL ;
//         }
// } ;

// void insertathead(Node* &head, int val){
//   Node* temp = new Node(val) ;
//   temp -> next = head ;
//   head = temp ;
// }

// void print(Node* head){
//   while(head){
//     cout << head->data << ' ' ;
//     head = head->next ;
//   }
// }

 // void fun(int i, vector<vi>&a, vi&c, vi&dp, int n){
 //  if(dp[i] != inf){
 //    return ;
 //  }
 //  for(auto j : a[i]){
 //    fun(j, a, c, dp, n) ;
 //    if()
 //  }
 // }
struct DSU {
    std::vector<int> f, siz;
    DSU(int n) : f(n), siz(n, 1)
    { 
        std::iota(f.begin(), f.end(), 0); 
    }
    int leader(int x) {
        while (x != f[x]) x = f[x] = f[f[x]];
        return x;
    }
    bool same(int x, int y) { return leader(x) == leader(y); }
    bool merge(int x, int y) {
        x = leader(x);
        y = leader(y);
        if (x == y) return false;
        siz[x] += siz[y];
        f[y] = x;
        return true;
    }
    int size(int x) { return siz[leader(x)]; }
};

bool sortbyCond(const pair<int, int>& a,
                const pair<int, int>& b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
       return (a.second > b.second);
} 

vector<vector<int>> movements = {
     {0, 1}, {1, 0}, { -1, 0}, {0, -1}
};

void dfs(int x, int y, vector<string>& a, vector<vi>& vis, set<vi>& s) {
     vis[x][y] = 1;

     for (auto &mov : movements) {
          int nx = x + mov[0];
          int ny = y + mov[1];

          if (nx >= 0 and nx < a.size() and ny >= 0 and ny < a[0].size() and vis[nx][ny] == 0) {
               if (a[nx][ny] == 'W') {
                    dfs(nx, ny, a, vis, s);
               } else if (a[nx][ny] == '.') {
                    vi mp ;
                    mp.pb(nx) ;
                    mp.pb(ny) ;  
                    s.insert(mp);
               }
          }
     }
}
void solve()
{    
   
  int n, m ;
  cin >> n >> m ;

  vector<vector<int>> a(n, vector<int>(m, 0)) ;

  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < m ; j++){
      cin >> a[i][j] ;
    }
  }

  map<int,vector<int>> mp ;

  for(int i = 0 ; i < m ; i++){
    int x = -1 ;
    int y = 0 ;
    for(int j = 0 ; j < n ; j++){
          if(x < a[j][i]){
        x = a[j][i] ;
        y = j ;
      }
    }
    mp[y].push_back(x) ;
  }
  int x = 0 ;
  double avg = 0 ;
  for(auto i : mp){
    if(i.second.size() > x){
      x = i.second.size() ;
    }
  }

  int y = 0 ;

  for(auto i: mp){
    if(i.second.size() == x){
      double at = 0 ;
      for(int j = 0 ; j < m ; j++){
        at += a[i.first][j] ;
      }
      at /= m ;

      if(at > avg){
        avg = at ;
        y = i.first ;
      }
      
    }
  }

  cout << y << ' ' << mp[y].size() << endl ;
  
  

}


//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//*********************************************************************************************************************************************************************************************
//*****MAIN FUNCTION*****
signed main(){
 
 FASTIO;

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin );
  freopen("output.txt","w", stdout);
#endif
 //seive() ;
 //factorial(M) ;
 //inverses(M) ;

 int t = 1; 

 // cin >> t;

 for(int tc=1; tc<=t; ++tc){
 
 // cout << "Case #" << tc << ": "  ;

    solve();

  }
}

struct segment_tree{

vector <int> seg ;
vector <int> a ;

void init(vector <int> arr){
  int n = arr.size() ;
  a = arr ;
  seg.resize(4*(n+1)) ;
  build(0,0,arr.size()-1) ;
}

int change(int a , int b){
  return min(a,b) ;
}

void build(int idx, int low, int high){
  if(low == high){
   seg[idx] = a[low];
   return;
  }

  int mid = (low + high)/2;

  build(2*idx + 1, low, mid);
  build(2*idx + 2, mid+1, high);
  
  seg[idx] = change(seg[2*idx + 1] , seg[2*idx + 2]) ;

}

int query(int idx, int low, int high, int l, int r){
  if(low > r or high < l)return INT_MAX; // change k saath ise bhi badalna hai for sum return->0 , for max return->INT_MIN, for min return->INT_MAX
  if(l <= low and high <= r)return seg[idx];

  int mid = (low + high)/2;

  return change(query(2*idx + 1, low, mid, l, r) , query(2*idx + 2, mid+1, high, l, r));

}

void update (int idx, int low, int high, int node, int val){
  if(low == high){
    a[low] = val;
    seg[idx] = val;
    return;
  }

  int mid = (low + high)/2;
  if(node <= mid) update(2*idx + 1, low, mid, node, val);
  else  update(2*idx + 2, mid+1, high, node, val);
     
  seg[idx] = change(seg[2*idx + 1] , seg[2*idx + 2]) ;
}

};

vector <int> arr ;

struct lazy_propogation
{

vector <int> tree , lazy ;

void init(int n){
 // int n = a.size() ;
 // arr.resize(n+1) ;
 // for(int i=1; i<=n; i++){
 //   arr[i] = a[i-1] ;
 // }
 tree.resize(4*(n+1)) ;
 lazy.resize(4*(n+1)) ;

}

void build(int segment_index, int segment_start, int segment_end )
{
  if(segment_start == segment_end)
  {
      tree[segment_index] = arr[segment_start] ;
      return  ;
  }

  int mid = (segment_start + segment_end) / 2 ;

  build(2*segment_index , segment_start , mid) ;
  build(2*segment_index+1 , mid + 1 , segment_end) ;

  tree[segment_index] = tree[2*segment_index] + tree[2*segment_index+1] ;

} 
// use segment_index = 1 , segment_start = 1 , segment_end = n , query_start = L , query_end = R ;
int query(int segment_index , int segment_start, int segment_end , int query_start , int query_end)
{

  if(lazy[segment_index] != 0)
  {
       int dx = lazy[segment_index] ;
       lazy[segment_index] = 0 ;
       tree[segment_index] += dx * (segment_end - segment_start + 1) ;

       if(segment_start != segment_end)
       {
        lazy[2*segment_index] += dx ;
        lazy[2*segment_index + 1] += dx ;
       }
    }

   if(segment_start > query_end or segment_end < query_start)
   {
    return 0 ;
   }

   if(segment_start >= query_start and segment_end <= query_end)
   {
    return tree[segment_index] ;
   }

   int mid = (segment_start + segment_end) / 2 ;
   return query(2*segment_index, segment_start, mid , query_start , query_end) + query(2*segment_index+1 , mid + 1, segment_end, query_start, query_end) ;
  
}

void update(int segment_index, int segment_start, int segment_end, int query_start, int query_end, int value)
{
  if(lazy[segment_index] != 0)
  {
    int dx = lazy[segment_index] ;
    lazy[segment_index] = 0 ;
    tree[segment_index] += dx * (segment_end - segment_start + 1) ;

    if(segment_start != segment_end)
    {
      lazy[2*segment_index] += dx ;
      lazy[2*segment_index+1] += dx ;
    }
  }

  if(segment_start > query_end or segment_end < query_start)
  {
    return ;
  }

  if(segment_start >= query_start and segment_end <= query_end)
  {   
    int dx = (segment_end - segment_start + 1) * value ;
    tree[segment_index] += dx ;

    if(segment_start != segment_end)
        lazy[2*segment_index] += value , lazy[2*segment_index + 1] += value ;
      return ;
        
  }

  int mid = (segment_end + segment_start) / 2 ;
  update(2*segment_index , segment_start , mid , query_start, query_end , value) ;
  update(2*segment_index + 1 , mid + 1 , segment_end , query_start, query_end , value) ;

  tree[segment_index] = (tree[2*segment_index] + tree[2*segment_index+1]) ;
}
}; 



//*********************************************************************************************************************************************************************************************
// POWER FUNCTION 

 int power (int base, int exp, int mod){
  /*find 2^13
  res   base  exp
  1      2    13  ( when exp is odd then multiply res by base)
  1*2    2    12  (when exp is even div it by two and mutliply base by base(means square base))
  2      2^2  12/2=6
  2      16    3
  32     16    2
  32     256   1
  32*256 256   0
  iterate till exp !=0
  */
   // int mod = 1e9 + 7 ;
   int res = 1; 
   if(mod>1) base %= mod;
 

   while (exp != 0){

     if (exp & 1 == 1){
       res=((res)*(base));
       if(mod>1)res%=mod ;
       exp--;
      }
     else{
       base=((base)*(base)); 
       if(mod > 1)base%=mod ;
       exp/=2;
       
     }
     

   }return (res);
 }

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//**** TO CHECK WHETHER GIVEN NUMBER IS POWER OF TWO OR NOT ****

bool isPowerOfTwo(int n)
{
 if(n==0)
   return false;

   // to check whether both are integer or not
 return (ceil(log2(n)) == floor(log2(n)));

}


//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// TO CALCULATE LEAST SIGNIFACT BIT ****

int lsb(int n)
{  //position if n and -n = 8 then log2(n&-n)=3 ,(0001000)->binary of 8
   // plus 1 in log2(n & -n) for getting exact pos
 
 return (log2(n & -n));

}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//**** TO CALCULATE MOST SIGNIFICANT BIT ****

int msb(int n)
{
    // To find the position of the most significant set bit
  int k = (int)(log2(n));
  
    // To return the value of the number with setbit at k-th position
  return 1 << k;
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// **** TO CALULATE GCD USING EUCLID LEMMA ****

int gcd (int a, int b){
  
  return  (b!=0) ? gcd (b, a % b) : a;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// int add(int a ,int b){
//   return ((a + b)%MOD + MOD)%MOD;
// }

// int sub(int a, int b){
//   return (add(a,-b));
// }

// int mult(int a, int b){
//   return (a*b)%MOD;
// }
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// ****TRIE IMPLEMENTATION****

// int x[MAX_NUMBER_OF_NODES][MAX_ASCII_CODE], next = 1; //initially all numbers in x are -1
// void build(string s){
//   int i = 0, v = 0;
//   while(i < s.size()){
//     if(x[v][s[i]] == -1)
//       v = x[v][s[i++]] = next ++;
//     else
//       v = x[v][s[i++]];
//   }
// }

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// ****** FENWICK TREE IMPLEMENTATION ******

// int N = 1e5;
// int fen[N];

// void update(int i, int add){
//   while(i < N){
//     fen[i] += add;
//     i += (i & (-i));
//   }
// }

// int sum(int i){
//   int s =0;
//   while(i > 0){
//     s += fen[i];
//     i -= (i & (-i));
//   }
//   return s;
// }

// int rangesum(int l, int r){
//   return sum(r) - sum(l-1);
// }