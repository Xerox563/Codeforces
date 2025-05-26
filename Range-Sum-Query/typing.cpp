#include <bits/stdc++.h>
using namespace std;

int getDistance(string word)
{

    unordered_map<char, pair<int, int>> mpp;
    mpp['Q'] = {0, 0};
    mpp['W'] = {0, 1};
    mpp['E'] = {0, 2};
    mpp['R'] = {0, 3};
    mpp['T'] = {0, 4};
    mpp['Y'] = {0, 5};
    mpp['U'] = {0, 6};
    mpp['I'] = {0, 7};
    mpp['O'] = {0, 8};
    mpp['P'] = {0, 9};

    mpp['A'] = {1, 0};
    mpp['S'] = {1, 1};
    mpp['D'] = {1, 2};
    mpp['F'] = {1, 3};
    mpp['G'] = {1, 4};
    mpp['H'] = {1, 5};
    mpp['J'] = {1, 6};
    mpp['K'] = {1, 7};
    mpp['L'] = {1, 8};

    mpp['Z'] = {2, 1};
    mpp['X'] = {2, 2};
    mpp['C'] = {2, 3};
    mpp['V'] = {2, 4};
    mpp['B'] = {2, 5};
    mpp['N'] = {2, 6};
    mpp['M'] = {2, 7};

    pair<int, int> cur = mpp['Q'];
    int result = 0;

    for (char x : word)
    {
        result += abs(cur.first - mpp[x].first) + abs(cur.second - mpp[x].second);
        cur = mpp[x];
    }

    return result;
}

int main()
{
    string word;
    cout << "Enter the string to type: ";
    cin >> word;

    int distance = getDistance(word);
    cout << "Total distance: " << distance << endl;

    return 0;
}
