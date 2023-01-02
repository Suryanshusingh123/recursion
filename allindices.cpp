#include<iostream>
using namespace std;
 int allindices(int a[],int n,int x,int output[])
 {
     if(n==0)
     {
         return 0;
     }
   
   int smallans=allindices(a,n-1,x,output);
   if(a[n-1]==x)
   {
       output[smallans]=n-1;
       return smallans+1;
   }
   else
   {
       return smallans;
   }
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
    
    int *output = new int[n];
    
    int size = allindices(a, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
   

}
