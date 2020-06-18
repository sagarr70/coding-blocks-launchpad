#include<iostream>
using namespace std;
void rotaterow(int a[][100],int n)
{
  for (int i = 0; i < n; i++)
  {  int j=0; int end=n-1;
      while (j<=end)
      {
          swap(a[i][j],a[i][end]);
          end--;
          j++;
      }
      
  }
  
}
void rotateimage(int a[][100], int n)
{    
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            swap(a[i][j],a[j][i]);
        }   
    }
} 
int main(){
    int n;
    cin>>n;
    int a[100][100]={0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    rotaterow(a,n);
    rotateimage(a,n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}