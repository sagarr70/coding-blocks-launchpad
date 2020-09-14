#include<iostream>
using namespace std;

int main(){
    int b[100];
    cout<<sizeof(b)<<endl;
    cout<<b<<endl;
    //dynamic allocation
    int n;
    cin>>n;
    int *a=new int[n];
    cout<<sizeof(a)<<endl;
    cout<<a<<endl;
    a= new int[500];
    cout<<a<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        cout<<a[i]<<" ";
    }
    //free up space
   delete []a;

    return 0;
}