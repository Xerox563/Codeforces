#include <iostream>

using namespace std;

int main()
{

    // your code goes here

    int t;

    cin >> t;

    while (t--)
    {

        int n;

        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {

            int numbers = 0;

            for (int j = i + 1; j < n; j++)
            {

                if (arr[i] < arr[j])

                    numbers++;
            }

            arr[i] = numbers;
        }

        for (int i = 0; i < n; i++)
        
        {

            cout << arr[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
