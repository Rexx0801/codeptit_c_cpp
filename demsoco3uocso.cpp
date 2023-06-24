#include<bits/stdc++.h> 
using namespace std; 
typedef unsigned long long ull; 

ull snt(ull n){ 
	if(n<2){ 
		return 0; 
	} 
	for(ull i=2;i<=sqrt(n);i++){ 
		if(n%i==0){ 
			return 0; 
		} 
	} 
	return 1; 
} 

void solution(){ 
	ull n; 
	cin>>n; 
	ull dem=0; 
	for(ull i=0;i*i<=n;i++){ 
		if(snt(i)) 
			dem++; 
	} 
	cout<<dem<<endl; 
} 

int main(){ 
	int t; 
	cin>>t; 
	while(t--){ 
		solution(); 
	}
}
