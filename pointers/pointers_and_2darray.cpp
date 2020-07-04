#include<iostream>
using namespace std;

int main(){
    int b[2][3]={2,3,6,4,5,8};
    int (*p)[3]=b ;
    cout<<p<<"   "<<&p[0]<<"  "<<&p[0][0]<<"  "<<*p<<"  "<<p[0]<<endl;
    cout<<p+1<<"   "<<&p[1]<<"  "<<&p[1][0]<<"  "<<*(p+1)<<"  "<<p[1]<<endl;
    cout<<*(*(p+1)+1);
    return 0;
}