/* BITONIC
1) first increasing then decreasing , or
2) entirely increasing , or
3) entirely decreasing */
#include<iostream>
#include<climits>
using namespace std;
bool checkbitonic(int a[],int i,int j)
{ int start=i;
  int end=j;
  bool decreasing=false;
  int flag=0;
  for ( start = i; start <=end; start++)
  {   if (a[start]==a[start+1]&&start+1<=end)
  {
      return false;
  }
      if (start+1<=end&&(a[start]>a[start+1]&&decreasing==false))
      {
          decreasing=true;
          int flag=1;
      }
      if (start+1<=end&&(a[start]<a[start+1]&&decreasing==true))
      {
          return false;
      }
  }
      return true;
  
}
void maxlengthbitonic()
{ int max_len=INT_MIN;
  int n;
  cin>>n;
  int a[n]={0};
  for (int i = 0; i < n ; i++)
  {
      cin>>a[i];
  }
  for (int i = 0; i < n; i++)
  {
      for (int j = i; j < n; j++)
      {
          if(checkbitonic(a,i,j))
          {
              int leng=(j-i)+1;
              max_len=max(leng,max_len);
          }
      }
      
  }
    cout<<max_len<<endl;
}
int main(){
    int t;
    cin>>t;
    while (t)
    {
        maxlengthbitonic();
        t--;
    }
    
    
    return 0;
}