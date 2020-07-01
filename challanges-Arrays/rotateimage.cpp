#include<iostream>
using namespace std;
void rotateimage(int a[][1000],int n)
{
  for (int i = 0; i < n; i++)
  {
      for (int j = 0; j < n/2;j++)
      {
          swap(a[i][j],a[i][n-j-1]);
      }
      
  }
  for (int i = 0; i < n; i++)
  {
      for (int j = 0; j <=i; j++)
      {
         swap(a[i][j],a[j][i]);
      }
  }
  for (int i = 0; i < n; i++)
  {
      for (int j = 0; j < n; j++)
      {
         cout<<a[i][j]<<" ";
      }
      cout<<endl;
  }



}
int main(){
    int n;
    cin>>n;
    int a[1000][1000];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    rotateimage(a,n);
    return 0;
}