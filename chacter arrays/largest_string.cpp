#include<iostream>
#include<cstring>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int longestlen=INT_MIN;
    char longstr[100];
    cin.get();
    while (n>0)
    {
        char a[100];
        cin.getline(a,100);
        int len=strlen(a);
        if (longestlen<len)
        {
            longestlen=len;
            strcpy(longstr,a);
        }
        n--;
    }
    cout<<longstr<<endl;
    cout<<longestlen;
    
    return 0;
}