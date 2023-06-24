#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n,a,b,dem=0;
		cin>>m>>n>>a>>b;
		for(int i=m;i<=n;i++){
			if(i%a==0||i%b==0){
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}
