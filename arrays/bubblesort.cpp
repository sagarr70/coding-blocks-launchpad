#include<iostream>
using namespace std;
void  bubblesort(int a[],int n)
{    while (n!=0)
{

     for (int j = 0; j <n-1; j++)
     {
         if (a[j]>a[j+1])
         {
             swap(a[j],a[j+1]);
         }
     }
     n--;
}     
}
int main(){
    int n;
    cin>>n;
    int a[1000]={0};
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int size=n;
    bubblesort(a,n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" "; 
    }
    
    return 0;
}