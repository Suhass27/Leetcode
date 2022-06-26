//count and say problem
// if n = 1 then output is 1
// if n = 2 then output is 11 bez 1 count is 1 and the number is 1 so output is 11
// if n = 3 then output is 21 bez 1 count is 2 and the number is 1
#include<bits/stdc++.h>
using namespace std;
string countandsay(int n)
{
    if(n==1) return "1";
    if(n==2) return "11";
    string s="11";
    for(int i=3;i<=n;i++){
        string t="";
        s=s+'&';
        int c= 1;
        for(int j=1;j<s.length();j++){
            if(s[j]!=s[j-1]){
                t=t+to_string(c);
                t=t+s[j-1];
                c=1;
            }
            else
                c++;
        }
        s = t;
    }
    return s;
}
int main()
{
    int n;
    cin>>n;
    string s = countandsay(n);
    cout<<s<<endl;
    return 0;
}