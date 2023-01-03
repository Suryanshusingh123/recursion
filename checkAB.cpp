#include<iostream>
using namespace std;

int checkab(char a[],int start)
{
    if(a[start]=='\0')
    {
        return true;
    }
    if(a[start] !='a')              
    {
        return false;
    }
    if(a[start+1]!='\0'&&a[start+2]!='\0')
    {
        if(a[start+1]=='b'&& a[start+2]=='b')
        {
            return (a,start+3);
        }
    }
    return checkab(a,start+1);
}
int main() {
    char a[100];
    bool ans;
    cin >> a;
    ans=checkab(a,0);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}
