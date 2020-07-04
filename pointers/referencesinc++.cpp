#include<iostream>
using namespace std;
/* 
A reference variable is an alias, that is, another name for an
already existing variable/memory instance.
Once a reference is initialized with a variable, either the variable
name or the reference name may be used to refer to the variable.
The reference variable once defined to refer to a variable cannot
be changed to point to other variable. */
int main(){
    int x=10;
    int &y=x;
    cout<<y<<endl;
    int z=50;
    y=z;
    cout<<y;
    return 0;
}