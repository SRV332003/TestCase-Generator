#include <bits/stdc++.h>
using namespace std;

void prob4(){
    int n; cin>>n;
    string s; cin>>s;
    int c = 0;
    for(int i = 0; i<n-1; i++){
        if(s[i]> s[i+1]){
            c++;
        }
    }
    if(c>1) cout<<"NO\n";
    else cout<<"YES\n";
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t; cin>>t;
    while(t--)
        prob4();
    return 0;
}
