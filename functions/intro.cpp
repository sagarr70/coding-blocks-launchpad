#include<iostream>
using namespace std;
void sayhello()
{

    cout<<"hello world";
}
int factorial(int n)
{   int ans=1;
    for (int i =n; i>0; i--)
    {
        ans =ans*i;
    }
    return ans;
}
int main(){
    //cout<<"hello world";
    sayhello();
    cout<<factorial(5);
    return 0;
}