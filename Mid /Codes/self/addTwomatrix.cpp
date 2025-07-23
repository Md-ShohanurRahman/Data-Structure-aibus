#include <iostream>
using namespace std;
int main (){
    cout<<"hello world to big brother "<<endl;

    int rm,cn,rp,cq,rs,ct;

    cout<<"enter the row and column number of the fist matrix"<<endl;
    cin>>rm>>cn;
    int a[100][100];
     cout<<"enter the elements of first matrix "<<endl;
    for (int i=0;i<rm;i++){
        for(int j=0;j<cn;j++){
            cin>>a[i][j];
        }
    }

     cout<<"enter the row and column number of the second  matrix"<<endl;
    cin>>rp>>cq;
      int b[100][100];
     cout<<"enter the elements of second  matrix "<<endl;
    for (int i=0;i<rp;i++){
        for(int j=0;j<cq;j++){
            cin>>b[i][j];
        }
    }
    cout<<"enter the row and column number of the third   matrix"<<endl;
    cin>>rs>>ct;
    int c[100][100];
      cout<<"enter the elements of  third matrix "<<endl;
    for (int i=0;i<rs;i++){
        for(int j=0;j<ct;j++){
            cin>>c[i][j];
        }
    }
    int d[100][100];

     for (int i=0;i<rs;i++){
        for(int j=0;j<ct;j++){
          d[i][j]=a[i][j]+b[i][j]+c[i][j]; 
        }
    }
    cout<<" the result matrix"<<endl;
     for (int i=0;i<rs;i++){
        for(int j=0;j<ct;j++){
          cout<<d[i][j]<<" "; 
        }
        cout<<endl;
    }


    return 0;

}