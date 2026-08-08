#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    string num[10][5] = {
        {"XXX", "X.X", "X.X", "X.X", "XXX"},
        {"..X", "..X", "..X", "..X", "..X"},
        {"XXX", "..X", "XXX", "X..", "XXX"},
        {"XXX", "..X", "XXX", "..X", "XXX"},
        {"X.X", "X.X", "XXX", "..X", "..X"},
        {"XXX", "X..", "XXX", "..X", "XXX"},
        {"XXX", "X..", "XXX", "X.X", "XXX"},
        {"XXX", "..X", "..X", "..X", "..X"},
        {"XXX", "X.X", "XXX", "X.X", "XXX"},
        {"XXX", "X.X", "XXX", "..X", "XXX"}};
    vector<char> arr(n);
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    for (int i = 0; i < 5;i++){
        for (int j = 0; j < n;j++){
            cout << num[arr[j]-'0'][i];
            if (j != n - 1)
                cout << ".";
        }
        cout << endl;
    }

        return 0;
}