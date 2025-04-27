#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
        
        vector<long long> ans;
        for (int i = 1; i <= 1700; i++) {
            if (i % 3 != 0 && i % 10 != 3) {
                ans.push_back(i);
            }
        }

        cout << ans[x-1] << endl;
    }
    return 0;
}
