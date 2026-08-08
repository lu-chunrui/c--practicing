#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
	int n, m;
	cin >> n >> m;
	vector<int> arr(n);
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < m; i++)
	{
		sum += arr[i];
	}
	int min1 = sum;
	for (int i = 0; i < n - m; i++)
	{
		int a = min1;
		sum = sum + arr[i + m] - arr[i];
		if (sum < a)
		{
			min1 = sum;
		}
	}
	cout << min1;

	return 0;
}
