//Break that is used to stop a loop based upon certain condition
//problem statement Read a stream of numbers untill you get a multiple of 7
#include<iostream>
using namespace std;

int main(){
    int n;
  //method 1
    /* cin>>n;
    while (n%7!=0)
    {
        cin>>n;
    } */
    // using break
    while (true)
    {
        cin>>n;
        if(n%13==0)
        {
            break;
        }
        if (n%7==0)
        { 
            continue;
        }
        cout<<"no "<<n<< endl;
        
    }
    cout<<"came out of loop";


    return 0;
}