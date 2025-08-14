// Brute force approach
#include<bits/stdc++.h>
using namespace std;

int main(){
     int n1,n2;
     cin>>n1>>n2;
    int result=0;
     for(int i=1;i<=min(n1,n2);i++){
          if(n1%i==0 && n2%i==0){
               result= i;
          }
     }
     cout<<"The GCD of "<<n1 <<" and " <<n2<<" is "<<result<<endl;
     return 0;
}

// Euclidean algorithm.
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
     int n1,n2;
     cin>>n1>>n2;
     cout<<__gcd(n1,n2)<<endl;
     return 0;
}
*/

// recursive
/*#include<bits/stdc++.h>
using namespace std;
int gcd_recursive(int n1,n2){
     if(b==0){
          return a;
     }
     return gcd_recursive(b,a%b);
}
int main(){
     int n1,n2;
     cin>>n1>>n2;
     int  result = gcd_recursive(n1,n2);
     cout<<"The GCD of "<<n1 <<"and" << n2 <<"is "<<result<<endl;
     return 0;
}*/


// iterative implementation
/*
#include<bits/stdc++.h>
using namespace std;
int gcd_iterative(int a,int b){
     while(b!=0){
          int temp = b;
          b =a%b;
          a= temp;
     }
     return a;
}
int main(){
     int n1,n2;
     cin>>n1>>n2;
     int  result = gcd_iterative(n1,n2);
     cout<<"The GCD of "<<n1 <<" and " <<n2<<" is "<<result<<endl;
     return 0;
}
*/
