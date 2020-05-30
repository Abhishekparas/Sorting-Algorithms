#include<bits/stdc++.h>
using namespace std;

void merge(int* arr, int start, int end) {
	int mid = (start + end) / 2;

	int i = start;
	int j = mid + 1;
	int k = start;

	int temp[100];
	while (i <= mid and j <= end) {
		if (arr[i] < arr[j]) {
			temp[k] = arr[i];
			k++;
			i++;
		}
		else {
			temp[k] = arr[j];
			k++;
			j++;
		}
	}
	while (i <= mid) {
		temp[k] = arr[i];
		k++;
		i++;
	}
	while (j <= end) {
		temp[k] = arr[j];
		k++;
		j++;
	}

	for (int i = start; i <= end; ++i)
	{
		arr[i] = temp[i];
	}
}

void mergesort(int arr[], int start, int end) {
	if (start >= end) {
		return;
	}

	int mid = (start + end) / 2;

	mergesort(arr, start, mid);
	mergesort(arr, mid + 1, end);
	merge(arr, start, end);
}


int main(int argc, char const *argv[])
{
	int arr[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	mergesort(arr, 0, n - 1);
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	return 0;
}