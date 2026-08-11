#include<bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);cout.tie(0);
	ios::sync_with_stdio(0);
    int n;
	cin>>n;
	cin.ignore();//忽略一个字符
	char op;
	for(int i=0;i<n;i++){
	string line;
	getline(cin,line);//空格也算
	stringstream ss(line);//能从当中取数据
	string first,second,third;
	ss>>first>>second;
	int x,y;
	if(ss>>third){
		op=first[0];
		x=stoi(second);
		y=stoi(third);
	}
	else{
		x=stoi(first);
		y=stoi(second);
	}
	int result;
	char symbol;
	if(op=='a'){
		result=x+y;
		symbol='+';
	}
	else if(op=='b'){
		result=x-y;
		symbol='-';
	}
	else{
		result=x*y;
		symbol='*';
	}
	  string expression = to_string(x)+symbol+to_string(y) + "=" +to_string(result);
	cout<<expression<<endl<<expression.size();
		
		
	} 
    return 0;
}
