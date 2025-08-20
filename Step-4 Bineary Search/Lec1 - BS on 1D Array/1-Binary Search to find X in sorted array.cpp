/*
#include<bits/stdc++.h>
using namespace std;
int binearySearch(vector<int>& nums,int target){
     int sz= sizeof(nums)/sizeof(nums[0]);
     int Start=0,  End= sz-1;

     while(Start<=End){
          int middle= (Start+End)/2;

          if(nums[middle]==target){
               return middle;
          }
          else if(target<nums[middle]){
               End= middle-1;
          }
          else{
               Start= middle+1;
          }
     }
     return -1;

}
int main(){
   vector<int> arr={3,4,6,7,9,12,16,17};

     int target= 6;
     int ind= binearySearch(arr,target);

     if(ind == -1){
          cout<<"the target is not present"<<endl;
     }else{
          cout<<"the target is at index"<<ind<<endl;
     }
     return 0;
}
*/


//recursive approach
#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>& nums,int Start,int End,int target){
    if(Start>End) return -1;

    // Perform the steps:
    int mid= (Start+End)/2;
    if(nums[mid]== target) return mid;
    else if(target>nums[mid])
            return binarySearch(nums,mid+1,End,target);
    return binarySearch(nums,Start,mid-1,target);

}

int search(vector<int>& nums,int target){
     return binarySearch(nums,0,nums.size()-1,target);
}

int main(){
   vector<int> arr={3,4,6,7,9,12,16,17};

     int target= 17;
     int ind= search(arr,target);

     if(ind == -1){
          cout<<"the target is not present"<<endl;
     }else{
          cout<<"the target is at index: "<<ind<<endl;
     }
     return 0;
}
