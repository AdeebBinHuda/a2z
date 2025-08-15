#include<bits/stdc++.h>
using namespace std;
int main()
{
     int arr[]={13,46,24,52,20,9};
     int n = sizeof(arr) / sizeof(arr[0]);

     for(int i=0;i<n;i++){
               int mini = i;
          for(int j=i+1;j<n;j++){
               if(arr[j]>arr[i]){
                    mini = j;
               }
          }
                int temp = arr[mini];
                    arr[mini]= arr[i];
                    arr[i]==temp;
     }

    cout<<"After selection sort: "<<"\n";
     for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
     }cout<<endl;

     return 0;
}
