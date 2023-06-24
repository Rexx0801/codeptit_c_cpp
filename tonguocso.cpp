#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    while(n--){
        int a;
        cin>>a;
        for(int i=2;i<=a;i++){
            while(a%i==0){
                sum+=i;
                a=a/i;
            }
        }
    }
    cout<<sum<<endl;
}
