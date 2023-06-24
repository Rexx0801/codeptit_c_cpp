#include<iostream>
#include<stack>
using namespace std;
int arr[100005];
int a[100005];
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		stack<int>st;
		int i = 0;
		while (i < n) {
			if (st.empty()) {
				st.push(i);
				i++;
			}
			else {
				if (a[i] > a[st.top()]) {
					arr[st.top()] = a[i];
					st.pop();
				}
				else {
					st.push(i);
					i++;
				}
			}
		}
		while (!st.empty()) {
			arr[st.top()] = -1;
			st.pop();
		}
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
}
