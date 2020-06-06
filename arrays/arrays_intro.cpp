#include<iostream>
using namespace std;

int main(){
    //init of array
    int a[10]={0};
    //input all the elements from the user
    for (int i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    //sizeof
    cout<<sizeof(a)<<endl;
    int n=sizeof(a)/sizeof(int);//no. of elements in an array
//update a single index
a[8]=100;
    //iteration over array
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}