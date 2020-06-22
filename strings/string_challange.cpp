#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
string extracttoken(string s,int key)
{
    char *t=strtok((char *)s.c_str()," ");
    while (key>1)
    {
        t=strtok(NULL," ");
        key--;
        
    }
    return (string)t;
}
int convertoint(string key)
{
   int ans=0;
   int p=1;
   for (int i = 0; i < key.length(); i++)
   {
       ans= ans+ ((key[i]-'0') *p);
       p=p*10;
   }
   return ans;
}
bool numericcompare(pair<string,string> s1,pair<string,string>s2)
{
  string key1,key2;
  key1=s1.second;
  key2=s2.second;
  return convertoint(key1)<convertoint(key2);
}
bool lexiocompare(pair<string,string> s1,pair<string,string>s2)
{string key1,key2;
  key1=s1.second;
  key2=s2.second;
  return key1<key2;
}
int main(){
    int n;
    cin>>n;
    cin.get();
    string a[100];
    for (int i = 0; i < n; i++)
    {
        getline(cin,a[i]);
    }
    int key;
    cin>>key;
    string reverse,compares;
    cin>>reverse>>compares;
    pair<string,string> str[n];
    for (int i = 0; i < n; i++)
    {
        str[i].first=a[i];
        str[i].second=extracttoken(a[i],key);
    }
    if (compares=="numeric")
    {
      sort(str,str+n,numericcompare);
    }
    else
    {
        sort(str,str+n,lexiocompare);
    }
    if (reverse=="true")
    {
        for (int i = 0; i < n/2; i++)
        {
            swap(str[i],str[n-i-1]);
        }
        
    }
    
    for (int i = 0; i <n; i++)
    {
        cout<<str[i].first<<endl;
    }
    
    


    return 0;
}