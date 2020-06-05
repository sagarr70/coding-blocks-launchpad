#include<iostream>
using namespace std;
void selectionsort(int a[],int size)
{
   for (int i = 0; i < size-1; i++)
   {
       int smallest=i;
       for (int k = i; k < size-1; k++)
       {   
           if (a[smallest]>a[k+1])
           {
               smallest=k+1;
           }
           
       }
       if (smallest!=a[i])
       {
       swap(a[i],a[smallest]);
       }
   }
}
int main(){
    int a[]={-1,-2-3,10,100,0};
    selectionsort(a,sizeof(a)/sizeof(int));
    for (int i = 0; i < sizeof(a)/sizeof(int); i++)
    {
       cout<<a[i]<<" ";
    }
    
    return 0;
}