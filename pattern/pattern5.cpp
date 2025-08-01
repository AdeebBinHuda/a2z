#include<bits/stdc++.h>
using namespace std;
int main(){
  // 3
  //***
  //**
  //*
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
     for(int j=n;j>i;j--){
          cout<<'*';
     }
     cout<<endl;
    }
    return 0;
}

