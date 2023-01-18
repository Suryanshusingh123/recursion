#include<iostream>
using namespace std;

int lastindex(int a[],int n,int x)
{
    if(n==0)
    { return -1;}
    int smallans=lastindex(a+1,n-1,x);
    if(smallans!=-1)
    {
        return smallans+1;
    }
    if(a[0]==x)
    {
        return 0;
    }
    else
    return-1;
    
}
int main(){
    int n;
    cin >> n;
  
    int *a = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int x;
    
    cin >> x;
    
    cout << lastindex(a, n, x) << endl;

}
