#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
struct Points{
    double x1,y1,x2,y2,x3,y3;
};
void Input(Points&p){
    cin>>p.x1>>p.y1>>p.x2>>p.y2>>p.x3>>p.y3;
}
void Check(Points&p){
    double s,r,dt;
    double d1=sqrt(pow(p.x1-p.x2,2)+pow(p.y1-p.y2,2));
    double d2=sqrt(pow(p.x2-p.x3,2)+pow(p.y2-p.y3,2));
    double d3=sqrt(pow(p.x3-p.x1,2)+pow(p.y3-p.y1,2));
    if(d1+d2<=d3||d1+d3<=d2||d2+d3<=d1){
        cout<<"INVALID"<<endl;
    }else{
        s=0.25*sqrt((d1+d2+d3)*(d1+d2-d3)*(d2+d3-d1)*(d3+d1-d2));
        r=(d1*d2*d3)*(1/(4*s));
        dt=PI*r*r;
        cout<<fixed<<setprecision(3)<<dt<<endl;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        struct Points p;
        Input(p);
        Check(p);
    }
}
