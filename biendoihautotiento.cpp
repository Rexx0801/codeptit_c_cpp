#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<string> st;
        for(int i = 0 ; i < s.size(); i++){
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                string s2 = st.top();
                st.pop();
                string s1 = st.top();
                st.pop();
                string x = s[i] + s1 + s2 ;
                st.push(x);
            }
            else{
                st.push(string(1,s[i]));
            }
        }
        cout<<st.top()<<endl;
    }
}
