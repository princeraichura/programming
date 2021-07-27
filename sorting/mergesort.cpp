//sorting using merge sort algorithm
#include <iostream>
#include<cmath>
using namespace std;

//function to merge and sort numbers
void merge(int arr[], int l, int m, int r, int size)
{
	int i = l;
	int j = m + 1;
	int k = l;
	int temp[size]; // creating an array for storing elements temporary

	while (i <= m && j <= r)
	{
	        if (arr[i] <= arr[j])
       		{
        	    temp[k] = arr[i];
        	    i++;
        	    k++;
        	}
       		else
        	{
            		temp[k] = arr[j];
            		j++;
            		k++;
        	}
	}

	while (i <= m)
	{
	        temp[k] = arr[i];
	        i++;
	        k++;
	}
	
	while (j <= r)
	{
	        temp[k] = arr[j];
       		j++;
	        k++;
	}
	for (int p = l; p <= r; p++)
	{
	        arr[p] = temp[p];  // storing the elements from temporary array to original array
	}
}

void mergeSort(int arr[], int l, int r, int size)
{
	if (l < r)     //base case for recursion
	{
	        int m = (l + r) / 2;		 //dividing into half until only one element is left
	        mergeSort(arr, l, m, size);  		//mergesorting on left
	        mergeSort(arr, m + 1, r, size); 	//mergesorting on right

	        merge(arr, l, m, r, size); 	//merge function call
	}
}

int main()
{
	cout << "Enter size of array: " << endl;
	int n;
	cin>>n;
	int arr[n];
	cout<<"Enter "<< n <<" numbers : "<< endl;
	
	for (int i=0;i<n;i++)
	{
	        cin>>arr[i];
	}
	
	mergeSort(arr,0,(n-1),n); //function call

	cout << "After Sorting" << endl;
	for (int i=0;i<n;i++)
	        cout<<arr[i]<< " ";
	cout<<endl;
	int tc;
	tc=n*log2(n);
	cout<<"Time complexity : O("<<tc<<") i.e. O(NlogN)"<<endl;
	cout<<"Space complexity : O("<<n<<") i.e. O(N)"<<endl;	
	return 0;
}
