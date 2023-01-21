#include<iostream>
using namespace std;

int length(char a[]){
	int len = 0;
	for(int i =0;a[i] != '\0';i++){
		len++;
	}
	return len;
}
int pairstar(char a[],int start)
{
    if(a[start]=='\0')
    {
        return 0;
    }

    pairstar(a,start+1);
    if(a[start]==a[start+1])
    {
        int len=length(a);
        a[len+1]='\0';
        int i;
        for( i=len-1;i>=start+1;i--)
        {
            a[i+1]=a[i];
        }
        a[start+1]='*';
    }   

}

int main() {
   char a[100];
   cin.getline(a, 100);
   pairstar(a,0);
   cout << a << endl;
}
