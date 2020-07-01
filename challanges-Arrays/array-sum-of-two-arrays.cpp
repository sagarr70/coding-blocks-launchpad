#include<iostream>
using namespace std;
void sum(int a[],int b[],int n,int m){
int carry=0;
int res[100];
int ni=n-1;
int mi=m-1;
int last=0;
int large=max(n,m);int i;
for ( i= 0; i < large && (ni>=0 && mi>=0); i++)
{
    int ans=a[ni]+b[mi]+carry;
    res[i]=ans%10;
    carry=ans/10;
    ni--;mi--;
}
if (mi>=0)
{
    while (mi>=0)
    {
    int ans=b[mi]+carry;
    res[i]=ans%10;
    carry=ans/10;
    i++;
    mi--;
    }
    
}
else
{
    if (ni>=0)
    {
        while (ni>=0)
    {
    int ans=b[ni]+carry;
    res[i]=ans%10;
    carry=ans/10;
    i++;
    ni--;
    }
    }
    
}
while (carry)
{
    res[i]=carry%10;
    carry=carry/10;
    i++;
}
for (int j = i-1; j >=0; j--)
{
    cout<<res[j]<<", ";
}
cout<<"END";
}
int main(){
    int n;
    cin>>n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[100];
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    sum(a,b,n,m);
    
    return 0;
}