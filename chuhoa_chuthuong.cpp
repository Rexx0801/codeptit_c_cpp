#include <iostream>
#include<string.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
        char str[25];
        cin>>str;
        for(int i=0;i<=strlen(str);i++){
            if(str[i]>='a'&&str[i]<='z'){
        	    str[i]=str[i]-32;
        	    cout<<str<<endl;
		    }else if(str[i]>='A'&&str[i]<='Z'){
			    str[i]=str[i]+32;
			    cout<<str<<endl;
		    }
        }
    }
}
