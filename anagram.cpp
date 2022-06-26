// the two sstring is said to be anaagram if both string contain same length exactly same letter(freq of the each 
// letter is same ) ex s1=silent s2= listen
#include<bits/stdc++.h>
using namespace std;
bool check(string s1,string s2)
{
    int cha[256] = {0};
    if(s1.length()!=s2.length())
        return false;
    for(int i=0;i<s1.length();i++)
    {
        cha[s1[i]]++;
    }
    for(int i=0;i<s1.length();i++)
    {
        cha[s2[i]]--;
    }
    for(int i=0;i<256;i++)
        {
            if(cha[i]!=0)
                return false;
        }
    return true;

}
int main()
{
    string s1="silent",s2 = "litten";
    if(check(s1,s2))
        cout<<"Same \n";
    else
        cout<<"Not same\n";
    return 0;
}
