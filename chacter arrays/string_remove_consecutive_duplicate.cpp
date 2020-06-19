#include<iostream>
#include<cstring>
using namespace std;
void strremove(char a[])
{
  int i=0;
  int j=1;
  int len=strlen(a);
 while (j<len)
 {
     if (a[i]==a[j])
     {
         j++;
     }
     else
     {
         i++;
         a[i]=a[j];
         j++;
     }
 }
 a[i+1]='\0';
cout<<a;
}
int main(){
    char a[1000];
    cin.getline(a,1000);
    strremove(a);
    return 0;
}