#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
    cout<<"Enter total number of elements :";
	cin>>n;
	int arr[n],i;
	cout<<"Enter "<<n<<" number :";
	for (i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	int find;
	cout<<"Enter a number to find :";
	cin>>find;
    int first=0, last=n-1, middle=(first+last)/2;
	while (first <= last)
	{
		if(arr[middle] < find)
		{
			first = middle + 1;

		}
		else if(arr[middle] == find)
		{
			cout<<find<<" found at location "<<middle+1<<"\n";
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		cout<<"Not found! "<<find<<" is not present in the list.";
	}
    return 0;

}
