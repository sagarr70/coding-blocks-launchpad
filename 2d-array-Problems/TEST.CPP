#include<iostream>
using namespace std;
namespace Box1
{
    int a =4;
}
namespace Box2
{
    int a=13;
}
int main(){
    int a=16;
    Box1::a;
    Box2::a;
    cout<<a;
    return 0;
}