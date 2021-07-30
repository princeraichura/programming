//insertion sort
#include<iostream>
using namespace std;

//sorting using insertion sort algorithm with this function
void insertionsort(int n,int arr[])
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
	        key=arr[i];
	        j=i-1;
	
	        while(j>=0 && key<arr[j])
	        {
	                arr[j+1]=arr[j]; //shifting num. that is greater than key to one position ahead
	                j--;
	       	}
        	arr[j+1]=key; // if j=-1 
	}
}


int main()
{
	int n;
	cout<<"enter size of array"<<endl;
	cin>>n;

	int arr[n];
	cout<<"enter "<<n<<" elements"<<endl;
	for (int a=0;a<n;a++)
	{
	        cin>>arr[a];
	}
	insertionsort(n,arr); //function called
	for(int b=0;b<n;b++)
	        cout<<arr[b]<<" "; //printing sorted array
	cout<<endl;
	return 0;
}

