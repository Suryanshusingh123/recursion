#include<iostream>
using namespace std;

int replace(char a[],char c1,char c2)
{
    if(a[0]=='\0')
    {
        return 0;
    }
   
    if(a[0]==c1)
    {
        a[0]=c2;
    }
    return replace(a+1,c1,c2);
}
int main() {
    char a[1000000];
    char c1, c2;
    cin >> a;
    cin >> c1 >> c2;
    replace(a, c1, c2);
    cout << a << endl;
}