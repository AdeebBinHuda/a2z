 #include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
using namespace std;

bool  palinDrome(int n){
     int rev=0;
     int duplicate = n;
     while(n>0){
        int ld=n%10;
         rev =(rev*10)+ld;
         n= n/10;
     }

     if(duplicate == rev){
          return true;
     }else{
          return false;
     }
}

int main()
{
     int n;
     cin>>n;

    if(palinDrome(n)){
     cout<<n<< " is a palindrome"<<endl;
    }else{
         cout<<n<<" is not a palindrome" <<endl;
    }
     return 0;
}
