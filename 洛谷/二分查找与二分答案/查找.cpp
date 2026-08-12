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
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	while (m--)
	{
		int m;
		cin >> m;
		int left = 0;
		int right = n - 1;
		int ans = -1;
		while (left <= right)
		{
			int mid = left + (right - left) / 2;
			if (arr[mid] >= m)
			{
				if (arr[mid] == m)
				{
					ans = mid + 1;
				}
				right = mid - 1;
			}
			else
			{
				left = mid + 1;
			}
		}
		cout << ans << " ";
	}
	return 0;
}
