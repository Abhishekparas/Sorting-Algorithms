#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int largest = -1;
	for (int i = 0; i < n; i++) {
		largest = max(largest, arr[i]);
	}
	int* freq = new int[largest + 1] {0};
	for (int i = 0; i < n; i++) {
		freq[arr[i]]++;
	}
	int k = 0;
	for (int i = 0; i <= largest; i++) {
		while (freq[i] > 0) {
			arr[k] = i;
			freq[i]--;
			k++;
		}
	}
	for (int i = 0 ; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}