#include<iostream>
#include<string>
using namespace std;
int main(){
    //string init
    string s0;
    string  s1("hello");
    string s2 = "hwllo world";
    string s3(s2);
    string s4=s3;
    char a[]={'s','a','g','\0'};
    string s5(a);
    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;

    //empty
    if (s0.empty())
    {
        cout<<"s0 is empty"<<endl;
    }
    //append
    s0.append("i love c++");
    cout<<s0<<endl;
    s0 += " and python"; // OR s0= s0+" ";
    cout<<s0<<endl;


    //remove content
    cout<<s0.length()<<endl;
    s0.clear();
    cout<<s0.length()<<endl;
    //compare two strings
    s0="apple";
    s1="mango";
    cout<<s1.compare(s1)<<endl; //0-> is equal , >0 or <0 otherwise (compare lexiographically)
    cout<<s1.compare(s0)<<endl;
    cout<<s0.compare(s1)<<endl;
    //overloaded compatators opeators
    if(s1>s0)
    {
        cout<<"mango is lexo-graphically greatar"<<endl;
    }
    s1<s0;
    cout<<s0[0];
    //find substrings
   string s= "i want to have apple juice";
   int idx=s.find("apple");
   cout<<idx<<endl;
   //erase a word from string
   string word="apple";
   int len=word.length();
   s.erase(idx,len+1);
   cout<<s<<endl;  
   //iterate over all charactars in a string
   for (int i = 0; i <s0.length(); i++)
   {
       cout<<s0[i]<<":";
   }
   cout<<endl;
   //iterators
   for (auto it = s0.begin(); it<s0.end(); it++)//string::iterator
   {
       cout<<(*it)<<",";
   }
   cout<<endl;
   //for each loop
   for ( auto c:s0)
   {
        cout<<c<<"'";
   }
   
   
   
 
    return 0;
}