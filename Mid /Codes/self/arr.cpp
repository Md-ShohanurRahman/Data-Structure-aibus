// array 

#include <iostream>
using namespace std;
int main (){
    int m,n;
   
   cout<<"enter the size of the 1D array "<<endl;
   cin>>m;
   int  array [m];
   cout<<"enter the element of the array "<<endl;
   for (int i=0;i<m;i++){
    cin>>array[i];
   }
    cout<<"the 1D array "<<endl;
   for (int i=0;i<m;i++){
     cout<<array[i]<<",";
     
   }
   return 0;
}