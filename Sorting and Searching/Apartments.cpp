/*
    
    Bismillahir Rahmanir Rahim. 
    Every praise goes to ALLAH for our wellbeing.
    I won't care for a single person who won't do the same for me.
    Forgetting her was the best decision I took for myself.
    Time is a relentless adversery. So, make sure you are looking after yourself. Family is everything. Keep them close.
    One day I'll make you proud, mom. Stay strong.
    Godspeed.
    Author : Kazi Fahim Tahmid
    Judge: CSES - Sorting and Searching ( Apartments )
    Date : Thursday, 05 December 2024, 02:27PM
 
    
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
#define forr(x,n)      for(int i=x; i<n; i++)
#define pusher(x,vc)   int x;cin>>x;vc.push_back(x)

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
    int n,m,x;
    cin>> n >> m >> x;
    vi bharatia(n);
    vi basha(m);
    for(int &x:bharatia) cin >> x;
    for(int &x:basha) cin >> x;
    sort(bharatia.begin(),bharatia.end());
    for(int i=0;i<n;i++) bharatia[i]-=x;
    sort(basha.begin(),basha.end());
    // print(basha);
    // print(bharatia);
    int res = 0;
    int hudai=-1;
    for(int i=0;i<n;i++){
        auto it = lower_bound(basha.begin()+hudai+1,basha.end(),bharatia[i]);
        auto itt = basha.begin()+hudai+1;
        // cout << *it << endl;
        if(it != basha.end()){
            int pos=it-basha.begin();
            if(basha[pos] <= bharatia[i]+2*x){
                res++;
                hudai=pos;
                // cout << hudai;
            }
        }
    }
    cout << res;


    // bug(n, m);
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