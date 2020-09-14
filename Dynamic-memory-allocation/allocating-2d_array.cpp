#include<iostream>
using namespace std;

int main(){
    int **a;
    int r,c;
    cin>>r>>c;
    a=new int*[r];
    for (int i = 0; i < r; i++)
    {
        a[i]=new int[c];
    }
    int val=1;
    for (int i = 0; i < r; i++)
    {
      for (int j = 0; j <c; j++)
      {
          a[i][j]=val;
          val++;
          cout<<a[i][j]<<" ";
      }
      cout<<endl;
    }
    
    return 0;
}