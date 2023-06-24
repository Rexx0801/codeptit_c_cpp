#include<bits/stdc++.h>
using namespace std;

int a[50];
struct xeoto{
	int x;
	string res,date;
};

int main(){
	a[5]=10000;a[7]=15000;a[2]=20000;a[29]=50000;a[45]=70000;
	int n; 
	cin>>n;
	string s;
	xeoto list[n+5];
	for(int i=0;i<n;i++){
		cin.ignore();
		getline(cin,s);
		stringstream ss(s);
		string tmp;
		vector<string> v;
		while(ss>>tmp){
			v.push_back(tmp);
		}
		list[i].x=stoi(v[2]);
		list[i].res=v[3];
		list[i].date=v[4];
		v.clear();
	}
	long long sum=0;
	for(int i=0;i<n;i++){
		if(list[i].res=="IN"){
			sum+=a[list[i].x];
		}
		if(list[i].date!=list[i+1].date){
			cout<<list[i].date<<": "<<sum<<endl;
			sum=0;
		}
	}
	return 0;
}
