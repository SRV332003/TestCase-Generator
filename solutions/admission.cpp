#include <bits/stdc++.h>
using namespace std;



void rec(set<int> st,string str, vector<string> &perm){
    if(st.size() ==0){
        perm.push_back(str);
        return;
    }

    for(auto i : st){
        set<int> temp = st;
        temp.erase(i);
        rec(temp,str+to_string(i),perm);
    }
}

void solve() {
	int n =9,k=5;
    cin>>n>>k;
    set<int> s;

    vector<string> perm;

    for(int i=1;i<n+1;i++){
        s.insert(i);
    }
	rec(s,"", perm);

    cout<<perm[k-1]<<"\n";

}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}