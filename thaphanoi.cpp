#include<iostream>
using namespace std;
void chuyen(char a, char c) {
	cout << a << " -> " << c << endl;
}
void thap(int disk, char a, char b, char c) {
	if (disk == 1) {
		chuyen(a, c);
	}
	else {
		thap(disk - 1, a, c, b);
		chuyen(a, c);
		thap(disk - 1, b, a, c);	
	}
}
int main() {
	int n;
	cin >> n;
	thap(n, 'A', 'B', 'C');
}
