#include<iostream>
using namespace std;
int getans(int k,string s,char ch)
{
   int i=0;
   int j=0;
   int ans=0;
   int count=0;
   for (j ; j<s.length()-1; j++)
   {
      if (s[j]!=ch)
      {
          count++;
      }
      if (count==k)
      {
          break;
      }
   }
   while (i<j)
   {
       while (j<s.length()-1 && s[j+1]==ch) 
       {
           j++;
       }
       int curlen=j-i+1;
       ans=max(ans,curlen);
       i++;
       if (j<s.length()-1&&s[i-1]!=ch)
       {
           j++;
       }
       
       
   }
   return ans;

}
int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    if (k>s.length())
    {
        cout<<s.length();
        return 0;
    }
    int ansA=getans(k,s,'a');
    int ansB=getans(k,s,'b');
    cout<<max(ansA,ansB);
    return 0;
}