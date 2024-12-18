/*
    
    Bismillahir Rahmanir Rahim. 
    Every praise goes to ALLAH for our wellbeing.
    I won't care for a single person who won't do the same for me.
	Time is a relentless adversery. So, make sure you are looking after yourself. Family is everything. Keep them close.
	One day I'll make you proud, mom. Stay strong.
	Godspeed.
    Author : Kazi Fahim Tahmid
    Judge: CSES Introductory Problem ( Two Sets )
    Date : Friday, 22 November 2024, 04:20PM
 
    
*/

#include <bits/stdc++.h>

using namespace std;

#define int            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define double         long double
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl
#define forr(x,n)	   for(int i=x; i<n; i++)

void flush(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

void file(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt",  "r",  stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

inline int power(int a, int b)
{
    int x = 1;
    while (b)
    {
        if (b & 1) x *= a;
        a *= a;
        b >>= 1;
    }
    return x;
}

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

const int N = 200005;

void solve() {

    int n;cin>>n;
    if(n%2==0){
        if(n%4!=0) cout << "NO";
        else {
        	cout <<"YES" << endl;
            cout << n/2 << endl;
            for(int i=1;i<=n/2;i+=2) cout << i <<" "<< n+1-i << " ";
            cout <<endl << n/2 << endl;
            for(int i=2;i<=n/2;i+=2) cout << i << " " << n+1-i << " ";
        }
    }
    else {
    	int hudai = (n+1)/2;
    	if(hudai%2!=0) cout << "NO";
    	else {
    		cout << "YES" << endl;
    		hudai /=2;
    		cout << n/2+1 << endl<< 1 << " ";
    		for(int i=1;i<=hudai;i++) cout << 2*i << " ";
    		for(int i=1;i<=(n/2-hudai);i++) cout << n-(2*i)+2 << " ";
    		cout << endl << n/2 << endl;
    		for(int i=1;i<=hudai;i++) cout << 2*i+1 << " ";
    		for(int i=1;i<=(n/2-hudai);i++) cout << n-2*i+1 << " ";
    	}
    }

}

int32_t main()
{
    
    flush();
    file();

    
    clock_t z = clock();

    int t = 1;
    // cin >> t;
    while (t--) solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}
