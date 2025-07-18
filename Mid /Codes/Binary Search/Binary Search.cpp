#include<iostream>
using namespace std;
   const int size=10;
   int arr[size]={11,10,9,8,7,6,5,4,3,2};
   int count=0;
int bin_src(int sind, int eind, int val)
{
    count++;
    int mind=(sind+eind)/2;
    cout<<"Value of Mid Index"<<" "<<arr[mind]<<endl;
    if(arr[mind]==val)
    {
        return mind;
    }
    else
    {
        if(sind>=eind)
        {
            return -1;
        }
        else
        {
            if(val<arr[mind])
            {
                cout<<"VALUE"<<val<<" "<<"MID INDX"<<arr[mind]<<"START INDX"<<sind<<"LAST INDX"<<mind-1<<"MID INDX"<<(sind+(mind-1))/2<<"VALUE"<<val<<endl;
                bin_src(sind,mind-1,val);
            }
            else
            {
                cout<<"VALUE"<<val<<" "<<"MID INDX"<<arr[mind]<<"START INDX"<<sind<<"LAST INDX"<<mind-1<<"MID INDX"<<(sind+(mind-1))/2<<"VALUE"<<val<<endl;
                bin_src(mind-1,eind,val);
            }
        }
    }
}
int main()
{
  int result=bin_src(0,size-1,10);
  {
      if(result<0)
  {
      cout<<"NOT FOUND"<<count<<"TIMES"<<endl;
  }
  else
  {
      cout<<"FOUND"<<result<<"INDEX AFTER"<<count<<"TIMES"<<endl;
  }
  }
  return 0;
}
