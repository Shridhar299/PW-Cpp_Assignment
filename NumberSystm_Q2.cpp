#include<iostream>
using namespace std;
int main(){

      int n=9;
      cout<<"Input: "<<n<<endl;
      int ans=0;
      while(n>0)
      {
        int parity = n%2;
        if(parity==0){
            ans++;
        }
        n=n/2;
      }
      cout<<"Number of Zeros: "<<ans;
      
    return 0;
}

