#include<iostream>
using namespace std;
/* void swap(int &a, int &b)
{
   a=a+b;
   b=a-b;
   a=a-b;
} */
int main(){
    int a,b;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    swap(a,b);
    cout<<a;

    return 0;
}