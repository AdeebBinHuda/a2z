#include<bits/stdc++.h>
using namespace std;
bool Armstrong(int n){

     int sz= to_string(n).size();
     int sum = 0;
     int temp = n;
     while(temp>0){
          int digit= temp%10;
           sum +=pow(digit, sz);
           temp/=10;
     }

     return sum==n;

}
int main(){
     int n;
     cin>>n;
     bool res= Armstrong(n);
      cout<<res<<endl;
}
