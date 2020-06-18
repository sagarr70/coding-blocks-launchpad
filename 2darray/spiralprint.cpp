#include<iostream>
using namespace std;
void spiral(int a[][1000],int m,int n)
{
   int sr=0;
   int sc=0;
   int er=m-1;
   int ec=n-1;
   while (sr<=er and sc<=ec)
   {
       for (int i = sc; i <=ec; i++)
       {
           cout<<a[sr][i]<<" ";
       }
       sr++;
      if (ec>sc)
      {
       for (int i = sr; i <=er; i++)
       {
           cout<<a[i][ec]<<" ";
       }}
       ec--;
       if (er>sr)
       {
       for (int i = ec; i >= sc; i--)
       {
           cout<<a[er][i]<<" ";
       }}
       er--;
       for (int i = er; i >= sr; i--)
       {
           cout<<a[i][sc]<<" ";
       }
       sc++;   
   }
}
int main(){
    int a[1000][1000]={0};
    int m,n;
    cin>>m>>n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        { 
            cin>>a[i][j];
            
        }
      
    }
    spiral(a,m,n);
    return 0;
}