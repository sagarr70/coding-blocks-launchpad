#include<iostream>
using namespace std;
int linearsearch(int a[],int n , int key)
{
  for (int i = 0; i < n; i++)
  {
      if (a[i]==key)
      {
         return i;       
      }
      
  }
  
 return -1;


}
int main(){
    int n,key;
    cin>>n;
    int a[1000]={0};
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    cin>>key;
    int index=linearsearch(a,n,key);
    cout<<index;
    return 0;
}