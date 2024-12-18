#include <bits/stdc++.h>
using namespace std;

void prob3(){
    long long n;
    cin>>n;
    vector<long long> v(n),pre(n);
    for(auto &x:v)
        cin>>x;
    pre[0]=v[0];
    for(int i = 1; i<n; i++)
        pre[i]=pre[i-1]+v[i];
    long long maxx=-1, minn=LLONG_MAX;
    for(int i = 0;i < n; i++)
    {
        maxx = max(pre[i],pre[n-1]-pre[i]);
        minn = min(maxx,minn);
    }
    cout<<minn<<endl;
}
int main(){

    int t; cin>>t;
    while(t--)
        prob3();
    return 0;
}
