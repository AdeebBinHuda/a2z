#include<bits/stdc++.h>
using namespace std;
int main(){
// 3
// A
// A B
// A B C
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
     for(char ch='A';ch<='A'+i;ch++){
          cout<<ch<<' ';
     }
     cout<<endl;
    }
    return 0;
}

