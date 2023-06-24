#include<iostream> 
#include<vector> 
using namespace std; 
void process(){ 
	long long n,i,k,c,dem=0; 
	cin>>n; 
	vector<int>a; 
	for(i=1;i<=n;i++){ 
		int x;
		cin>>x; 
		a.push_back(x); 
	} 
	cin>>c>>k; 
	for(i=0;i<n;i++){ 
		if(a[i]==k) dem=1; 
		if(a[i]>k) break; 
	} 
	long long tr=i-2,s=i; 
	if(dem==0){ 
		a.insert(a.begin()+i,1,k); 
		tr++,s++,n++; 
	} 
	while(s-tr<=c+1){ 
		int s1=s,tr1=tr; 
		if(s>n-c/2){ 
			for(i=0;i<n-s1;i++){ 
				cout<<a[tr]<<" "<<a[s]<<" "; 
				tr--,s++; 
			} 
			for(i=tr;s-tr<c+2;i++){ 
				cout<<a[tr]<<" "; 
				tr--; 
			} 
		}else if(tr<c/2-1){ 
			for(i=0;i<=tr1;i++){ 
				cout<<a[tr]<<" "<<a[s]<<" "; 
				tr--,s++; 
			} 
			for(i=s;s-tr<c+2;i++){ 
				cout<<a[s]<<" ";
				s++; 
			} 
		}else{ 
			cout<<a[tr]<<" "<<a[s]<<" "; 
			s++,tr--; 
		} 
	} 
	cout<<endl; 
} 
int main(){ 
	int t;
	cin>>t; 
	while(t--){ 
		process(); 
	}
}
