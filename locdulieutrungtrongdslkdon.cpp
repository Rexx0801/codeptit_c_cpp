#include<iostream>
using namespace std;
int arr[1000000];
int used[1000000];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (used[arr[i]] == 0) {
			cout << arr[i] << " ";
			used[arr[i]] = 1;
		}
	}
}
