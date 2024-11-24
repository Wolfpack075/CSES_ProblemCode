/*
    
    Bismillahir Rahmanir Rahim. 
    Every praise goes to ALLAH for our wellbeing.
    I won't care for a single person who won't do the same for me.
    Forgetting her was the best decision I took for myself.
    Time is a relentless adversery. So, make sure you are looking after yourself. Family is everything. Keep them close.
    One day I'll make you proud, mom. Stay strong.
    Godspeed.
    Author : Kazi Fahim Tahmid
    Judge: CSES Introductory Problem ( Apple Division )
    Date : Sunday, 24 November 2024, 12:00AM
 
    
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
        // cout << x << endl;
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
const int modd = 1e9+7;
int minn= INT_MAX;
vi subset;
int res=0;
void subsets(vi vec,int size,int k){
    if(k==size){
        if(sz(subset)!=0){
            int sizer=sz(subset);
            int result=0;
            for(int i=0;i<sizer;i++){
                result+=subset[i];
            }
            int onno_subset_result = res - result;
            int diff=abs(result-onno_subset_result);
            // if(hudai<minn) print(subset);
            // cout << res <<" " << result  << endl;
            minn = min(minn,diff);

        }
    }
    else{
        subsets(vec,size,k+1);
        subset.pb(vec[k]);
        subsets(vec,size,k+1);
        subset.pop_back();
    }
}

 
void solve() {
    int n;cin>>n;
    vi vec;
    for(int i=0;i<n;i++) {
        pusher(x,vec);
        res+=vec[i];
    }
    // cout << res <<endl;
    subsets(vec,n,0);
    cout << minn;


 
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
