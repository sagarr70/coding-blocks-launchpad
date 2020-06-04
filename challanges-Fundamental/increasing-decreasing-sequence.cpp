#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int curr;
    cin>>curr;
    int prev;
    prev=curr;
    bool isvalid = true;
    bool isdecreasing = true;
    n-=1;
    while (n>0)
    {
        cin>>curr;
        if (prev==curr)
        {
            isvalid = false;
            break;
        }
        else
        {
            if (prev<curr)
            {
                isdecreasing=false;
            }
            else
            {
                if (isdecreasing==false && prev>curr )
                {
                   isvalid =false;
                   break;
                }
                
            }
            
            
        }
        prev=curr;
        n--;
        
    }
    

cout<<boolalpha<<isvalid;



    return 0;
}