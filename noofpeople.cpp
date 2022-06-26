//Number of Visible People in a Queue
//left or ight numbering 
//condition -- A person can see another person to their right in the queue if everybody in
//  between is shorter than both of them. More formally, the ith person can 
//  see the jth person if i < j and min(heights[i], heights[j]) > max(heights[i+1], heights[i+2], ..., heights[j-1])
#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>&h)
{
    int n = h.size();
    vector<int>res(n);
    stack<int>s;

    for(int i = n-1;i>=0;i--)
    {
        int cnt = 0;
        while(!s.empty()  and h[i]>s.top())
        {
            s.pop();
            cnt++;
        }
        if(!s.empty())
        {
            cnt++;
        }
        res[i] = cnt;
        s.push(h[i]);
    }

    for(auto i : res)
    {
        cout<<i<<"  ";
    }
}
int main()
{
    vector<int> heights = {10,6,8,5,11,9};
    solve(heights);
    return 0;
}