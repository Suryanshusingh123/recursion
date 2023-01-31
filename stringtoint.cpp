#include<iostream>
#include<math.h>
using namespace std;

int length(char input[]){
	int len = 0;
	for(int i =0;input[i] != '\0';i++){
		len++;
	}
	return len;
}
 int stringtoint(char a[]) {
    // Write your code here
    if (a[0]=='\0')
    { return 0;}

    
    
    int len=length(a);
    int b=a[0]-'0';
    int smallans=stringtoint(a);
    return smallans +b*pow(10,len);
   
  
}
int main() {
    char a[50];
    cin >> a;
    cout << stringtoint(a) << endl;
}