#include<iostream>
using namespace std;
int main(){
     int a,b;
     cin>>a>>b;
     int c[100][100];
     for (int i = 0; i < a; i++)
     {
         for (int j = 0; j < b; j++)
         {
            cin>>c[i][j];
         }
     }
     int sum=0;
     for (int i = 0; i < a; i++)
     {
         for (int j = 0; j < a; j++)
         {
             for (int k = i; k < a; k++)
             {
                 for (int l = j; l < a; l++)
                 {
                     for (int q = i; q <= k; q++)
                     {
                        for (int z = j; z <= l; z++)
                        {
                            sum+=c[q][z];
                        }
                        
                     }
                     
                 }
                 
             }
             
         }
         
     }
     
     cout<<sum;
    return 0;
}