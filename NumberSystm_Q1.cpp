#include <iostream>
using namespace std;
int main(){
       
       int sum=0;
       cout<<"Input:"<<endl;
       for(int i=1;i<=5;i++){
          cout<<i<<" ";
		  sum=sum+i;
        }
        int ans = 0;
        int power = 1;
      while (sum>0)   
      {
         int perity=sum%2;
         ans=ans+perity*power;
         power=power*10;
         sum=sum/2;
         
      }
      cout<<endl<<"sum of the first 5 decimal numbers from 1 to 5 in binary format: "<<ans;
      
  }
