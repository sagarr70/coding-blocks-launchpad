#include<iostream>
using namespace std;
void chartype(char ch)
{
    if (isupper(ch))
    {
        cout<<"U";
    }
    else
    {
        if (islower(ch))
        {
            cout<<"L";
        }
        else
        {
            cout<<"I";
        }
    }
}
int main(){
    char ch;
    ch=cin.get();
    chartype(ch);
    return 0;
}