#include<bits/stdc++.h>
using namespace std;
int solve(int a[],int n,int k)
{
    int curr_sum = 0;
    for(int i=0;i<k;i++)
    {
        curr_sum+=a[i];
    }
    int max_sum = curr_sum;
    for(int i=k;i<n;i++)
    {
        curr_sum +=(a[i]-a[i-k]);
        max_sum = max(curr_sum,max_sum);
    }
    return max_sum;
}
int main()
{
    int a[] = {246 ,608 ,2285 ,396 ,1722 ,2346 ,277 ,2061 ,1337, 2959, 2449 ,240 ,633 ,1822 ,2676};
    int n = sizeof(a)/sizeof(a[0]);
    int k =3;
    
    cout<<"The max sum of the "<<k<<" windows is "<<endl;
    cout<<solve(a,n,k)<<endl;
    return 0;
}