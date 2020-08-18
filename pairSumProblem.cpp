#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	n = 8;
	int arr[n] = {1,3,5,7,10,11,12,13};
	int sum = 16;

	int i = 0;
	int j = 7;

	while(i < j){
		int currSum = arr[i] + arr[j];
		if(currSum < sum){
			i++;
		}
		else if(currSum > sum){
			j--;
		}
		else if(currSum == sum){
			cout<<arr[i]<<" "<<arr[j]<<endl;
			i++;
			j--;
		}
	}
	return 0;
}

// the array is sorted we have to find out the pair which sums to k, 2 pointer approach can aonly be applied when array is sorted