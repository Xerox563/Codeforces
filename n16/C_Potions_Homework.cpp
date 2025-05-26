#include <iostream>
#include <vector>
#include <algorithm>

const int MOD = 10007;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    // Sort the array
    std::sort(a.begin(), a.end());

    
    long long total_time = 0;

    for (int i = 0; i < n; i++)
    {
        total_time = (total_time + (long long)a[i] * a[n - 1 - i]) % MOD;
    }
    for(int i=0;i<n;i++) {
        if(arr[i] % MOD =[]) 
    }

    std::cout << total_time << std::endl;

    return 0;
}
