#include<iostream>
using namespace std;
void spiralanti(int a[][1000],int m,int n)
{
   int sr=0;
   int er=m-1;
   int sc=0;
   int ec=n-1;
   while (sr<=er&&sc<=ec)
   {   
       for (int i = sr; i <=er; i++)
       {
           cout<<a[i][sc]<<", ";
       }
       sc++;
       for (int i = sc; i <=ec; i++)
       {
          cout<<a[er][i]<<", ";
       }
       er--;
       for (int i = er; i >= sr; i--)
       {
           cout<<a[i][ec]<<", ";
       }
       ec--;
       for (int i = ec; i >=sc; i--)
       {
           cout<<a[sr][i]<<", ";
       }
       sr++;
   }
   cout<<"END";
}
int main(){
    int m,n;
    cin>>m>>n;
    int a[1000][1000];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
    }
    spiralanti(a,m,n);
    return 0;
}