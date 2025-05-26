#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<pair<ll, ll>> vpll;
typedef vector<pair<int, int>> vpii;
typedef pair<ll, ll> pll;
typedef pair<int, int> pll;

template <typename T>
void read(T &x) { cin >> x; }

template <typename T>
void read(vector<T> &v)
{
    for (auto &x : v)
    {
        cin >> x;
    }
}

template <typename T>
void print(const vector<T> &v)
{
    for (const auto &x : v)
    {
        cout << x << " ";
    }
    cout << "\n";
}

template <typename T>
bool are_all_elements_equal(const vector<T> &arr)
{
    return all_of(arr.begin() + 1, arr.end(), [&](const T &x)
                  { return x == arr[0]; });
}

const ll MOD = 1e9 + 7;

ll Pow(ll a, ll b)
{
    a %= MOD;
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return ans;
}

ll Mul(ll a, ll b)
{
    ll ans = 0;
    while (b)
    {
        if (b & 1)
            ans = (ans + a) % MOD;
        a = (a + a) % MOD;
        b >>= 1;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    read(t);
    while (t--)
    {
        ll n;
        read(n);
        vi arr(n);
        read(arr);

        vi ans(n, 0);
        set<ll> st;
        for (ll i = 1; i <= n; i++)
            st.insert(i);

        for (ll i = 0; i < n; i++)
        {
            if (st.find(arr[i]) != st.end())
            {
                ans[i] = arr[i];
                st.erase(arr[i]);
            }
        }

        for (ll i = 0; i < n; i++)
        {
            if (ans[i] == 0)
            {
                ans[i] = *st.begin();
                st.erase(st.begin());
            }
        }

        print(ans);
    }

    return 0;
}
