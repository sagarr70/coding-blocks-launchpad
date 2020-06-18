#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,3};
    int *p=a;
    cout<<a[*p++]<<" "<<(*++p)[a];
    return 0;
}