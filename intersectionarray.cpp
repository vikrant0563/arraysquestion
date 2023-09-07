#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> A = {1,2,2,3,3,4,5,6};
    int n = A.size();
    vector<int> B = {2,3,3,5,6,6,7};
    int m = B.size();
    vector<int>ans;

    //====================THE BRUTE FORCE APPROACH=================
//    int vis[m] = {0};     
//     for(int i=0;i<n;i++){         // take ith element of array A 
//         for(int j=0;j<m;j++){      // ith element of array A is compared in whole array B
//             if(A[i] == B[j] && vis[j]==0){    //here we check ith element of A is equal to the jth element of B and that element of B is not repeated before
//                 ans.push_back(A[i]);
//                 vis[j]=1;
//                 break;
//             }

//             if(B[j] > A[i]){
//                 break;
//             }
//         }
//     }
//     for(auto i:ans){
//         cout<<i<<" ";
//     }

    //============================THE OPTIMAL APPROACH==================

    int i=0;
    int j=0;
    while(i<n && j<m){
          if(A[i]<B[j]){
            i++;
          }
          else if(B[j] < A[i]){
            j++;
          }
          else{
            ans.push_back(A[i]);
            i++;
            j++;
          }
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}