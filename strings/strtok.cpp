#include<iostream>
#include<cstring>
using namespace std;
//char *strtok(char *s,char *delimiters)
//return a token on each subsequent call
// on the first call function should be passed with string argument for 's'
//on subsequent calls we should pass the string argument as null
int add()
{
     static int a=10;
     a++;
    return a;
}
int main(){
    /* char s[100]="i love c++ and python";
    char *ptr =strtok(s," ");
    cout<<ptr<<endl;
    while (ptr!=NULL)
    {
    ptr=strtok(NULL," ");
    cout<<ptr<<endl;
    }
     */
     cout<<add()<<endl;
     cout<<add();
    return 0;
}