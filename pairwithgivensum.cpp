#include<bits/stdc++.h>
using namespace std;
bool solve(int a[],int n ,int sum)
{
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        if(s.find(sum-a[i])!=s.end())
            return true;
        else
            s.insert(a[i]);
    }
    return false;
}
int main()
{
    int a[] = {3,2,8,15,-8};
    int n = sizeof(a)/sizeof(a[0]);
    int sum = 17;
    if(solve(a,n,sum))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}