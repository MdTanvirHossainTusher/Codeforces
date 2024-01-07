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

void solve () {
    int x,y,n;
    cin>>x>>y>>n;

    vector<int> v(n);
    v[0] = x;
    v[n-1] = y;
    int cnt = 1;

    /// create 'a' array
    for (int i = n-2; i >= 1; i--) {
        v[i] = v[i+1] - cnt;
        cnt++;
    }
    /// check whether 'b' array formed correctly or not
    for (int i = 1; i < n-1; i++) {
        if((v[i] - v[i-1]) <= (v[i+1] - v[i])) {
            cout<<"-1\n";
            return;
        }
    }
    print(v);
}

int main() {

#ifndef ONLINE_JUDGE
//	freopen("input.txt",  "r",  stdin);
//	freopen("output.txt", "w", stdout);
#endif

	int t = 1, n = 5;
    cin >> t;

	while (t--) {
//		int n;cin>>n;

    //		cout << solve() << endl;
        solve();

	}
	return 0;

}

