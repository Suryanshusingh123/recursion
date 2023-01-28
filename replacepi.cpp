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
int replacepi(char a[],int start)
{
    if(a[start]=='\0'||a[start+1]=='\0')
    {
        return 0;
    }
    replacepi(a,start+1);
    if(a[start]=='p'&&a[start+1]=='i')
    {
        int len=length(a);
        a[len+2]='\0';
        for(int i=len-1;i>=start+2;i--)
        {
            a[i+2]=a[i];
        }
        a[start]='3';
        a[start+1]='.';
        a[start+2]='1';
        a[start+3]='4'; 
    }

}
int main() {
    char a[10000];
    cin.getline(a, 10000);
    replacepi(a,0);
    cout << a << endl;
}
