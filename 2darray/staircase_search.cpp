#include<iostream>
using namespace std;
void staircasesearch(int a[][100],int n,int key)
{
    int i=0,j=n-1;
    int flag=0;
    while (i>=0&&i<n&&j>=0&&j<n)
    {
        if (a[i][j]==key)
        {   int flag=1;
            cout<<"foud at "<<"a"<<"["<<i<<"]"<<"["<<j<<"]";
            break;
        }
        else
        {
            if (key>a[i][j])
            {
                i++;
            }
            else
            {
                j--;
            }
            
            
        }
        
        
    }
    
if (flag==0)
{
    cout<<" not found";
}
}
int main(){
    int n;
    cin>>n;
    int a[100][100]={0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
    }
    int key;
    cin>>key;
    staircasesearch(a,n,key);
    return 0;
}