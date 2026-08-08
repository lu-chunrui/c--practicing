#include<bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);cout.tie(0);
	ios::sync_with_stdio(0);
	int s1,s2,s3;
	cin>>s1>>s2>>s3;
	int sum=s1+s2+s3;
	vector<int>arr(sum+1,0);
	for(int i=1;i<=s1;i++){
		for(int j=1;j<=s2;j++){
			for(int k=1;k<=s3;k++){
				arr[i+j+k]++;
			}
		}
	}
	int max=0;
	int max1=0;
	for(int i=1;i<=s1+s2+s3;i++){
		if(arr[i]>max){
			max=arr[i];
			max1=i;
		}
	}
	cout<<max1;
	return 0;
}
