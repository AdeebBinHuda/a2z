#include<bits/stdc++.h>
using namespace std;
int main(){
     //A
     //BB
     //CCC
     //DDDD
     //EEEEE
     int n;
     cin>>n;
    /* for(int i=0;i<n;i++){
          for(int j=0;j<=i;j++){
               char ch= 'A'+i;
               cout<<ch;
          }
          cout<<endl;
     }*/
     for(int i=0;i<n;i++){
          char ch= 'A'+i;
          for(int j=0;j<=i;j++){
               cout<<ch;
          }
          cout<<endl;
     }
     return 0;
}
