#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

double gsum(int k)
{
    if(k==0)
    {
        return 0;
    }
    int small=gsum(k-1);
    return small+1/(pow(2,k));
}

int main() {
    int k;
    cin >> k;
    cout <<fixed<< setprecision(5);
    cout << gsum(k) << endl;   
}
