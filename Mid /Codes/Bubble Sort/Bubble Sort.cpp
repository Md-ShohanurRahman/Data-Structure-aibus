#include<iostream>
using namespace std;
int main()
{
    int temp;
    int arr[5]={23,66,87,45,34};
    cout<<"ARRAY BEFORE SORT";
        for(int i=0;i<5;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                }
                cout<<"SORTING-------";
            for(int i=0;i<5;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            }
        static int count=1;
        cout<<"ARRAY AFTER "<<count<<"PASS"<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<"\t\t\t INDEX"<<i<<"VALUE"<<arr[i]<<endl;
        }
        count++;
        }
        for(int i=0;i<5;i++)
        {
            cout<<arr[i]<<" ";
        }

}
