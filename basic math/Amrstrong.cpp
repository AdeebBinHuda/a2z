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
     return sum==n? true: false;

}
int main(){
     int n;
     cin>>n;
     if(Armstrong(n)){
          cout<<n<< " is an Armstrong number "<<endl;
     }else{
          cout<<n<< " is not an Armstrong number "<<endl;
     }
     return 0;
}
