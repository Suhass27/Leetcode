//we have to print the index of the leftmost  repeating character
//ex s1 = abbcc the output is 1 since b is leftmost repeating character
#include<bits/stdc++.h>
using namespace std;
int solve(string &s)
{
    bool visit[256];
    fill(visit,visit+256,false);
    int res = -1;
    for(int i=s.length()-1;i>=0;i--)
    {
        if(visit[s[i]])
            res = i;
        else
            visit[s[i]] = true;
    }
    return res;
}
int main()
{
    string s = "aabccdb";
    cout<<solve(s)<<endl;
    return 0;
}