//ALERT:there is differnce between subarrays and subsequences.example-
//if array is [1,2,3,4] then 1,3 is not a subarray.

// For an array of size n there are (n*(n+1))/2 subarrays.
 
#include<bits/stdc++.h>
using namespace std;
int subarray(int a[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			for(int k=i;k<=j;k++)
				{cout << a[k] << " ";
			}
			count++;
		  cout << "\n";
		}
	}
	return count;
}
int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	int count1=subarray(a,n);
		cout << "Total subarrays=" << count1;
}