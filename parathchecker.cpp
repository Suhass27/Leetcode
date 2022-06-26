#include<bits/stdc++.h>
using namespace std;
bool solve(string t)
{
    stack<char>s;
    char x;
    for(int i=0;i<t.length();i++)
    {
        if(t[i]=='('||t[i]=='['||t[i]=='{')
        {
            s.push(t[i]);
            continue;
        }
        if(s.empty())
            return false;
        switch(t[i]){
            case ')': x = s.top();
                        s.pop();
                if(x=='['||x=='{')
                    return false;
                    break;

            case ']': x = s.top();
                        s.pop();
                if(x=='('||x=='{')
                    return false;
                    break;

            case '}':x = s.top();
                        s.pop();
                if(x=='('||x=='[')
                    return false;
                    break;

        }
    }
    return(s.empty());
}
int main()
{
    string s ="{()}[";
    if(solve(s))
        cout<<"balanced";
    else
        cout<<"Not balanced\n";
    return 0;
}