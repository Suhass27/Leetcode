#include<bits/stdc++.h>
using namespace std;
void solve(int a[],int n)
{
    unordered_map<int,int>m;
    for(int i = 0;i<n;i++)
    {
        m[a[i]]++;
    }
    vector<pair<int,int>>v;
    for(auto i : m)
    {
        v.push_back({i.second,i.first});

    }
    sort(v.begin(),v.end(),greater<pair<int,int>>());
    vector<int>res(n),temp;
    for(auto p : v)
    {
        for(int i  = 0 ;i<p.first; i++)
        {
                temp.push_back(p.second);
        }
    }
    int k = 0;
    for(int i = 0;i<n;i+=2)
    {
        res[i] = temp[k++];
    }
    for(int i = 1;i<n;i+=2)
    {
        res[i] = temp[k++];
    }
    //fo
    for(auto i : res)
    {
        cout<< i <<"  ";
    }
}
int main()
{
    int a[] = {1,1,1,2,2,2};
    //output -> 2,1,2,1,2,1 you have to give unique barcodes assuming there exist unquie barcode 
    int n = sizeof(a)/sizeof(a[0]);
    solve(a,n);
    return 0;
}
