#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q1;
    /* 1. Insertion -> back
       2. Deletion -> front
       function :
       q.push(x);
       q.pop();

       */
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);
    q1.push(60);
    queue<int> q = q1;

    cout << endl;
    cout << "Size:: " << q.size() << endl;
    if (q.empty())
    {
        cout << "Queue is Empty.." << endl;
    }
    else
    {
        cout << "Queue is not  Empty.." << endl;
    }

    cout << " First Element : " << q.front() << endl;
    cout << " Last Element : " << q.back() << endl;
    //  while (!q.empty())
    // {
    //     int ele = q.front();
    //     cout << ele << " ";
    //     q.pop();
    // }

    queue<int> q2;
    q2.push(23);
    q2.push(33);
    q2.push(43);
    q2.push(53);
    q2.push(63);

    q2.swap(q);
    while (!q2.empty())
    {
        cout << q2.front() << " ";
        q2.pop();
    }
    cout << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}