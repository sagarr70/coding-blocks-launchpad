#include<iostream>
using namespace std;
//read a sentence
int main(){
    char ch;
   // cin>>ch; ignore spaces in input_buffer
   ch = cin.get(); //this read any single charecter including spaces / new line in input buffer

    while (ch!='\n')
    {
        cout<<ch; //display previous stored charecter in ch
        ch = cin.get(); //updates new charecter in ch
    }
    





    return 0;
}