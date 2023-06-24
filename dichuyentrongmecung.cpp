#include<iostream>
#include<string>
using namespace std;
int arr[15][15];
char ans[25];
int n;
int check = 0;
void dequy(int i, int j,int count) {
	if (i == n - 1 && j == n - 1) {
		check = 1;
		for (int i = 0; i < count; i++) {
			cout << ans[i];
		}
		cout << " ";
		return;
	}
	if (arr[i + 1][j] == 1) {
		ans[count] = 'D';
		dequy(i + 1, j, count + 1);
	}
	if (arr[i][j + 1] == 1) {
		ans[count] = 'R';
		dequy(i, j + 1, count + 1);
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		check = 0;
		cin >> n;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> arr[i][j];
			}
		}
		if (arr[0][0] == 0 || arr[n - 1][n - 1] == 0) {
			cout << -1;
		}
		else {
			dequy(0, 0, 0);
			if (!check) {
				cout << -1;
			}
		}
		cout << endl;
	}
}
