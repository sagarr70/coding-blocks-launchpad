#include<iostream>
using namespace std;

int main(){
    char a[][10]={{'s','a','g','a','r','\0'},{'h','e','l','l','o','\0'}};
    char b[][10]={"hello","sagar"};
    cout<<a[0]<<" ";
    cout<<b[0];
    cin>>a[0];
    cout<<a[0];
    cin>>a[0][0];
    cout<<a[0];
    return 0;
}