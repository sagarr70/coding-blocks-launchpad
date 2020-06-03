#include<iostream>
using namespace std;

int main(){
    //switch case
    // Design a menu - where pressing a button gives you the corresponding item
    //b- burger
    //c-carrot
    //d-donut
    //otherwise - item not available
 char ch;
ch=cin.get();
switch (ch)
{
case 'b':
    cout<<"burger"<<endl;
    break;
case 'c' :
    cout<<"carrot"<<endl;
    break;
case 'd' :
    cout<<"donut"<<endl;
    break;    
default:
cout<<"item not available";
    break;
}


    return 0;
}