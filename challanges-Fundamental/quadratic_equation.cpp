#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int x,y;
    if ((b*b)-((4*a*c))>=0)
    {
        x=((-b)+sqrt((b*b)-(4*a*c)))/(2*a);
        y=((-b)-sqrt((b*b)-(4*a*c)))/(2*a);
        if (x==y)
        {
            cout<<"Real and Equal"<<endl;
            x>y?cout <<(y)<<" "<<(x) : cout <<x<<" "<<y;
        }
        else
        {
            cout<<"Real and Distinct"<<endl;
            x>y?cout <<y<<" "<<x : cout <<x<<" "<<y;
            
        }

        }
    
    else
    {
        cout<<"Imaginary";
    }
    
    return 0;
}