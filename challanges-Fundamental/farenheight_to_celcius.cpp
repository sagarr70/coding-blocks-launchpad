#include<iostream>
using namespace std;

int main(){
    int min_f;
    cin>>min_f;
    int max_f;
    cin>>max_f;
    int multi;
    cin>>multi;
    while (min_f<=max_f)
    {
        cout<<min_f<<" "<<(5*(min_f-32))/9<<endl;
        min_f=min_f+multi;
    }
    
    return 0;
}