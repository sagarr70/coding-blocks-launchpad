#include<iostream>
using namespace std;

int main(){
    //comma operator
     int a,b,c;


//Assignment opeartor
a=10;
b=20;
c=30;
//logical opeartator
if (c>a and c>b)
{
  cout<<"c"<<endl;
}
//ternary operator
/* bool x= a<b?true:false;
cout<<boolalpha<<x; */

//bitwise operator

//& and
//| or
// ~ not
// ^ xor
cout<<(~5)<<endl;
cout<<(5^4)<<endl;
cout<<(4 & 2)<<endl;
cout<<(5 | 7)<<endl;
//shift operator
int x=20;
cout<<(x>>2)<<endl; //right shift x>>i =x / (pow(2,i))
int y=7;
cout<<(y<<2)<<endl;//left shift y<<i = y*(pow(2,i))
//unary operator
cout<<&x<<endl;

//post increment /decrement operator
a=10;
int z= a++; //post increment
cout<<z<<endl;
z=++a; //pre increment
cout<<z<<endl;
//compound assignment operator
 a=10;
 a*=3;
 cout<<a<<endl;
 


    return 0;
}