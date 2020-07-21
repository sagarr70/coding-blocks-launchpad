#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[100]={7,8,9,4,5,6,1,2};
    sort(a,a+8);    
    for (int i = 0; i <8; i++)
    {
      cout<<a[i];
    }
    
    return 0;
}