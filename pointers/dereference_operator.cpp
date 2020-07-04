/* 1)* multiplication 5*3=15
   2)* pointer int * ptr;
   3)* Dereference any address
   
   &bucket -> address
   *address -> bucket
  

 */
#include<iostream>
using namespace std;
int main(){
    int x=10;
    cout<<*(&x)<<endl;//*(address of x)-> bucket(value in variable)
    int * xptr= &x;
    cout<<*(xptr);//xptr== address == &x
    cout<<*(xptr)+1<<endl;//add 1 to the bucket
    cout<<*(xptr+1);//print value at at next address
    int y=15;
    int * yptr=&y;
    cout<<&y<<endl;//adddress of y
    cout<<yptr<<endl;//adddress of y
    cout<<*(yptr)<<endl;//value of y
    cout<<*(&y)<<endl;//value of y
    cout<<&(*yptr)<<endl;//address of y
    cout<<*(&yptr)<<endl;//address of y
//double pointer
/*
to store the address of a pointer variable 
datatype * variable-name;
int*     *  yyptr; */

int* * yyptr=&yptr;
cout<<yyptr<<endl;
cout<<*yyptr;

    return 0;
}