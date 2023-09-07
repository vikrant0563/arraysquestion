#include<iostream>
#include<vector>
using namespace std;
int main(){
      vector<int> A = {1,2,3,4,5,6,7,8,10};
       int n = A.size() + 1;     // the size of the array will be given in the question
   
   //===============BRUTE FORCE APPROACH===========
    // for(int i=1;i<=n;i++){
    //     int flag = 0;
    //     for(int j=0;j<n-1;j++){
    //         if(A[j]==i){      //checking the number is present or not
    //             flag = 1;
    //             break;
    //         }
    //     }
    //     if(flag==0){
    //     cout<<i;          //if not present print those num
    //     break;
    //   }
    // }

    //==============THE OPTIMAL APPROACH (1)===============

//     int missingnum;
//     int sum = (n*(n+1))/2;    // we know that the formulaof  sum of N natural number 
//     int s2 = 0;
//     for(int i=0;i<n-1;i++){
//         s2 = s2 + A[i];         // sum of array elements 
//     }
//    missingnum = sum - s2;       // here we found the missing number by the difference of sum and s2
//    cout<<missingnum;

//====================THE OPTIMAL APPROACH (2)===========
// here we use xor(^) property to find misssing number 
// we know that the xor(^) of same number is zero
// and xor(^) between zero and a number is give the same number
int missingnum;       
int xor1 = 0;              
int xor2 = 0;
for(int i = 1;i<=n; i++){
    xor1 = xor1^i;                // here we find the xor of 1 to n numbers
}
for(int i = 0;i<n-1; i++){
    xor2 = xor2^A[i];              // here we find the xor of array elemets
}


missingnum = xor1^xor2;         //here we get the missing number by the  xor of ( the xor of n numbers and xor of array elements)

cout<<missingnum;
    return 0;
}