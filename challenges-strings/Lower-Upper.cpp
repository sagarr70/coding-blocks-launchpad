#include<iostream>
using namespace std;
void chartype(char ch)
{
    if (isupper(ch))
    {
        cout<<"UPPERCASE";
    }
    else
    {
        if (islower(ch))
        {
            cout<<"lowercase";
        }
        else
        {
            cout<<"Invalid";
        }
    }
}
int main(){
    char ch;
    ch=cin.get();
    chartype(ch);
    return 0;
}