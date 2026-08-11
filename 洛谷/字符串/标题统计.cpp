#include<bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);cout.tie(0);
	ios::sync_with_stdio(0);
	string a;
	getline(cin,a);//读取整行输入空行也算
	int b=a.size();
	int sum=0;
	for(int i=0;i<b;i++){
		if(a[i]!=' '){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
