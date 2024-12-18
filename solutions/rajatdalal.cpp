#include <bits/stdc++.h>
using namespace std;



#define ll                  long long
#define vi                  vector <int>
#define vl                  vector <long long>
#define endl				"\n"
#define print_YES			cout<<"YES"<<"\n";
#define print_NO			cout<<"NO"<<"\n";
#define int 				long long

int mod = 1e9+7;
void printVector(vl v){	
	// cout<<"Size: "<<v.size()<<"\n";
	for(int i=0;i<v.size();i++){
		cerr<<v[i]<<" ";
	}
	cerr<<endl;
}




bool isVowel(char c){
	if(c == 'a' || c=='e'||c=='i'||c=='o'||c=='u') return true;
	return false;
}

int ans=INT_MAX;






// int dp[1001][100001];
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


void solve(ll t) {
	int n;
	cin >>n;

	vector<int> v(n);

	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	int prev = v[n-1];
	int target = n-1;
	int smin = 0;

	for(int i=n-2;i>=0;i--){
		if(prev>v[i]){

			prev = v[i];
			target = i;

		}else{
			target = i;
			break;
		}
	}
	// cerr<<target<<endl;


	for(int i = target+1;i<n;i++){
		if(v[i]< v[target]){
			smin = max(smin,v[i]);
			// cout<<" yes "<<smin<<endl;
		}
	}



	vector<int> ans;

	for(int i=0;i<n;i++){
		if(i<target){
			cout<<v[i]<<" ";
			continue;
		}
		if(target == i || smin == v[i]) continue;

		ans.push_back(v[i]);

	}

	// printVector(ans);



	if (smin!=0) cout<<smin<<" ";
	// cerr<<smin<<endl;

	if (ans.size() != n) ans.push_back(v[target]);
	// cerr<<v[target]<<endl;
	sort(ans.begin(), ans.end(), greater<int>());

	for(auto i:ans) cout<<i<<" ";
	cout<<endl;

}



signed main() {
	// pre_compute();/
	// ios_base::sync_with_stdio(false);
 //    cin.tie(NULL);
	ll t=1;
	// cin>>t;	
	ll c=t;
	while(t--){	
	   solve(c-t);	
	   // sovle(c-t);
	}
	return 0;
}
