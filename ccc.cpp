#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    	int m,n;
    	cin>>m>>n;
    	int a[m][n];
    	for(int i=0;i<m;i++){
    		for(int j=0;j<n;j++){
    			cin>>a[i][j];
			}
		}
    	int b[m+1][n+1];
    	for(int i=0;i<n;i++){
        	b[0][i]=a[0][i];
        	for(int j=1;j<m;j++)
            	b[j][i]=(a[j][i]==0)?0:b[j-1][i]+1;
    	}
    	for(int i=0;i<m;i++){
        	int dem[m+1]={0};
        	for(int j=0;j<n;j++) dem[a[i][j]]++;
        	int p=0;
//        	for(int j=m;j>=0;j--){
//            	if(dem[j]>0){
//                	for(int k=0;k<dem[j];k++){
//                    	b[i][p]=j;
//                    	p++;
//                	}
//            	}
//        	}
    	}
    	int x,max=0;
    	for(int i=0;i<m;i++){
        	for(int j=0;j<n;j++){
            	x=(j+1)*b[i][j];
            	if(x>max) max=x;
        	}
    	}
		cout<<max<<endl;
	}
}
