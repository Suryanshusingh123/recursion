#include<iostream>
using namespace std;

bool checknumber(int a[],int n,int x)
{
    if(n==0)
    {
        return false;
    }
    if(a[0]==x)
    {
        return true;
    }
    return checknumber(a+1,n-1,x);
}


int main(){
    int n;
    cin >> n;
  
    int a[n];
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int x;
    
    cin >> x;
    
    if(checknumber(a, n, x)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
