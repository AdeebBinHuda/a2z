#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
using namespace std;
/*int  countDigits(int n){
      int cnt=0;
      while(n>0){
      //  cnt= n%10;
        n=n/10;
        cnt++;
     }
     return cnt;
}*/

int  countDigits(int n){

      int cnt=(int)(log10(n)+1);

     return cnt;
}

int main()
{
     int n;
     cin>>n;

     int digits = countDigits(n);
     cout<<"Number of Digits in N: "<<digits<<endl;
     return 0;
}
