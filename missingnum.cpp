#include<bits/stdc++.h>
using namespace std;
int solve(int a[],int n)
{
    sort(a,a+n);
    int low = *min_element(a,a+n);
    for(int i=1;i<n;i++)
    {
        if((a[i]-a[i-1])==1)
        {
            continue;
        }
        else
            return i;
    }
}
int main()
{
    int a[] = {0,1};
    int n =  sizeof(a)/sizeof(a[0]);
    int s = solve(a,n);
    cout<<s<<endl;
    return 0;
}