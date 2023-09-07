#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {0,1,0,2,1,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);

   int start = 0;
   int mid = 0;
   int last = n-1;
   while(mid<=last){
    if(arr[mid]==0){
        swap(arr[mid],arr[start]);
        mid++;
        start++;
    }
    else if(arr[mid]==1)
    mid++;
    else{
        swap(arr[mid],arr[last]);
        last--;
    }
    
   }
   for(int i=0;i<n;i++)
   cout<<arr[i]<<" ";
    
    return 0;
}