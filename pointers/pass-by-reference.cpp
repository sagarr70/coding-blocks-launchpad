#include<iostream>
using namespace std;
//pass by value
//passed value do not get updated into the main function as  after the execution of addone function the memory is destroyed
void addone(int a)
{
    a=a+1;
    cout<<"inside function : "<<a<<endl;
}
//pass-by-reference using pointers
void add(int *aptr)
{
    *aptr=*aptr+1;
     cout<<"inside function passed bby reference : "<<*aptr<<endl;
}
int main(){
    int a=10;
    addone(a);
    cout<<"inside main : "<<a<<endl;  
    add(&a);
    cout<<"inside main passed by reference : "<<a<<endl;
    return 0;
}