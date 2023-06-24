#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<char> res,temp;
        for(int i= 0 ; i < s.size() ; i++){
            if(s[i] == '('){
               temp.push(s[i]);
            }
            else{
                if(temp.empty()){
                    res.push(s[i]);
                    temp.push(s[i]);
                }
                else{
                    temp.pop();
                }
            }
        }
        if(temp.size()){
            cout<<res.size() + temp.size()/2<<endl;
        }
        else{
            cout<<res.size()<<endl;
        }
    }
}
