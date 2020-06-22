#include<iostream>
using namespace std;
void waveprint(int a[][100],int n, int m)
{  int col=0;
   while (col!=m)
   {
       if (col%2==0)
       {
           for (int i = 0; i < n; i++)
           {
               cout<<a[i][col]<<", ";
           }
           col++;
       }
       else
       {
           for (int i = n-1; i >=0 ; i--)
           {
               cout<<a[i][col]<<", ";
           }
           col++;
       }
       
   }
   cout<<"END";
}
int main(){
    int a[100][100];
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    waveprint(a,n,m);
    return 0;
}