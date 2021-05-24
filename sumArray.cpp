#include<iostream>
using namespace std;
int sumArray(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int ans=sumArray(a,n);
    cout << ans;
    
}