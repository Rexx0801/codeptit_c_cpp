#include<iostream>
using namespace std;
int arr[1000000];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int x;
	cin >> x;
	for (int i = 0; i < n; i++) {
		if (arr[i] != x) {
			cout << arr[i] << " ";
		}
	}
}
