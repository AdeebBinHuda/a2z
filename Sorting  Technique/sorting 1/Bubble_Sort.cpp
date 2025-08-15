#include<bits/stdc++.h>
using namespace std;
int main(){
    int  arr[] = {13,46,24,20,9};
     int n= sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
               if(arr[j]>arr[j+1]){
                    int temp = arr[j+1];
                    arr[j+1]= arr[j];
                    arr[j] = temp;

               }
          }
     }

     cout<<"After bubble sort :";
     for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
     }
     cout<<'\n';


     return 0;
}
