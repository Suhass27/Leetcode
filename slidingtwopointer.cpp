#include<bits/stdc++.h>
using namespace std;
int solve(int a[],int n,int m)
{
    int sum = 0;
    for(int i=0;i<m;i++)
        sum+=a[i];
    int maxsum = sum;
    int i=0;
    for(int j=m;j<n+m;j++)
    {
        sum = sum-a[i];
        sum = sum+a[j%n];
        if(maxsum<sum)
            maxsum = sum;
        i++;
    }
    return maxsum;
}
int main()
{
    int a[] = {246, 608 ,2285, 396 ,1722 ,2346, 277, 2061, 1337 ,2959, 2449, 240, 633 ,1822, 2676};
    int n = sizeof(a)/sizeof(a[0]);
    int m = 3;
    cout<<solve(a,n,m);
    return 0;
}