#include <bits/stdc++.h>
using namespace std;
int main(){
    int  arr[]= {13,46,24,52,20,9};
     int n= sizeof (arr)/sizeof(arr[0]);

     int i,value,hole;
     for(int i=1;i<n;i++){
          value = arr[i];
          hole = i;
          while(hole>0 && arr[hole-1]>value){
              arr[hole]= arr[hole-1];
              hole--;
          }
          arr[hole]= value;
     }

     printf("sorted Array \n\n");
     for(int i=0;i<=5;i++){
          printf("%d ",arr[i]);
     }printf("\n");

     return 0;
}
