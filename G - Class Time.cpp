/**********************************
		--------------------------
	Bismillahir Rahmanir Rahim
---------------------------

**********************************/
#include <bits/stdc++.h>

using namespace std;

#define ll 			long long
#define ull 		unsigned long long
#define inf 		1e9+7
#define gcd(a,b)	 __gcd(a,b)
#define lcm(a,b) 	(a*b)/gcd(a,b)
#define rev(v) 		reverse(v.begin(), v.end())
#define asort(v) 	sort(v.begin(), v.end())
#define forn(a,b)	for(int i = a;i < (b);++i)
#define forR(a,b)	for(int i = a;i < (b);--i)
#define testCase() 	int t;cin >> t;while(t--)
#define optimised()	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

/******************************-[SnowKingTree]-**************************************/

void FrostMelon() {
	int n;
	cin >> n;
	set<pair<string,string>>v;

	for(int i = 0;i<n;i++) {
		string f_n,l_n;
		cin >> f_n >> l_n;
		v.insert({l_n,f_n});
	}
	//sort(v.begin(),v.end());
	for(auto u : v) cout << u.second << " " << u.first << '\n'; 
	
}

int main() {
	optimised();
	// testCase()
		FrostMelon();
}
