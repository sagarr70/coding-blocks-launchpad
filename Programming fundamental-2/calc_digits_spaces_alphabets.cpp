//write a program to calculate digits , whitespaces and other charecter terminated by $
#include<iostream>
using namespace std;

int main(){
    int digits=0;
    int whitespace=0;
    int alpha=0;
    int other =0;
    char ch;
    ch = cin.get();
    while (ch!='$')
    {
        if (ch>='0' && ch <= '9')
        {
            digits++;
        }
        else
        {
            if ((ch>='a' && ch<='z' )|| (ch >='A' && ch <= 'Z'))
            {
                alpha++;
            }
            else
            {
                if (ch==' ' || ch=='\n' || ch=='\t')
                {
                    whitespace++;
                }
                else
                {
                    other++;
                }
                
                
            }
            
        }
        
        ch=cin.get();
        
    }
    cout<<"digits : "<<digits<<endl;
    cout<<"alphabet : "<<alpha<<endl; 
    cout<<"spaces :"<<whitespace<<endl;
    cout<<"other : "<<other<<endl;



    return 0;
}