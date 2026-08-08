#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    int m, n;
    cin >> m >> n;
    int arr[10] = {0};
    for (int i = m; i <= n; i++)
    {
        int b = i;
        while (b > 0)
        {
            int a = b % 10;
            b = b / 10;
            arr[a]++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
