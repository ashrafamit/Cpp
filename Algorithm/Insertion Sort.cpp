#include<bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of element: ";
    cin>>n;
    int array[n],i,j;
    cout<<"Enter array values: ";
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    auto start = high_resolution_clock::now();


    int temp;
    for (i = 1; i < n; i++)
    {
        temp = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > temp)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = temp;
    }
    cout<<"After Insertion sort: \n";
    for (i=0; i < n; i++)
    cout<< array[i]<<"\t";
    cout<<endl;

    auto stop = high_resolution_clock::now();
	auto duration = duration_cast<nanoseconds>(stop - start);

    cout << duration.count() << endl;
    return 0;
}
