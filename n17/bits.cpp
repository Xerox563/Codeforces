#include <bits/stdc++.h>
using namespace std;
string convertToBinary(int n)
{
    // Time & space -> O(logn) base:2
    string res = "";
    while (n != 1)
    {

        if (n % 2 == 1)
            res += '1';
        else
            res += '0';
        n = n / 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

int cnt_set_bits(int n) {
    int ans = 0;
    while(n > 1) {
        if(n%2 == 1) {
            ans++;
        }
        n/=2;
    }
    if(n == 1) ans++;
    return ans;
}

int convertToNumber(string str)
{
    //  TC -> O(n) ,SC -> O(1)
    int n = str.size();
    int ans = 0;
    int p2 = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (str[i] == '1')
        {
            ans += p2;
        }
        p2 *= 2;
    }
    return ans;
}

void swap(int a, int b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a << " " << b << endl;
}

int cnt_flips(int start,int goal) {
    int temp = start ^ goal;
    
    // Now count the number of set bits in temp
    int ans = 0;
    while(temp > 1) {
        if(temp & 1) ans++;
        temp = temp >> 1;
    }
    return ans;
}



int main()
{
    // cout << convertToBinary(24) << endl;
    // string str = "101";
    // cout << convertToNumber(str) << endl;

    // swap(4, 3);
    // cout<<cnt_set_bits(13)<<endl;
    int start = 16;
    int goal = 23;
    cout<<cnt_flips(start,goal)<<endl;

    return 0;
}