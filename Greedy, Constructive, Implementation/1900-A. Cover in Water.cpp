#include <bits/stdc++.h>

using namespace std;

#define ll             long long
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define vll            vector <ll>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"
#define pq        	   priority_queue <int>
#define pqmin          priority_queue <int, vi, greater<int>>
#define printPair(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define prefSum(a,pref,x,y)  pref[0] = a[0]; for(int i = x; i < y; i++) pref[i] = a[i] + pref[i-1]; cout << endl;


#define sz(x)          ((int) x.size())
#define all(x)         x.begin(), x.end()

#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       for(auto x : a) cout << x << " "; cout << endl;
#define range(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl;

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

const int N = 200005;

int solve (int n) {
    string s;
    cin>>s;
    int cnt = 0;

    if(s.find("...") < n) {
        return 2;
    }

    for(int i = 0; i < n; i++) {
        if(s[i] == '.') {
            cnt++;
        }
    }
    return cnt;
}

int main() {

#ifndef ONLINE_JUDGE
//	freopen("input.txt",  "r",  stdin);
//	freopen("output.txt", "w", stdout);
#endif

	int t = 1, n = 5;
	 cin >> t;

	while (t--) {
		int n,p;cin>>n;

		cout << solve(n) << endl;

	}
	return 0;

}
