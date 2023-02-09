#include<iostream>
using namespace std;

int towerofhanoi(int n,char a,char b,char c)
{
    if(n==0)
    {
        return 0;
    }
    towerofhanoi(n-1,a,c,b);
    cout<<a<<" "<<c<<endl;
    towerofhanoi(n-1,b,a,c);
}

int main() {
    int n;
    cin >> n;
    towerofhanoi(n, 'a', 'b', 'c');
}
