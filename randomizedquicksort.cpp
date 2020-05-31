#include <bits/stdc++.h>
using namespace std;

void shuffle(int* arr, int start, int end) {
	srand(time(NULL));

	int i, j;

	for (int i = end; i > 0; i--) {
		j = rand() % (i + 1);
		swap(arr[i], arr[j]);
	}
}

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
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int n = 7;
	shuffle(arr, 0, n - 1);
	quicksort(arr, 0, n - 1);
	for (int i = 0; i < 8; ++i)
	{
		cout << arr[i] << " ";
	}
	return 0;
}

