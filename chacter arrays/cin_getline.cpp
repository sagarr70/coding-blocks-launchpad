#include<iostream>
using namespace std;

int main(){
    char a[1000];
    //cin>>a;
    cin.getline(a,1000,'$');
    cout<<a<<endl;
    return 0;
}