// #include <iostream>
// #include <numeric>

// using namespace std;

// int main() {
//   int n;
//   cin >> n;
//   long long A{ 1 }, B{ 1 };
//   for (int a, b; n--;) {
//     cin >> a >> b;
//     auto x{ max((A + a - 1) / a, (B + b - 1) / b) };
//     A = a * x;
//     B = b * x;
//   }
//   cout << A + B; 
// }
// code by introvert

#include<bits/stdc++.h>
#include<math.h>

using namespace std;

//const int Ni=200005;
int M=1e9+7;


//vector<int> adj[Ni];
//vector<int> sum(Ni);
//vector<int> depth(Ni);
//vector<int> height(Ni);
#define FASTIO                                 ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define vip(x,p)                               for(int i=0;i<p;i++) {cin>>x[i];}
#define int                                    long long
#define vi                                     vector<int>
#define pi                                     pair<int,int>
#define wh(n)                                  while(n--)
#define fo(i,b)                                for(int i=0;i<b;i++)
#define fe(i,b)                                for(int i=0;i<=b.i++)
#define Y                                      cout<<"YES"<<endl
#define N                                      cout<<"NO"<<endl
#define endl                                   "\n"
#define pb                                     emplace_back
#define bs                                     binary_search
#define all(x)                                 x.begin(),x.end()
#define GCD(a,b)                               __gcd(a,b)
#define mi1                                    cout <<-1 << endl;
#define zero                                   cout << 0 << endl;
#define setbit                                 __builtin_popcountll
#define asc(x)                                 sort(x.begin(),x.end())
#define dsc(x)                                 sort(x.begin(),x.end(),greater<int>())
#define Max(x,y,z)                             max(x,max(y,z))
#define Min(x,y,z)                             min(x,min(y,z))
#define arrsorted(arr)                         is_sorted(arr.begin(),arr.end())
#define lb                                     lower_bound
#define ff                                     first
#define ss                                     second
#define all(x)                                 x.begin(),x.end()


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


 bool check(double mid,double a, double b, double c){
 // deb(mid*mid+sqrt(mid));
  return(a*mid*mid+b*sqrtl(mid)>=c);
 }

 signed main(){
 
 FASTIO;
   
 int t=1; 

 cin >> t;

 for(int tc=1; tc<=t; ++tc){
 
 // cout << "Case #" << i << ": "  ;

 //solve();
  double a, b ;
  cin >> a >> b ;
  double n;

  cin >> n  ;

  cout << fixed << setprecision(2);
 
  //type: FFFFFFFTTTTTTTT....
  
 double l=0,r=1e10,mid;

 for(int i=0; i<60; i++){

  mid=(l+r)/2;

  if(check(mid,a,b,n)){
    r=mid;
  }
  else{
    l=mid;
  }
 }
 cout << r << endl;

}
}

 


  
 
   
      

    
    
 


