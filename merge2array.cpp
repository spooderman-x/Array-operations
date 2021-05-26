#include<bits/stdc++.h>
using namespace std;
void mergeArray(int a[],int b[],int n,int m)
{
     int c[n+m];
     for(int i=0;i<n;i++)
     	c[i]=a[i];
     for(int i=n,j=0;i<(m+n),j<m;i++,j++)
     {
     	c[i]=b[j];
     }
     for(int i=0;i<(m+n);i++)
     	cout << c[i] << " ";
}
int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	int m;
	cin >> m;
	int b[m];
	for(int i=0;i<m;i++)
		cin >> b[i];
		
		mergeArray(a,b,n,m);
}