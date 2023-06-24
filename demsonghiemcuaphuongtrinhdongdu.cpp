#include<bits/stdc++.h>
using namespace std;

long long findCountOfSolutions(long long n, long long p){
    long long ans=0;
    for(long long x=1;x<p;x++){
        if((x*x)%p==1){
            long long last=x+p*(n/p);
            if(last>n)
                last-=p;
            ans+=((last-x)/p+1);
        }
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,p;
        cin>>a>>p;
        cout<<findCountOfSolutions(a,p)<<endl;
    }
}
