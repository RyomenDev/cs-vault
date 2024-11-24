// https://oeis.org/ To find the PATTERN
// https://devdocs.io/
#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double 
#define endl "\n"
//  ------constants-----
#define MOD 1000000007 // 1e9
#define PI 3.1415926535897932384626
const int INF = 1e18;

// ---------Pair----------
typedef pair<int, int> pii;

// ----------Vector----------
typedef vector<int> vi;
typedef vector<pii> vpii;
#define vvc vector<vector<char>>
#define vvi vector<vector<int>>

// ----------Map----------
typedef unordered_map<int, int> umpii;
typedef unordered_map<char, int> umpci;
typedef map<int, int> mpi;
typedef map<char, int> mpci;

// ----------Set----------
typedef unordered_set<char> usetc;
typedef unordered_set<int> useti;
typedef set<char> oset;
typedef set<int> oseti;

#define F first
#define S second
#define pb emplace_back
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
// ! Macro Definition:
int nn;
//^ #define fori(i, n) for (int i = 0; i < n; i++)
// #define fori(start, end) \  
// nn = (end); \
// for (int i = (start); i < nn; i++)

//^ #define forj(j, n) for (int j = 0; j < n; j++)
// #define forj(start, end) \
// nn = (end);             \
// for (int j = (start); j < nn; j++)


#define For(a, b, c) for (auto(a) = (b); (a) < (c); ++(a))
#define ForR(a, b, c) for (auto(a) = (b-1); (a) >= (c); --(a))
#define ForEach(a, b) for (auto&(a) : (b))

void Vatsh() {
    // Your logic goes here
    int n;
    cin >> n;
    vi v(n);
    // fori(0, n)
    //     cin >> v[i];

    // cout << solve() << endl;
    // fori(2, 6)
    //     cout << v[i] << " ";


    For(i, 0, n)
        cin >> v[i];
    cout << endl;


    For(j, 2, 6)
        cout << v[j] << " ";
    cout << endl;

    // ForR(j, 8, 0)
    //     cout << v[j] << " ";
    // cout << endl;

    // ForEach(it,v)
    //     cout<<it<<" ";
    // cout << endl;


    // for (int i = 2; i < 6;i++)
    //     cout << v[i] << " ";
    // cout << endl;


}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // #ifndef ONLINE_JUDGE
        // freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
        // freopen("output.txt", "w", stderr);
    // #endif

    int tt = 1;
    // cin >> tt;
    while (tt--)
        Vatsh();

    return 0;
}