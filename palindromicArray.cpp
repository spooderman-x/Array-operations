#include<bits/stdc++.h>
using namespace std;
bool palinArray(int a[],int n)
{
  int a1[n];
  for(int i=n-1,j=0;i>=0,j<n;i--,j++)
  a1[j]=a[i];
  int count=0;
  for(int k=0;k<n;k++)
    if(a1[k]==a[k])
      count++;
  if(count==n)
    return true;
  else
    return false;
    
      
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
      cin >> a[i];
     bool ans=palinArray(a,n);
     if(ans)
     cout << "True";
     else
     cout << "false";
}
