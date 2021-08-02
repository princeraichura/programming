//finding a number using binary search
#include<iostream>
using namespace std;

//function to search an element using binary search approach
int binarysearch(int arr[],int l,int r, int x)
{
        if (r>=l)       // base case for recursion 
        {
                int m= l+(r-l)/2;
                // bcoz of corner case where r is max value of int this formula is used

                if (arr[m]==x)
                        return m;               //if number is in mid then it will return middle idx

                if (arr[m]<x)
                        return binarysearch(arr,m+1,r,x);       // will search on right part

                return binarysearch(arr,l,m-1,x);               //else it will search on left part
        }
        return -1;      //if element is not present, it will return -1
}

int main()
{
        int n;
        cout<<"enter size of array :"<<endl;
        cin>>n;
        int arr[n];
        cout<<"enter "<<n<<" numbers in increasing order"<<endl;

        for(int i=0;i<n;i++)
        {
                cin>>arr[i];
        }

        int x;
        cout<<"enter a number you want to find in the array :"<<endl;
        cin>>x;
	int idx = binarysearch(arr,0,n-1,x); //funtion called and the returned value is assigned to idx

        if (idx==-1)
                cout<<"number not found"<<endl;
        else
                cout<<"number is at index "<<idx<<endl;

        return 0;
}
