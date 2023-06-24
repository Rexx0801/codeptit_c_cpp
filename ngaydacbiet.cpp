#include<iostream>
using namespace std;
char arr[100];
int check() {
	if (arr[0] == '0' && arr[1] == '0') return 0;
	if (arr[2] == '2') return 0;
	if (arr[2] == '0' && arr[3] == '0') return 0;
	if (arr[4] == '0') return 0;
	return 1;
}
void dequy(int cnt) {
	if (cnt == 8) {
		if (check()) {
			for (int i = 0; i < 2; i++) {
				cout << arr[i];
			}
			cout << "/";
			for (int i = 2; i < 4; i++) {
				cout << arr[i];
			}
			cout << "/";
			for (int i = 4; i < 8; i++) {
				cout << arr[i];
			}
			cout << endl;
		}
		return;
	}
	arr[cnt] = '0';
	dequy(cnt + 1);
	arr[cnt] = '2';
	dequy(cnt + 1);
}
int main() {
	dequy(0);
}
