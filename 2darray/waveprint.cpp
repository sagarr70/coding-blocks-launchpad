#include<iostream>
using namespace std;
void waveprint(int a[1000][1000],int m, int n)
{  int col=0;
    while (col!=n)
    {
        if (col%2==0)
        {
            for (int i = 0; i < m; i++)
            {
                cout<<a[i][col]<<" ";
            }
            col++;
            
        }
        else
        {
            for (int i = m-1; i >=0; i--)
            {
                cout<<a[i][col]<<" ";
            }
            col++;
            
        }
        
        
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
    waveprint(a,m,n);

    return 0;
}