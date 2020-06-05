#include<iostream>
using namespace std;
int median(int a[],int n)
{

  if(n%2==0)
  {
    int ans= (a[n/2]+a[(n/2)-1])/2;
    return ans;
  }
  else
  {
	  int ans= a[n/2];
      
      return ans;
  }


}
int main() {
	int n;
cin>>n; 
int a[n];
int b[n];
for(int i=0;i<n;i++)
{
  cin>>a[i];
}
for(int i=0;i<n;i++)
{
	cin>>b[i];
}
int med1,med2;
med1=median(a,n);
med2=median(b,n);
cout<<(med1+med2)/2;

	return 0;
}