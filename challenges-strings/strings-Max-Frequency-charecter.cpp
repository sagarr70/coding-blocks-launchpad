#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cin>>a;
    char res;
    for (int i = 0; i <a.length(); i++)
    {
        int count[256]={0};
        int maxfre=0;
        
        for (int i = 0; i < a.length(); i++)
        {
           count[a[i]]++;
           if (maxfre<count[a[i]])
           {
            
           maxfre=max(maxfre,count[a[i]]);
           res=a[i];
           }

        }
    }
    cout<<res;
     
    return 0;
}