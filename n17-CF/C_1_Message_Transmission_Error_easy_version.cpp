#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define BASE 31

ll computeHash(const string &s, ll &p_pow)
{
    ll hash_value = 0;
    for (char c : s)
    {
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % MOD;
        p_pow = (p_pow * BASE) % MOD;
    }
    return hash_value;
}

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        string str;
        cin >> str;
        ll n = str.length();
        bool found = false;

        // Precompute prefix hashes
        vector<ll> prefix_hash(n, 0);
        ll p_pow = 1;
        prefix_hash[0] = (str[0] - 'a' + 1);
        for (ll i = 1; i < n; i++)
        {
            prefix_hash[i] = (prefix_hash[i - 1] + (str[i] - 'a' + 1) * p_pow) % MOD;
            p_pow = (p_pow * BASE) % MOD;
        }

        // Iterate over possible overlap lengths
        for (ll overlap_len = 1; overlap_len < n; ++overlap_len)
        {
            ll original_len = n - overlap_len;

            // Compute prefix hash (hash of first 'original_len' characters)
            ll prefix_hash_val = prefix_hash[original_len - 1];

            // Compute suffix hash (hash of the suffix of length 'original_len')
            ll suffix_hash_val = (prefix_hash[n - 1] - prefix_hash[overlap_len - 1] + MOD) % MOD;

            // Scale the suffix hash to compare with the prefix hash
            p_pow = 1;
            for (ll i = 0; i < overlap_len; i++)
            {
                p_pow = (p_pow * BASE) % MOD;
            }

            suffix_hash_val = (suffix_hash_val * p_pow) % MOD;

            // If the hashes match, we have found a valid merged string
            if (prefix_hash_val == suffix_hash_val)
            {
                cout << "YES" << endl;
                cout << str.substr(0, original_len) << endl;
                found = true;
                break;
            }
        }

        // If no valid merging is found
        if (!found)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
