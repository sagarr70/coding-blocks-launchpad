#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,3};
    cout<<a; //print address of a
    char b[]={"sagar"};//automatically terminated by null charactar
    char c[]={'s','a','g','a','r','\0'};
    char d[]={'s','o','p'};//not terminated by null charactar
    cout<<a<<endl<<b<<endl<<c<<endl<<d;
    cout<<sizeof(b);   
    return 0;
}