//power related question
#include<bits/stdc++.h>
using namespace std;
double solve(double x,int n){
    if (n==0)
    {
        return 1;
    }
    double ans = 1;
    if(n>0)
    {
        for(int i=1;i<=n;i++)
             {
                 ans =  ans *x;
             }
             return ans;
    }
    if(n<0)
    {
        n = abs(n);
        for(int i=1;i<=n;i++)
             {
                 ans =  ans *x;
             }
             return (1/ans);

    }
}
int main()
{
    double  x;
    int n;
    cout<<"Enter a number \n";
    cin>>x;
    cout<<"Enter the power\n";
    cin>>n;
    double t = solve(x,n);
    cout<<"The answer is "<<t<<endl;
    return 0;
}