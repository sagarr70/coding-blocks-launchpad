#include<iostream>
#include<cstring>
using namespace std;
bool pallindrome(char a[])
{
    int len = strlen(a);
    int i=0;
    int j=len-1;
    while (i<j)
    {
        if (a[i]!=a[j])
        {
            return false;
        }
        i++;j--;
        
    }
    return true;

}
int main(){
   char a[100];
   cin.getline(a,100);
   bool ans=pallindrome(a);  
   cout<<boolalpha<<ans;
   return 0;
}