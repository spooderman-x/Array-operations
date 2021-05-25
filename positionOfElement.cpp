#include<bits/stdc++.h>
using namespace std;
int findElement(int a[],int n,int k)
{ 
 //   int ans=0;
    for(int i=0;i<n;i++)
    {
    	if(a[i]==k)
    	{
    		cout << i+1;
    	    break;
    	}
    }
    //return ans;
} 

int main()
{
	int n;
	cin >>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	int elementToFind;
	cin >> elementToFind;
    findElement(a,n,elementToFind);

	return 0;

}