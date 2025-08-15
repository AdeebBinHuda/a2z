#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int n)
{
     for(int i=0;i<n;i++){
          for(int j=i+1;j<n;j++){
               if(arr[j]<arr[i])
                    return false;

          }
     }
     return true;
}

int main(){
     int arr[]= {1,2,3,4,5};
     int n= sizeof(arr)/sizeof(arr[0]);
     bool ans= isSorted(arr,n);
     if(ans){
        cout<<"True"<<endl;
     }else{
          cout<<"False"<<endl;
     }
     return 0;
}
