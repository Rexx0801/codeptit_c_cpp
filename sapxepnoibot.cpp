#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[105];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int cnt = 1;
	for (int i = 0; i < n; i++) {
		int check = 0;
		for (int j = 0; j < n-1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				check = 1;
			}
		}
		if (!check) {
			break;
		}
		cout << "Buoc " << i + 1 << ": ";
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;	
	}
}
