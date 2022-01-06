#include<iostream>
using namespace std;
 int reverse(int);
  int sum=0;
int main()
{
   int n,temp,c,sum=0,result=0,temp2;
   cout<<"Enter ur no. for finding strong number\n";
   cin>>n;
   temp=n;

   while(n!=0)
    {
      c=n%10;
        sum=sum+c;
        
      n=n/10;
     }
    temp2=sum;
    while(temp2!=0)
     {
       c=temp2%10;
       result=result*10+c;
       temp2=temp2/10;
     }
     
    if(sum*result==temp)
     {
     cout<<endl<<"Magic number\n";
     }
     else
     cout<<"Not a Magic number\n";
     return 0;
}

  