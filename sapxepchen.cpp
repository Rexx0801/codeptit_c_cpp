#include <bits/stdc++.h>
using namespace std;

void in(int a[],int n){
	cout<<"Buoc "<<n-1<<": ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int n; 
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=1;i<n;i++){
		int j=i-1;
		in(a,i);
		int k=a[i];
		while(j>=0&&a[j]>k){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=k;
	}
	in(a,n);
}
