#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool lexiocompare(string a,string b)
{
    return a+b>b+a;
}
void generator(string a[],int m)
{  cin>>m;
    char ch;
   ch=cin.get();
   for (int i = 0; i < m; i++)
   {
       cin>>a[i];
   }
    sort(a,a+m,lexiocompare);
    for (int i = 0; i <m; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
}
int main(){
    int t,m;
    string a[100000];
    cin>>t;
    while (t)
    {
        generator(a,m);
    t--;
    }
    
    
    return 0;
}