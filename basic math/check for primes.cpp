#include<bits/stdc++.h>
using namespace std;
int prime(int n){
     int cnt=0;
   for(int i=1;i<=n;i++){

     if(n%i==0){
         cnt++;
     }

   }
   if(cnt>2){
     return false;
   }else{
        return true;
   }
}
int prime1(int n){
     int cnt=0;
     for(int i=1;i<sqrt(n);i++){
          if(n%i==0){
               cnt+=1;
               if(n/i != i){
                    cnt =cnt+1;
               }
          }
     }
     if(cnt>2){
     return false;
   }else{
        return true;
   }
}
int main(){
     int n;
     cin>>n;
     if(prime1(n)){
          cout<<n<<" is a prime number";
     }else{
           cout<<n<<" is not a prime number";
     }
return 0;
}
