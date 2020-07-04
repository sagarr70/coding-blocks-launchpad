//powerfull and confucing concept
//it is a variable which stores address of another variable.
#include<iostream>
using namespace std;

int main(){
    int x=10;
    int a=15;
    float f=10.0;
    float *fptr;
    // syntax for pointer variable
       // datatype * variable name;
    int * ptr=&x;//declarartion + initialization
    int * y;//declaration
    y=&a;//initialization
    fptr=&f;
    cout<<fptr<<endl;
    cout<<ptr<<endl; 
    //Avoid storing addter of 1 data type in pointer variable of other data type
    //size of a pointer variable
 /*    int u=101845;
    char *cptr=(char *)&u;
    cout<<*cptr;
 */
//re-assign an pointer variable to address of another variable
int l,m;
l=5;m=8;
int * p=&l;
cout<<p<<endl;
p=&m;
cout<<p<<endl;
//null operator
int *v=NULL;//stores 0 into the pointer variable
cout<<v<<endl;
//arithmetic operators and pointers
/*    Addition of an address by a constant integer value i.e. ptr +5 means
address of cell which is 5 * sizeof(*ptr) away from ptr.
Similar for subtraction
Again Multiplying/Dividing an address with some constant value
doesn’t make any sense
Subtracting two address of same type would give you number of
elements between them.
 */
//array and pointers
int a1[]={1,2,3,4,5,6,7,8,9};
//a1==&a1[0]
cout<<a1<<endl;
cout<<&a1[0]<<endl;
for (int i = 0; i < sizeof(a1)/sizeof(int); i++)
{
   cout<<*(a1+i)<<" ";
}

    return 0;
}