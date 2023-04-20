#include<bits/stdc++.h>
using namespace std;

// Python Implementation of the above approach
void minMax(vector<int>&arr){
	
	// Initialize the min_value
	// and max_value to 0
	int min_value = 0;
	int max_value = 0;
	int n = arr.size();
	
	// Sort array before calculating
	// min and max value
	sort(arr.begin(),arr.end());
	int j = n - 1;
	for(int i = 0; i < n - 1; i++)
	{
			
		// All elements except
		// rightmost will be added
		min_value += arr[i];
		
		// All elements except
		// leftmost will be added
		max_value += arr[j];
		j -= 1;
	}
	
	// Output: min_value and max_value
	cout<<min_value<<" "<<max_value<<endl;
}

// Driver Code
int main(){
	
	vector<int>arr = {10, 9, 8, 7, 6, 5};
	vector<int>arr1 = {100, 200, 300, 400, 500};

	minMax(arr);
	minMax(arr1);

}
