//it works only for positive number
#include<bits/stdc++.h>
using namespace std;
bool solve(int a[],int n,int sum)
{
    int curr_sum=a[0],s=0;
    for(int e=1;e<n;e++)
    {
        while(curr_sum>sum && s<e+1) //removing element from the previous window if the sum if greater
        {
            curr_sum-= a[s];
            s++;
        }
        if(curr_sum==sum) // returing true if it is found
            return true;
        if(e<n)
            curr_sum+=a[e]; // adding elememts to the new window

    }
    return (curr_sum==sum); // last window must be cheacked manually so cheacking it,  if is true returns 1 else 0
}
int main()
{
    int a[] = {1,4,20,3,10,5};
    int n = sizeof(a)/sizeof(a[0]);
    int sum = 33 ;
    if(solve(a,n,sum))
        cout<<"YES"<<endl;
    else
        cout<<"NO\n"<<endl;
    return 0;
}
