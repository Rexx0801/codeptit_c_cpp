#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n=0;
		int chan=0,le=0;
		char k=' ';
		while(k!='\n'){
			int a;
			cin>>a;
			n++;
			if(a%2==0) chan++;
			else le++;
			k=getchar();
		}
		if(n%2==0&&chan>le||n%2==1&&le>chan){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
