//for explanation of this program go to my youtube channel named efficient learning world
// Explanation of the program : https://youtu.be/m4j-pzAMcHA
#include <iostream>
#include <limits.h>
using namespace std;
/* Function to print the second largest elements */
void print2largest(int arr[], int arr_size)
{
	int first, second;
	/* There should be atleast two elements */
	if(arr_size < 2) {
		cout<<" Invalid Input ";
		return;
	}
	first = second = INT_MIN;
	for (int i = 0; i < arr_size; i++) {
		/* If current element is greater than first then update both first and second */
		if (arr[i] > first) {
			second = first;
			first = arr[i];
		}
		/* If arr[i] is in between first and second then update second */
		else if (arr[i] > second && arr[i] != first)
			second = arr[i];
	}
	if (second == INT_MIN)
	 cout<<"There is no second largest element";
	else
	cout<<"The first largest element is "<< first<<endl;
	 cout<<"The second largest element is "<< second;
}
int main()
{
	int arr[] = {0,1,5,-3,4};  
	int n = sizeof(arr) / sizeof(arr[0]);
	print2largest(arr, n);
	return 0;
}
