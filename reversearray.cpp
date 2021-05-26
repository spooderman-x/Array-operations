#include<bits/stdc++.h>
using namespace std;
void value(int a[],int n)
{
  int arr[n];
  for(int i=n-1,j=0;i>=0,j<n;i--,j++)
    arr[j]=a[i];
  for(int i=0;i<n;i++)
  cout << arr[i] << " ";
}
int main()
{
  int n;
  cin >> n;
  int a[n];
  for(int i=0;i<n;i++)
    cin >> a[i];
  
   value(a,n);
    
    
    
    return 0;
  
}