#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end) {

	int i = start - 1;
	int j = start;

	int pivot = arr[end];

	for ( ; j <= end - 1; )
	{
		if (arr[j] <= pivot) {		//merge this element in the smaller part i.e elements which are lesser than the pivot element
			i += 1;
			swap(arr[i], arr[j]);
		}

		// otherwise expand the greater element region
		j += 1;
	}

	swap(arr[i + 1], arr[end]); //swapping the last i.e the pivot element with the first element of the greater region side

	return i + 1;
}

void quicksort(int arr[], int start, int end) {
	if (start >= end) {
		return;
	}

	int indexOfPivotElement = partition(arr, start, end);

	quicksort(arr, start, indexOfPivotElement - 1);
	quicksort(arr, indexOfPivotElement + 1, end);
}

int main(int argc, char const *argv[])
{
	int arr[] = {2, 7, 8, 6, 1, 5, 4};
	int n = 7;
	quicksort(arr, 0, n - 1);
	for (int i = 0; i < 7; ++i)
	{
		cout << arr[i] << " ";
	}
	return 0;
}

