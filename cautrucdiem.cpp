#include<bits/stdc++.h>
using namespace std;

struct Point{
	double x,y;
};
void input(struct Point&p){
	cin>>p.x>>p.y;
}
double distance(struct Point&p,struct Point&q){
	return sqrt((p.x-q.x)*(p.x-q.x)+(p.y-q.y)*(p.y-q.y));
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}

