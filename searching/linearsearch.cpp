//finding number using linear search
#include<iostream>
using namespace std;

//function to find a number using linear search
int linearsearch(int arr[], int n, int x)
{
	for(int j=0;j<n;j++)	//linear traversal to find number
		if(arr[j]==x)
			return j;      //return the index of the number
		return -1;		//if not found it will return -1
}

int main()
{
	int n;
	cout<<"enter size of the array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter "<<n<<" numbers"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int x;
	cout<<"enter a number you want to find "<<endl;
	cin>>x;
	int idx = linearsearch(arr,n,x); //function called
	if(idx==-1)
		cout<<"number not found"<<endl;
	else
		cout<<"number is at index "<<idx<<endl;
	
	return 0;
}
	
