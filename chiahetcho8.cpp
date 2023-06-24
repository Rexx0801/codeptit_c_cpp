#include <bits/stdc++.h> 
using namespace std; 

string s; 
int kq(int k){ 
	int dem=0; 
	for(int i=0;i<s.size();i++){ 
		int n=0; 
		for(int j=i;j<s.size();j++){ 
			n=n*10+s[j]-'0'; 
			n=n%k; 
			if(n==0) dem=dem+1; 
		} 
	} 
	return dem; 
} 

int main(){ 
	int t;
	cin>>t; 
	while(t--){ 
		cin>>s; 
		cout<<kq(8)-kq(24)<<endl; 
	}
}
