#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Xerox Alpha";
    cout << s << endl;
    string str(s); // copying s to str..
    cout << str << endl;

    cout << endl;

    string sub(str,2,6);
    cout<<sub<<endl;

    string s2 = str.substr(2,6);   // index 2 sae lekr next 6 characters....
    cout<<s2<<endl;

    if(str.compare(s2) == 0) {
        cout<<"True"<<endl;
    } else {
        cout<<"False"<<endl;
    }
    return 0;
}

/* Iterators -> nothing but just a pointer to an element with in range of element..
Dereferencing -> to get the value at which currently iterator is pointing..(*it)
it->begin ->points to first element
it->end -> points to next of last element.









                                                                 */