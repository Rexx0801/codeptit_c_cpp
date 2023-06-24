#include<bits/stdc++.h>
using namespace std;

int xuly(int n)
{
    vector <int> arr;
    int i = 1;
    while(i*i <= n){
        arr.push_back(i*i);
        i++;
    }
    vector <int> dp(n+1, INT_MAX);
    dp[n] = 0;
    for(int i = n-1; i>=0; i--){
        for(int j = 0; j<arr.size(); j++){
            if(i + arr[j] <= n){
                dp[i] = min(dp[i], dp[i+arr[j]]);
            }
 
        }
        dp[i]++;
    }
    return dp[0];
     
}
 
 int main(){
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         cout<<xuly(n)<<endl;
     }
 }
