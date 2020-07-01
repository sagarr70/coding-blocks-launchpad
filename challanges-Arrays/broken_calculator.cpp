#include<iostream>
using namespace std;
#define MAX 1000
int multiply(int res[],int x,int resize)
{
  int carry=0;
  for (int i = 0; i < resize; i++)
  {
      int prod=(res[i]*x)+carry;
      res[i]=prod%10;
      carry=prod/10;
  }
  while (carry)
  {
      res[resize]=carry%10;
      carry=carry/10;
      resize++;
  }
  
  return resize;
}
void facto(int n)
{
   int res[MAX];
   res[0]=1;
   int resize=1;
   for (int x = 2; x <=n; x++)
   {
       resize=multiply(res,x,resize);
   }
   
   for (int i = resize-1; i >=0; i--)
   {
       cout<<res[i];
   }
}

int main(){
    int n;
    cin>>n;
    facto(n);
    return 0;
}