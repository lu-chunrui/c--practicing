#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int queen[14];
bool colused[14];
bool diag1[30];
bool diag2[30];
ll total=0;
void dfs(int row){
	if(row>n){
		total++;
		if(total<=3){
			for(int i=1;i<=n;i++){
				cout<<queen[i];
				if(i<n) cout<<" ";
			}
			cout<<endl;
		}
		return;
	} 
	for(int c=1;c<=n;c++){
		int d1=row-c+n;
		int d2=row+c;
		if(colused[c]||diag1[d1]||diag2[d2]){
			continue;
		}
		queen[row]=c;
		colused[c]=true;
		diag1[d1]=true;
		diag2[d2]=true;
		dfs(row+1);
		colused[c]=false;
		diag1[d1]=false;
		diag2[d2]=false;
	}
	
} 



int main(){
	cin.tie(0);cout.tie(0);
	ios::sync_with_stdio(0);
	cin>>n;
	dfs(1);
	cout<<total<<endl;
	
	
	return 0;
}
