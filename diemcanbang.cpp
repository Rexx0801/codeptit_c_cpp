#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        long long sum=0;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        int check =-1;
        long long sum1=0;
        for(int i=0;i<n;i++){
            sum1+=a[i];
            if(sum1==(sum-sum1-a[i+1])){
                check=i+2;
                break;
            }
        }
        cout<<check<<endl;
    }
}
