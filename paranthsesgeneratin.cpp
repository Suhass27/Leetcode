#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;
class Solution
{
    public:
    void solve(int n,string temp,int open,int close,vector<string>&res)
    {
        if(temp.size()==n)
        {
            res.push_back(temp);
            return ;
        }
        if(open>close)
        {
            temp.push_back(')');
            solve(n,temp,open,close+1,res);
            temp.pop_back();
        }
        if(open+1<=n/2)
        {
            temp.push_back('(');
            solve(n,temp,open+1,close,res);
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        vector<string>r;
        string temp="";
        solve(2*n,temp,0,0,r);
        return r;
    }
};
int main() 
{ 
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";

	return 0; 
} 