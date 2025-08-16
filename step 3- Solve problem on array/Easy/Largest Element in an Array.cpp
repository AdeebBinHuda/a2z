/*
Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 5
Explanation: 5 is the largest element in the array.
*/


/*
#include<bits/stdc++.h>
using namespace std;
int sorting(vector<int>&arr,int n){
     sort(arr.begin(),arr.end());
     cout<<arr[n];
}
int main(){

     int arr[]={2,5,1,3,0};
     int n= sizeof(arr)/sizeof(arr[0]);

    int  mx= arr[0];
     for(int i=0;i<n;i++){
         mx= max(mx,arr[i]);
     }
     cout<<mx;

return 0;
}*/




/*#include<bits/stdc++.h>
using namespace std;
int sorting(vector<int>&arr,int n){
     sort(arr.begin(),arr.end());
     return arr[arr.size()-1];
}
int main(){

    vector< int> arr[]={2,5,1,3,0};

    cout<<"The largest element in the arr is: " <<sorting(arr)<<endl;

return 0;
}
*/

//recursive
#include<bits/stdc++.h>
using namespace std;
int findTheLargestElement(int arr[],int n){

     int mx= arr[0];
     for(int i=0;i<n;i++){
         if(mx<arr[i]){
          mx= arr[i];
         }
     }
     return mx;
}
int main(){

    int arr[]={2,5,1,3,0};
    int n= sizeof(arr)/sizeof(arr[0]);

    int mx= findTheLargestElement(arr,n);

    cout<<"The largest element in the arr is: " <<mx<<endl;

return 0;
}

