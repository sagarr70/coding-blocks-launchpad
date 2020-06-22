#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[1000000]={0};
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int me=0;
    int water=0;
    for (int k = 0; k < n; k++)
    {
       me=a[k]+1;
       bool yes=true;
       while (yes)
       {
       int flag1=0;
       int flag2=0;
       int i=k-1;
       while (i>=0)
       {
           if(a[i]>=me)
           {
               flag1=1;
               break;
           }
           i--;
       }
       i=k+1;
       while (i<n)
       {
           if(a[i]>=me)
           {
               flag2=1;
               break;
           }
           i++;
       }
      if (flag1==1&&flag2==1)
      {
          water=water+1;
          me=me+1;
      }
      else
      {
          yes=false;
      }
       }
       
    }
    cout<<water;
    return 0;
}