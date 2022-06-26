#include<bits/stdc++.h>
using namespace std;
bool solve(int a[] ,int n ,int k,int sum)
{
    int curr_sum =0 ;
    for(int i=0;i<k;i++)
    {
        curr_sum+=a[i];
    }
    if(curr_sum==sum)
    {
        return true;
    }
    for(int i=k;i<n;i++)
    {
        curr_sum+=(a[i]-a[i-k]);
         if(curr_sum==sum)
            {
              return true;
             }
    }
    return false;
    
}
int main()
{
    int a[] = {1,8,30,-5,20,7};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 3;int sum =44;
    if(solve(a,n,k,sum))
    {
        cout<<"The sum is present "<<endl;
    }
    else
    {
        cout<<"The sum is not found "<<endl;
    }
    return 0;
}
