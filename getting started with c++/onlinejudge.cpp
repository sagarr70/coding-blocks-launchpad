//sqaure of number
// online judge
// g++ program.cpp
// ./a.out < inputfile.txt > outputfile.txt
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int no;
    for (int i = 0; i < n; i++)
    {
      cin>>no;
      cout<<no*no<<endl;
    }
    
    return 0;
}