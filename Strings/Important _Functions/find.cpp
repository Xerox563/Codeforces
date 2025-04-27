#include <iostream>
using namespace std;
#include<string>
#include<cstring>
int main()
{
    string s1 = "010101010010100";
    string s2 = "1001";
    int index = s1.find(s2);
    cout<<index<<endl;
    return 0;
}