#include<iostream>
using namespace std;

int main(){
    //primitive data types
    //int , float , bool ,  ouble , char
    int x=5000;
    float y = 10.14;
    bool weather_is_rainy = true;
    double pi=3.141121515412133;
    char ch ='A';
    //how much memory each is going to occupy!
    cout<<"int "<<sizeof(x)<<endl; //4
    cout<<"float "<<sizeof(y)<<endl; //4
    cout<<"bool "<<sizeof(weather_is_rainy)<<endl; //1
    cout<<"double "<<sizeof(double)<<endl; //8
    cout<<"char "<<sizeof(char)<<endl; //1
    return 0;
}