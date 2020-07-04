#include<iostream>
using namespace std;
bool checkcb(long long sub,int start,int end)
{
    if (sub==0||sub==1)
    {
        return false;
    }
    int a[]={2,3,5,7,11,13,17,19,23,29};
    for (int i = 0; i < sizeof(a)/sizeof(int); i++)
    {
        if (sub==a[i])
        {
            return true;
        }
    }
    for (int i = 0; i < sizeof(a)/sizeof(int); i++)
    {
        if (sub%a[i]==0)
        {
            return false;
        }
        
    }
    
    return true;

}
bool isvalid(int start,int end,bool visited[])
{
  for (int i = start; i <end; i++)
  {
      if (visited[i])
      {
          return false;
      }
      
  }
  return true;
}
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    bool visited[17]={false};
    for (int i = 1; i <=s.length(); i++)
    {
        for (int j = 0; j <=s.length()-i; j++)
        {
            string sub=s.substr(j,i);
            int end=j+i;
            if (checkcb(stoll(sub),j,end)&&isvalid(j,end,visited))
            {
              ans++;
              for (int k=j; k < end; k++)
              {
                  visited[k]=true;
              }
                
            }
            
        }
        
    }
    cout<<ans;
    
    return 0;
}