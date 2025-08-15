/*
#include<bits/stdc++.h>
using namespace std;

// [this approach only works if there are no duplicates]
int getElements(int arr[],int n){

     if(n==0 || n==1)
         cout<<-1<<" "<<-1<<endl;

    // O(NlogN)
     sort(arr,arr+n);
     int small = arr[1];
     int large= arr[n-2];
     cout<<"Second smallest is : " <<small<<endl;
     cout<<"Second largest is : "<<large<<endl;

}

int main(){
     int arr[]={1,2,4,6,7,5};
     int n= sizeof(arr)/sizeof(arr[0]);

     getElements(arr,n);
     return 0;
}
*/


#include<bits/stdc++.h>
using namespace std;
// [this approach only works if there are no duplicates]
void getElements(int arr[],int n){

     if(n==0 || n==1)
         cout<<-1<<" "<<-1<<endl;

    int mx =INT_MIN;
    int mn=INT_MAX;

    int sl=INT_MIN;  // second_largest
    int ss=INT_MAX;  // second smallest

    for(int i=0;i<n;i++){
         mx = max(mx,arr[i]);
         mn = min(mn,arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]<ss && arr[i]!=mn)
           ss= arr[i];

        if(arr[i]>sl && arr[i]!=mx)
          sl = arr[i];
    }

     cout<<"Second smallest is : " <<ss<<endl;
     cout<<"Second largest is : "<<sl<<endl;

}

int main()
{
     int arr[]={1,2,4,6,7,5};
     int n= sizeof(arr)/sizeof(arr[0]);
     getElements(arr,n);
     return 0;
}
