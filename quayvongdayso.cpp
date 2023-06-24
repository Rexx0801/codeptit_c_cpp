#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,d,j=0;
		cin>>n>>d;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=d;i<n;i++){
			b[j]=a[i];
			j++;
		}
		for(int i=0;i<d;i++){
			b[j]=a[i];
			j++;
		}
		for(int i=0;i<n;i++){
			cout<<b[i]<<" ";
		}
		cout<<"\n";
	}
}
