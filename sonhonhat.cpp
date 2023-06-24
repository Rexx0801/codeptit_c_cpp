#include <bits/stdc++.h>
using namespace std;

string nhonhat(int s, int d){
	if(s>9*d) return "-1";
	string res="";
	int sum=0,k=9;
	while(res.size()<d){
		if(sum+k<=s){
			sum+=k;
			res.push_back(k+'0');
		}
		else k--;
		if(k<0) k=0;
	}
	reverse(res.begin(),res.end());
	if(res[0]=='0'){
		res[0]='1';
		int i=1;
		while(res[i]=='0') i++;
		if(i!= 1) res[i]--;
	}
	return res;
}

int main(){
	int t; 
	cin>>t;
	while(t--){
		int s,d;
		cin>>s>>d;
		cout<<nhonhat(s,d);
		cout<<endl;
	}
}

