#include<bits/stdc++.h>
using namespace std;
void solve(int a[],int n,int k)
{
    vector<int>res;
    multiset<int,greater<int>>m;
    int i=0;
    for(i=0;i<k-1;i++)
    {
        m.insert(a[i]);
    }
    for(;i<n;i++){
        m.insert(a[i]);
        res.push_back(*(m.begin()));
        m.erase(m.find(a[i-k+1]));
    }
    for(auto x:res){
        cout<<x<<"  ";
    }
}
int main()
{
     int a[] = {1,3,-1,-3,5,3,6,7};//array
    int n = sizeof(a)/sizeof(a[0]);//size
    int k = 3;// size of window
    solve(a,n,k);
    return 0;
}