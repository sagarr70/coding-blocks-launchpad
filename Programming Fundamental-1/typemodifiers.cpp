#include<iostream>
#include<climits>
using namespace std;

int main(){
    //data type modifiers + data types
    // long , short , signed , unsigned

    int x;
    cout<<sizeof(x)<<endl;
    cout<<INT_MAX<<endl;
    cout<<INT_MIN<<endl;
    x= INT_MAX;
    //what will happen if we add 1 to x
    cout<<"x "<<x<<endl;
    x=x+1;
    cout<<"x+1 "<<x; //wrap around

     


    return 0;
}