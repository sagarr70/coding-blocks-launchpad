#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[100][100];
    int sufsum[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
  //row addition  
    for (int i = n-1; i >=0; i--)
    {
        for (int j = n-1; j >=0; j--)
        {  
            if (j==n-1)
            {
                sufsum[i][j]=a[i][j];
                //cout<<i<<" "<<j<<" if"<<endl;
            }
            
            else
            {
                sufsum[i][j]=sufsum[i][j+1]+a[i][j];
               // cout<<i<<" "<<j<<" else"<<endl;
            }
          
        }

    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<sufsum[i][j]<<" ";
        }
        cout<<endl;
    }

cout<<endl;
//coloumn Addition
       for (int i = n-1; i >=0; i--)
    {
        for (int j = n-2; j >=0; j--)
        {  
            sufsum[j][i]+=sufsum[j+1][i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<sufsum[i][j]<<" ";
        }
        cout<<endl;
    }
int sum=INT_MIN;
    for (int i = 0; i <n; i++)
    {
        for (int j =0; j<n; j++)
        {
           sum=max(sum,sufsum[i][j]);           
        }
        
    }
    cout<<sum;
    return 0;
}