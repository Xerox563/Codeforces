/*
  // Method-1 => O(n)
#include <iostream>
using namespace std;
bool check_Prime(int n)
{
    // if (n == 1)
    //     return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1; // If n <= 1 it will automatically return false..
                  // If n > 1  it will return true..
}
int main()
{
    int n;

    cin >> n;
    cout << check_Prime(n) << endl;
    return 0;
}

  // Method-2 => O(sqrt(n))
#include <iostream>
using namespace std;
bool check_Prime(int n)
{
    // if (n == 1)
    //     return false;
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1; // If n <= 1 it will automatically return false..
                  // If n > 1  it will return true..
}
int main()
{
    int n;

    cin >> n;
    cout << check_Prime(n) << endl;
    return 0;
}
*/

// Method-3 => O(nlog(log(n)))
#include <bits/stdc++.h>
using namespace std;
void check_Prime(int n)
{
    bool primes[n + 1];
    fill(primes, primes + n + 1, true);
    primes[0] = primes[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (primes[i])
        {   // i is a prime number
            // cout<<i<<endl;// now mark all its multiples as false as they all willbe divisible by i.
            for (int j = i * i; j <= n; j += i)
            { // O(n/2 + n/3 + n/5 + n/7 ......) => O(n)
                primes[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (primes[i] == true)
        {
            cout << i << endl;
        }
    }
}
int main()
{
    int n;

    cin >> n;
    cout << endl;
    check_Prime(n);
    return 0;
}
