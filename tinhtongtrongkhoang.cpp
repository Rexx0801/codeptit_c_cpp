#include<bits/stdc++.h> 
using namespace std; 

int main(){ 
    int t; 
	cin>>t; 
	while(t--){ 
	    int a,b,c,d; 
		cin>>a>>b; 
		int arr[a]; 
		for(int i=0;i<a;i++){ 
		    cin>>arr[i];
		}while(b--){ 
		    long long sum=0; 
			cin>>c>>d; 
			for(int i=c-1;i<d;i++){ 
			    sum=sum+arr[i];
			}
			cout<<sum<<endl;
		} 
	}
}
