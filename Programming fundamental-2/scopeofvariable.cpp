#include<iostream>
using namespace std;
//local scope
//global scope


//global scope
int x=100;
int main(){
     
  int x=10;
for (int x = 0; x < 5; x++)
{   // this x only exist inside the for loop
    cout<<"LOOP SCOPE "<<x<<endl;
}
//local x
cout<<"local "<<x<<endl;
cout<<"global x "<<::x;

    return 0;
}