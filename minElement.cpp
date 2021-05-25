#include<bits/stdc++.h>
using namespace std;
int minElement(int a[],int n)
{
	int min=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
	}
    return min;
}
int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	cout << minElement(a,n);
	//cout << ans ;
}