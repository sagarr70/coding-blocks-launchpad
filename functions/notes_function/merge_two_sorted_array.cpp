#include<iostream>
using namespace std;
void movetoend(int a[],int m,int n)
{  int move=m+n;
   for (int i = m; i >=0 ; i--)
   {  
       a[move]=a[i];
       move=move-1;   
   }
   for (int i = n; i < m+n; i++)
   {
       cout<<a[i]<<" ";

   }
   cout<<endl;
}
void mergearray(int a[],int b[], int m, int n)
{
  int i=n;
  int j=0;
  int k=0;
  movetoend(a,m,n);
  while (i<m+n && j<n)
  {
      if (a[i]<b[j])
      {
          a[k]=a[i];
          k++;
          i++;
      }
      else
      {
          a[k]=b[j];
          k++;j++;
      }
  }
  cout<<i<<" "<<j<<" "<<k<<endl;
  if (i<m+n )
 {
     for (i; i < m+n; i++)
     {
         a[k]=a[i];
         k++;
     }
     
 }
if (j<n)
{
    for (j; j < n; j++)
    {
        
        cout<<j<<endl;
        a[k]=b[j];
        k++;
    }
    
} 


 
}
int main(){
    int m,n;
    m=6; n=4;
    int a[m+n]={2,8,13,15,20,21};
    int b[n]={5,7,9,25};
   mergearray(a,b,m,n);
   for (int i = 0; i < m+n; i++)
   {
      cout<< a[i]<<" ";
   }
    return 0;
}