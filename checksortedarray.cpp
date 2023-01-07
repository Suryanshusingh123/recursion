#include<iostream>
using namespace std;
bool issorted(int a[],int n)
{
    if(n==0||n==1)
    {
        return true;
    }
    if(a[0]>a[1])
    {
        return false;
    }
    int issmallsorted=issorted(a+1,n-1);
    return issmallsorted;
}
int main(){
    int n;
    cin >> n;
  
  int a[n];
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cout << issorted(a, n) << endl;
}
