#include<iostream>
#include<cstring>
using namespace std;
char *mystrtok(char a[],char delim)
{
   static char *input=NULL;
   if (a!=NULL)
   {
       input=a;
   }
   if (input==NULL)
   {
       return NULL;
   }
   

   char *output=new char[strlen(input)+1]; 
   int i;
   for ( i = 0; input[i]!='\0'; i++)
   {
       if (input[i]!=delim)
       {
           output[i]=input[i];
       }
       else
       {
           output[i]='\0';
           input=input+i+1;
           return output;
       }
   }
   output[i]='\0';
   input=NULL;
return output;

}
int main(){
    char a[1000]="my name is sagar";
    char * ptr= mystrtok(a,' ');
    while (ptr!=NULL)
    {
        cout<<ptr<<endl;
        ptr=mystrtok(NULL,' ');
    }
    
    return 0;
}