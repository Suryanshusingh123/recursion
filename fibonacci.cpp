#include<iostream>
using namespace std;

int fibo(int n)
{
    if(n==0)
    {return 0;}

    if(n==1)
    {return 1;}

    int smalloutput1= fibo(n-1);
    int smalloutput2= fibo(n-2);
    return smalloutput1+smalloutput2;

}
int main()
{
    
    cout<<fibo(5);
}