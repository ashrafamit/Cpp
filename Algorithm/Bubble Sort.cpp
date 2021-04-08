#include<bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of element: ";
    cin>>n;
    int arr[n],i,j,temp;
    cout<<"Enter array values: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    auto start = high_resolution_clock::now();
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"\nAfter Bubble sort the array is: ";
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";

    cout<<endl;

    auto stop = high_resolution_clock::now();
	auto duration = duration_cast<nanoseconds>(stop - start);

    cout << duration.count() << endl;
    return 0;
}
