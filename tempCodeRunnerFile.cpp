#include<iostream>
using namespace std;

int remove(char a[])
{
    if(a[0]=='\0')
    {
        return 0;
    }
    remove(a+1);
    if(a[0]==a[1])
    {
        for(int i=0;a[i]!='\0';i++)
        {
           a[i]= a[i+1];
        }
    }
}

int main() {
    char a[100000];
    cin >> a;
    remove(a);
    cout << a << endl;
}