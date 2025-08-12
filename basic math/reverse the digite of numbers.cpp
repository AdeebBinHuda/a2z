#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
using namespace std;


int  reverseNum(int n){
      int rev=0;
      int k=0;
      while(n>0){
        rev= n%10;
        n=n/10;
        k=k*10+rev;
      }
      return k;
}

int main()
{
     int n;
     cin>>n;

     int digits =  reverseNum(n);
     cout<<"reverse of Digits in N: "<<digits<<endl;
     return 0;
}

