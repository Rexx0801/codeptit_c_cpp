#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	long long sum = 0;
	for(int i = 0; i < n; i++){
		long long x;
		cin>>x;
		if(x > 0){
			x <<= 1;
			sum += x;
		}
	}
	cout<<sum<<endl;
	return 0;
} 
