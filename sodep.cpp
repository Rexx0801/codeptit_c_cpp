#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string n;
		cin>>n;
		int dem=0,dem1=0;
		for(int i=0;i<n.size();i++){
			if(n[i]%2!=0){
				dem++;
			}
		}
		for(int i=0;i<n.size()/2;i++){
			if(n[i]!=n[n.size()-1-i]){
				dem1++;
			}
		}
		if(dem==0&&dem1==0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
