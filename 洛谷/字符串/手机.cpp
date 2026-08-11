#include<bits/stdc++.h> 
using namespace std;
int ans;
string a;
int num[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};  
int main()
{
	cin.tie(0);cout.tie(0);
	ios::sync_with_stdio(0);
    getline(cin,a);
    for(int i=0;i<a.length();i++)
    {
        if(a[i]>='a'&&a[i]<='z') ans+=num[a[i]-'a'];
        else if (a[i]==' ')ans++; 
    }
    cout<<ans;
    return 0;
}

