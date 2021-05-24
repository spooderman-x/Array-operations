#include<bits/stdc++.h>
using namespace std;
int maxElement(int a[],int n)
{
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
    return max;
}
int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	cout << maxElement(a,n);
	//cout << ans ;
}