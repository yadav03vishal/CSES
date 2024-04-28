#include<bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define ll long long
#define int ll
#define ld long double
#define INF 1e18
#define nline '\n'
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define fo(i,a,b) for(int i = a; i < b ; i ++)
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vst;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef unsigned long long ull;
typedef long double lld;
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

void solve()
{
    char v_1 = 'a', v_2 = 'e';
    char c_1 = 'b', c_2 = 'c', c_3 = 'd';

    string s, ans;
    int n;
    cin >> n;
    cin >> s;
    int i = s.length()-1;
    while(i>=0)
    {
        if(s[i] == c_1 || s[i] == c_2 || s[i] == c_3)
        {
           if(i-2>=0)i = i-2;
           else break;
           ans = '.' + s.substr(i,3) + ans;
        }
        else 
        {
           if(i-1>=0)i = i - 1;
           ans = '.' + s.substr(i,2) + ans;
        }
        i--;
    }
    ans.erase(ans.begin());
    cout << ans << endl;
}

signed main() 
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    int tc = 1;
    cin >> tc;
    fo(i, 1, tc + 1)
    {
        solve();
    }
}