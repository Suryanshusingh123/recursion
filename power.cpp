#include<iostream>
using namespace std;

int power(int x,int n)
{
    if(n==0)
    {
        return 1;    
    }
    int smalloutput=power(x,n-1);
    return smalloutput*x;

}
int main()
{
    int n,x;
    cin>>x>>n;
    int output=power(x,n);
    cout<<output;
    

}