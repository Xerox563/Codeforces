// @Author: Mars_Coder
// @date: 19-Dec-23 10:04:15 PM +06
// https://codeforces.com/problemset/problem/1914/D

#define _USE_MATH_DEFINES
#undef _GLIBCXX_DEBUG

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;


using lli = long long int;
using uInt = unsigned int;
using ulli = unsigned long long int;
using vi = vector<int>;
using vii = vector<lli>;
using vc = vector<char>;
using udouble = long double;
using vd = vector<double>;
using vs = vector<string>;
template<typename T> using vv = vector<vector<T>>;
template<typename T> using pq = priority_queue<T>;  // high prec., pq<T> p;
template<typename T> using pq_ = priority_queue<T, vector<T>, greater<T>>;  // dec. as: pq_<T> x;
template<typename T1, typename T2> using vp = vector<pair<T1, T2>>;  // vp<T1, T2> ..


/*---------- pbds -------------*/
// *find_by_order(x), order_of_key(x) + set/map fns
// ordered_set/map:
/*
	pbds<int, null_type, less<int>> uset; -> ordered_set
	pbds<int, null_type, greater<int>>  -> decr. order
	pbds<int, null_type, less_equal<int>> -> multi-set
	pbds<int, int, less<int>> -> ordered_map
	pbds<int, int, less_equal<int>> -> multi-map
	............

	!! ALERT !! (for using less_equals<key>)
    using less_equals<key> makes lower_bound works as upper_bound and vice-versa
    for erase use: any.erase(any.find_by_order(any.order_of_key(val)));
    don't use .find() because it will always return .end()
*/

template<typename key, typename val = null_type, typename cmp = less<key>> 
using pbds = tree<key, val, cmp, rb_tree_tag, tree_order_statistics_node_update>;

/*-----------------------------*/

#define ln                "\n" // no flush, oppos of endl
#define _flush            endl
#define stop_sync         ios::sync_with_stdio(false) // not to use c-style io
#define untie_ios         cin.tie(nullptr) // no flush
#define pb                push_back
#define ppb 	          pop_back
#define mp                make_pair
#define Fi(p)             get<0>(p)
#define Sc(p)             get<1>(p)
#define sz(x)             int ((x).size())
#define All(x)            (x).begin(), (x).end()
#define scanv(x)          for(auto &i: x) cin >> i
#define bin_sc(a, x)      binary_search(All(a), x) // 0/1
#define lbd(a, x)         lower_bound(All(a), x) // an iter.
#define ubd(a, x)         upper_bound(All(a), x) // an iter.
#define eq_seg(a, x)      equal_range(All(a), x) // a pair of lb, ub
#define minE(a)           (*min_element(All(a)))
#define maxE(a)           (*max_element(All(a)))
#define FIXED(x)          cout << fixed << setprecision(x)
#define mem(a, v)         memset(a, v, sizeof a) // 0,-1 for int, and all char
#define filla(a, n, v)    fill(a, a + n, v) // for arr.
#define fillv(a, v)       fill(All(a), v) // for vec.
#define _fillv(a, n, v)   fill_n(a.begin(), n, v)
#define glue(x, y)        x##y
#define msg(x)            cout << (#x) << ln
#define bug(x)            cout << (#x) << ": " << (x) << ln
#define printv(v)         cout << "[ ";for(auto j: v) cout << j << ' '; cout << "]" << ln
#define printvv(v)        cout << "["; for(auto i: v) {printv(i);} cout << "........]\n"
#define printm(m)         cout << "[\n";for(auto i: m) cout << Fi(i) << " -> " << Sc(i) << ln; cout << "...]\n"
#define prints(s)         cout << "{"; for(auto i: s) cout << i << ' '; cout << "}\n"
#define uceil(a, b)       ((a + b - 1) / (b))
#define unq_v(a)          a.resize(distance(a.begin(), unique(All(a)))) // for same valued consec. grp
#define mk_upper(s)       transform(s.begin(), s.end(), s.begin(), ::toupper)
#define mk_lower(s)       transform(s.begin(), s.end(), s.begin(), ::tolower)
#define valid(nx, ny)     (nx >= 1 && nx <= row && ny >= 1 && ny <= col)
#define dbug(args...)     {string s = #args;replace(All(s), ',', ' '); stringstream s2; s2 << s; vs ss;\
while(s2){string now;     s2 >> now; ss.pb(now);} debug(ss, args);} // string sucks :(, don't know why!


vector<int> dx = {1,-1,0,0,1,-1,-1,1}; // (4 ed. + 4 dia.)
vector<int> dy = {0,0,1,-1,1,1,-1,-1}; // first four are ed.

const string yms[]{"YES", "Yes", "yes"};
const string nms[]{"NO", "No", "no"};
const double PI = acos(-1.0L);
struct{const int i = (1e9) + 7; const lli l = (lli)(1e9) + 7ll;}MOD;
struct{const int i = INT_MAX; const lli l = LLONG_MAX;}inf;

bool isUp(char ch){locale loc; return isupper(ch, loc);}
void debug(vs s) {cout << "#------------------#\n";}
int ffs(int x){return __builtin_ffs(x);}  // 1 based idx from right of one
int ffs(lli x){return __builtin_ffsll(x);}
int clz(uInt x){return __builtin_clz(x);}  // leading zeros from left ....
int clz(ulli x){return __builtin_clzll(x);}
int ctz(uInt x){return __builtin_ctz(x);}  // trailing zeros from right ....
int ctz(ulli x){return __builtin_ctzll(x);}
int cto(uInt x){return __builtin_popcount(x);}  // no of 1 bit
int cto(ulli x){return __builtin_popcountll(x);}
int parity(uInt x){return __builtin_parity(x);}  // cto % 2
int parity(ulli x){return __builtin_parityll(x);}
auto pow2(uInt x){return (1u) << x;}  /* returning unsigned */
auto pow2(ulli x){return (1ull) << x;}  // x <= 63
lli binpow(lli a, lli b){lli ans = 1ll; while(b > 0){if(b & 1) ans *= a; a *= a; b >>= 1;} return ans;}
lli binpow(lli a, lli b, lli m){a %= m; lli ans = 1ll; while(b > 0){if(b & 1) ans = ans * a % m; a = a * a % m; b >>= 1;} return ans;}
lli NcR(lli n, lli r){lli x = 1ll, y = 1ll;if(n - r < r) r = n - r; while(r){x *= n;y *= r;
lli cm = __gcd(x, y);x /= cm;y /= cm;--n;--r;}return x;}
lli NpR(lli n, lli r){lli x = 1ll;while(r){x *= n; --n;--r;}return x;}

template<typename type> type Nsum(type n){return (n * (n + 1)) / (type)2;}
template<typename type> type Round(type a, type b) {if(a < b) return 1; if(a % b) return 1 + a / b; return a / b;}
template<typename T, typename... param> void debug(vs ss, T a, param... args){
	cout << ss.front() << " = " << a << '\n'; ss.erase(ss.begin()); debug(ss, args...);
}


// array<T, n> a = {}

int main(void){
	stop_sync;
	untie_ios;
	#ifndef ONLINE_JUDGE
		//freopen("generator.txt", "r", stdin);
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
	
	int t(1), tcase(0);
	cin >> t; 
	while(++tcase, t--){
		//cout << "--------Case #" << tcase << ": --------\n";
		lli n;
		cin >> n; 
		vector<pair<lli, lli>> a(n), b(n), c(n);
		//lli ans = 0;
		for(lli i = 0; i < n; ++i){
			cin >> a[i].first;
			a[i].second = i;
		}
		for(lli i = 0; i < n; ++i){
			cin >> b[i].first;
			b[i].second = i;
		}
		for(lli i = 0; i < n; ++i){
			cin >> c[i].first;
			c[i].second = i;
		}
		sort(All(a));
		sort(All(b));
		sort(All(c));
		lli ans = 0;
		for(lli i = 1; i <= 3; ++i){
			for(lli j = 1; j <= 3; ++j){
				for(lli k = 1; k <= 3; ++k){
					lli x1 = Sc(a[n - i]), x2 = Sc(b[n - j]), x3 = Sc(c[n - k]);
					if(x1 != x2 && x2 != x3 && x1 != x3){
						ans = max(ans, Fi(a[n - i]) + Fi(b[n - j]) + Fi(c[n - k]));
					}
				}
			}
		}
		cout << ans << ln;
		
	}
	return 0;
}
