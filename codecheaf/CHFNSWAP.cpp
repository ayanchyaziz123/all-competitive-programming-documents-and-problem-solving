#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> v;
		int sum = 0;
		for (int i = 1; i <= n; i++)
		{
			v.push_back(i);
			sum += i;
		}
		int swap = 0;

		if (sum % 2 != 0)
		{
			cout << 0 << endl;
		}
		else
		{
			for (int i = 0; i < v.size(); i++)
			{
				for (int j = 0; j < v.size(); j++)
				{
					if (i != j)
					{
						if (v[i] + v[j] == n && n - v[j] == v[i])
						{
							swap++;
						}
					}
				}
			}
			if (swap == 6)
			{
				cout << 3 << endl;
			}
			else
			{
				cout << swap << endl;
			}
		}
	}

	return 0;
}