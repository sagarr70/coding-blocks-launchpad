#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[100][100];
    int presum[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {  
            cin>>a[i][j];
            if (j==0)
            {
                presum[i][j]=a[i][j];
            }
            
            else
            {
                presum[i][j]=presum[i][j-1]+a[i][j];
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {      
               presum[j][i]+=presum[j-1][i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<presum[i][j]<<" ";
        }
        cout<<endl;
    }
int sum=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = i; k < n; k++)
            {
                for (int l = j; l < n; l++)
                {
                 sum+=presum[k][l];
                 if (i-1>=0)
                 {
                     sum-=presum[i-1][l];
                 }
                 if (j-1>=0)
                 {
                     sum-=presum[k][j-1];
                 }
                 if (i-1>=0&&j-1>=0)
                 {
                     sum+=presum[i-1][j-1]; 
                 }
                 
                          
                }
                
            }
            
        }
        
    }
    
    
    cout<<sum;



    return 0;
}