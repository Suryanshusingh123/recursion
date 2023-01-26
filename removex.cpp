#include<iostream>
using namespace std;


int length(char a[])
{
    int len=0;
    for(int i=0;a[i]!='\0';i++)
    {
        len++;
    }
    return len;

}
int removex(char a[],int start)
{
    if(a[start]=='\0')
    {
        return 0;
    }
    removex(a,start+1);
    if(a[start]=='x')
    {
        int len=length(a);
        int i;
        for(i=start+1;i<len;i++)
        {
            a[i-1]=a[i];
        }
        a[i-1]='\0';
    }
}


int main() {
    char a[100];
    cin.getline(a, 100);
    removex(a,0);
    cout << a << endl;
}
