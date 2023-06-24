#include<bits/stdc++.h>
using namespace std;

int mod=1e9+7;
int main(){
    int t,n,i,x;
    cin>>t;
    while(t--){
        cin>>n;
		priority_queue<long long,vector<long long >,greater<long long>> q;
        for(int i=0;i<n;i++){
            cin>>x;
            q.push(x);
        }
        long long sum=0;
        while(q.size()>1){
            long long min1=q.top();q.pop();
            long long min2=q.top();q.pop();
            long long tmp=(min1+min2)%mod;
            q.push(tmp);
            sum=(sum+tmp)%mod;
        }
        cout<<sum<<endl;
    }
}
