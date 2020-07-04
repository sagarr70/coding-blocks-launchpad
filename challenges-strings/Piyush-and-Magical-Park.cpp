#include<iostream>
using namespace std;
bool magic(char park[][100],int n,int m,int &s, int k)
{
   for (int i = 0; i < n; i++)
   {
       for (int j = 0; j < m; j++)
       {
           if (s<k)
           {
               return false;
           }
           if (park[i][j]=='.')
           {
               s-=2;
           }
           else
           {
              if (park[i][j]=='*')
              {
                  s+=5;
              }
              else
              {   if (park[i][j]=='#')
              {
                  
              
                  break;
              }   }
           }
           if (j!=m-1)
           {
               s-=1;
           }
       }
   }
   return true;
}
int main(){
    int n,m,s,k;
    cin>>n>>m>>k>>s;
    char park[100][100];
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            cin>>park[i][j];
        }
        
    }
    bool ans=magic(park,n,m,s,k);
    if (ans)
    {
        cout<<"Yes"<<endl;
        cout<<s;
    }
    else
    {
      cout<<"No";
    }
    
    
    return 0;
}