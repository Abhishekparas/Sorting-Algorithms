#include<bits/stdc++.h>
using namespace std;

void selectionSort(int n, int* arr) {
	for (int i = 0; i < n - 1; ++i)
	{
		// find out the samllest element in the unsorted part
		int minIdx = i;
		for (int j = i; j <= n - 1; ++j)
		{
			if (arr[j] < arr[minIdx]) {
				minIdx = j;
			}
		}
		swap(arr[i], arr[minIdx]);
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	selectionSort(n, arr);
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	return 0;
}