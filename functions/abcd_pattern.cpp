#include<iostream>
using namespace std;
void ABCDPATTERN(int n)
{
   for (int i = 1; i <=n; i++)
   {
       char ch= 'A';
       for (int k = i; k<=n; k++)
       {
           cout<<ch;
           ch=ch+1;
       }
       cout<<endl;
   }
}
int main(){
    int n;
    cin>>n; 
    ABCDPATTERN(n);
    
    return 0;
}