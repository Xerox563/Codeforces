#include <bits/stdc++.h>
int main() {
    int t; std::cin >> t;
    while(t--) {
        int n; std::cin >> n; int a[n];
        long long sum = 0, flag = 0;
        for(int i = 0; i < n; ++i) {
            std::cin >> a[i];
            sum += a[i];
        }
        for(int i = 0; i < n; ++i) {
            for(int j = i+1; j < n; ++j) {
                if((2*sum - a[i] - a[j]) % (n-1) == 0) {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag) std::cout << "Yes\n";
        else std::cout << "No\n";
    }
}