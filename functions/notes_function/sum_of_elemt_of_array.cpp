#include<iostream>
using namespace std;
int sum(int a[],int size)
{  int sumo=0;
   for (int i = 0; i < size; i++)
   {
       sumo=sumo+a[i];
   }
   return sumo;

}
int main(){
    int a[]={7,8,9,4,5};
    int sumofarray=sum(a,sizeof(a)/sizeof(int));
    cout<<sumofarray;
    return 0;
}