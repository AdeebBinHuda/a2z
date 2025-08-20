//Brute Force Approach

/*#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int>arr,int n,int num)
{
     for(int i=0;i<n;i++){
          if(arr[i]>=num){
                return i;
          }
     }
     return n;
}

int main()
{
     vector<int>arr={2,3,4,6,8,9,12,34,35,45,76};
     int n= arr.size();
     int num = 35;
     auto ind= lower_bound(arr,n,num);
     cout<<"The lower bound is the index : "<<ind<<endl;
     return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main(){

     vector<int>v={1,3,5,8,9,12};
     auto it= lower_bound(v.begin(),v.end(),10);

    // cout<<distance(v.begin(),it)<<endl;
      cout<<"Lower bound is: "<<*it<<endl;
     return 0;
}
*/


#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int>arr ,int n, int x){
    int low = 0, high= n-1;
    int ans=n;

    while(low <= high){
    int middle= (low+high)/2;
    // maybe an answer
    if(arr[middle]>=x){
       ans = middle;
       // look for smaller index on the left
      high = middle - 1;
     }
     else{
          low = middle + 1; // look on the right
     }
   }
   return ans;
}
int main()
{
     vector<int> arr= {3,5,8,15,19};
     int n=5, x=9;

     int ind= lowerBound(arr,n,x);
     cout<<"The lower bound is index: "<<ind<<"\n";
     return 0;
}
