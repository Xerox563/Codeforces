#include <bits/stdc++.h>
using namespace std;
void solve(int n, string str)
{
int x = 0;
	for (int i = 0; i < n - 3; i++)
	{
		if (str[i] == 'c' && str[i+1] == 'o' && str[i+2] == 'd' && str[i+3] == 'e' )
		{
			x++;
		}
		else if (str[i] == 'c' && str[i+1] == 'h' && str[i+2] == 'e' && str[i+3] == 'f' )
		{
			break;
		}
		else
		{
			continue;
		}
	}
	
	if (x > 0)
	{
		cout << "AC" << endl;
	}
	else
	{
		cout << "WC" << endl;
	}
}
int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		solve(n, s);
	}
	return 0;
}
