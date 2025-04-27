// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int h1, m1;
//     cin >> h1 >> m1;
//     int h2, m2;
//     cin >> h2 >> m2;

//     int m_diff = 0;
//     if (m2 >= m1)
//     {
//         m_diff = m2 - m1;
//     }
//     else
//     {
//         m_diff = (m2 + 60) - m1;
//         h2 -= 1;
//     }

//     int h_diff = h2 - h1;
//     int total = h_diff * 60 + m_diff;
//     total /= 2;

//     int t_h = total / 60;
//     int t_m = total % 60;

//     h1 += t_h;
//     m1 += t_m;

//     if (m1 >= 60)
//     {
//         m1 -= 60;
//         h1 += 1;
//     }

//     cout << h1 << ":" << setw(2) << setfill('0') << m1 << endl;

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

    int h1, m1;
    scanf("%d:%d", &h1, &m1);
    int h2, m2;
    scanf("%d:%d", &h2, &m2);
    int t1 = h1 * 60 + m1;
    int t2 = h2 * 60 + m2;
    int t3 = (t1 + t2) / 2;
    printf("%02d:%02d\n", t3 / 60, t3 % 60);

    return 0;
}