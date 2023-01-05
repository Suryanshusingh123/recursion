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
bool palindrome(char a[],int start,int end)
{
    if(a[0]=='\0'||a[1]=='\0')
    {
        return true;    
    }
      if(start>=end)
    {
        return true;
    }

    if(a[start]==a[end])
    {
        return palindrome(a,start+1,end-1);
    }
    else{
           return false;
    }
}
int main()
{
     char a[50];
    cin >> a;
    int len=length(a);
     if(palindrome(a,0,len-1)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}