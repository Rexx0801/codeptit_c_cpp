#include<bits/stdc++.h>
using namespace std;
struct danhsach{
  	string a;
  	int dem;
};
string chuyen(string s){
  	for(int i=0;i<s.length();i++) s[i]=tolower(s[i]);
  	stringstream ss(s);
  	string temp,s1;
  	int k=0;
  	vector<string>v1;
  	while(ss>>temp){
    	v1.push_back(temp);
    	s=v1.at(k++);
    	s1=s1+s[0];
  	}
  	for(int i=0;i<s1.length()-1;i++){
     	s+=s1[i];
  	}
  	return s;
}
int main(){
  	int n,k=0;
  	cin>>n;
  	cin.ignore();
  	string s;
  	struct danhsach list[100];
  	for(int i=1;i<=n;i++){
    	getline(cin,s);
    	s=chuyen(s);
    	list[i].a=s;
    	k=0;
    	for(int j=1;j<i;j++){
      		if(list[i].a==list[j].a) k++;
    	}
    list[i].dem=k+1;
    if(list[i].dem==0)cout<<list[i].a<<"@ptit.edu.vn"<<endl;
    else cout<<list[i].a<<list[i].dem<<"@ptit.edu.vn"<<endl;
  	} 
}
