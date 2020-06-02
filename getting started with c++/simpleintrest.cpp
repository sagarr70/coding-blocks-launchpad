#include<iostream> //fixed
#include<iomanip> //setprecision
using namespace std;

int main(){
    //Simple intrest
    //this is a comment
    /* this is a multiline comment */
   /*  int p=100;
    int r=25; //every
    int t=1;
    */
   //input from user
   int p,r,t;
   cin>>p>>r>>t;
    float si = (p*r*t)/100.0; 
    // integer/integer = integer 
    //folat/float=float
    //integer/float=float
    //cout<<fixed<<setprecision(2)<<si<<endl; //for getting outpot with decimals
    cout<<si;
    return 0;
}