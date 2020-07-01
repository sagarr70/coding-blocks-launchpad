#include<iostream>
using namespace std;
void search(int a[][100],int n,int m, int target)
{
   bool present= false;
   int i=0;
   int j=m-1;
   while ((i<n&&i>=0)&&(j<m&&j>=0))
   {
       if (target==a[i][j])
       {
          present=true;
          break;
       }
       else
       {
           if (target>a[i][j])
           {
               i++;
           }
           else
           {
               j--;
           }
           
           
       }
   }
   cout<<present;
}
int main(){
    int n,m;
    cin>>n>>m;
    int a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    int target;
    cin>>target;
    search(a,n,m,target);
    return 0;
}