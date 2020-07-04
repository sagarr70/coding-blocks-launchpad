#include<iostream>
using namespace std;
//address is printed in hexadecimal format
int main(){
    int x=10;
    cout<<&x<<endl;
    float z=1.00;
    cout<<&z<<endl;
    char ch='a';
    cout<<&ch;//doesn't work for char data type due to operator overloading
    //for printing the address of char data type we can do explicit typecasting
    cout<<(void *)&ch<<endl;
    return 0;
}