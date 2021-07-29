//bubble sort
#include <iostream>
using namespace std;

//funciton to swap numbers
void swap(int *x, int *y)
{
	int p=*x;
	*x=*y;
	*y=p;
}

//function to sort using bubble sort technique
void bubble(int arr[], int n)
{
	for(int i=0;i<n-1;i++)
	{
	        for(int j=0;j<n-i-1;j++)
	        {
	                if(arr[j]>arr[j+1]) //comparing two adjacent numbers
	                        swap(&arr[j],&arr[j+1]); // bringing the largest element at the end of array
	        }
	}
}

int main()
{
	int n;
	cout<<"enter number of elements : "<<endl;
	cin>>n;

	int arr[n];
	for(int a=0;a<n;a++)
	{
	        cin>>arr[a];
	}
	bubble(arr,n); //function called
	for(int b=0;b<n;b++)
	        cout<<arr[b]<<" "; //printing sorted array
	cout<<endl;
	return 0;
}

