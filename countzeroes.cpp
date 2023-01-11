#include<iostream>
using namespace std;

int countzero(int n)
{
    if(n<=9)
    {
        if(n==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }

    }
    int small=countzero(n/10);
    if(n%10==0)
    {
        return small+1;
    }
    else
    {
        return small;
    }    
    
}

int main() {
    int n;
    cin >> n;
    cout << countzero(n) << endl;
}
