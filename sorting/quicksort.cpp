//sorting using quicksort
#include<iostream>
#include<cmath>
using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//finfing correct position of pivot and partitioning the array using this function
int part(int array[], int l, int h)
{
	int pivot =array[h], i=(l-1);  		//selecting last element as pivot
	for(int j=l ; j<h ; j++)
	{
	        if(array[j]<=pivot)
	        {
	                i++;
	                swap(&array[i], &array[j]);
	        }
	}
	swap(&array[i+1], &array[h]);
	return 	(i+1);
}

void quicksort(int array[] , int l , int h)
{
        if(l<h)
        {
                int pivot = part(array,l,h); //function call
                quicksort(array, l, pivot-1);  // bringing numbers less than pivot to its left side
                quicksort(array, pivot+1, h); // bringing numbers greater than pivot to its right side
        }
}

int main()
{
	int n;
	cout<<"enter size of array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter "<<n<<" numbers : "<<endl;
	
	for(int k=0;k<n;k++)
	{
	        cin>>arr[k];
	}
	
	quicksort(arr,0,n-1); // function call
	
	cout<<"after sorting "<<endl;	
	for(int z=0;z<n;z++)
	{
	        cout<<arr[z]<<" ";
	}
	cout<<endl;
	int tc,sc;
	tc=n*log2(n);
	sc=log2(n);
	cout<<"Time  complexity : O("<<tc<<") i.e. O(NLogN)"<<endl;
	cout<<"Space complexity : O("<<sc<<") i.e. O(logN)"<<endl;
	return 0;
}

