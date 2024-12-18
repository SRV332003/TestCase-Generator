#include <bits/stdc++.h>
using namespace std;

void prob5(){
    int n,k; cin>>n>>k;
    int arr[n];
    long long tot = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        tot+=arr[i];
    }
    int d = tot/k;
    int d1 = abs(k*d - tot);
    int d2 = abs(k*(d+1) - tot);
    int l = 0;
    if(d1&1){
        d1++;
        l++;
    }
    cout<<min(l+d1/2, d2)<<endl;
}

int main(){


    int t; cin>>t;
    while(t--)
        prob5();
    return 0;
}
