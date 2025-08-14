// simple approach
/*#include<bits/stdc++.h>
using namespace std;
int divisors1(int n){
     for(int i=1;i<=n;i++){
          if(n%i==0){
              cout<<i<<" ";
          }
     }
}

int main(){
     int n;
     cin>>n;
     divisors1(n);
return 0;
}*/


// Brute Force Approach
/*#include<bits/stdc++.h>
using namespace std;
int* printDivisors(int n, int &sz){
     // Allocate memory for
    // the array of divisors
     int *divisors = new int[n];
     int cunt=0;

     for(int i = 1; i <= n; i++){
          if(n % i == 0) {
             divisors[cunt++] = i;
          }
     }
     // Update the size parameter
    // with the count of divisors
     sz = cunt;
      // Return the array of divisors
     return divisors;
}


int main(){
     int n;
     cin>>n;
     int sz;
     int *divisors = printDivisors(n,sz);

     cout<<"Divisors of "<<n<<" are: ";
     for(int i = 0; i < sz; i++){
          cout<<divisors[i]<< " ";
     }
     cout<<endl;

     delete[] divisors;

return 0;
}
*/

// Optimal Approach
#include<bits/stdc++.h>
using namespace std;
vector<int> printDivisors(int n){

    // Initialize an empty
    // vector to store the divisors
    vector<int>divisors;

     // Iterate up to the square
    // root of n to find divisors
    // Calculate the square root of n
    int sqrtN = sqrt(n);

     for(int i = 1; i <= sqrtN; ++i){
          if(n % i == 0) {
            divisors.push_back(i);

             // Add the counterpart divisor
            // if it's different from i
            if(i != n/i){
               // add the counterpart
               // divisors to the list
               divisors.push_back(n/i);
            }
         }
     }

     return divisors;
}


int main(){
     int n;
     cin>>n;

     vector<int>divisors= printDivisors(n);

     cout<<"Divisors of "<<n<<" are: ";

     sort(divisors.begin(),divisors.end());

     for(int divisor: divisors){
          cout << divisor << " ";
     }
     cout<<endl;


return 0;
}



