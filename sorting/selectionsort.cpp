//selection sort
#include <iostream>
using namespace std;

//swapping the numbers using this function
void swap(int *x,int *y)
{
	int a=*x;
	*x=*y;
	*y=a;
}

//selecting the lowest number and bringing it at the beginning using this function
void selection(int arr[],int n)
{
int min;
for (int i=0;i<n-1;i++)
{
        min=i; //assuming the first element as minimum then next and so on....
       	for(int j=i+1;j<n;j++) 
        {
                if(arr[min]>arr[j])
                        min=j;
                swap(&arr[min],&arr[i]);  //bringing miminum element at the beginning of array
        }
}
}

int main()
{
int n;
cout<<"enter the size of array :"<<endl;
cin>>n;

int arr[n];
cout<<"enter "<<n<<" elements : "<<endl;
for(int a=0;a<n;a++)
{
        cin>>arr[a];
}

selection(arr,n); //function called

for(int k=0;k<n;k++) 
{
        cout<<arr[k]<<" "; // printing sorted array
}
cout<<endl;
return 0;
}

