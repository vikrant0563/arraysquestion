#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {35,12,1,-10,10,34,1 ,-5};
    int n = sizeof(arr)/sizeof(arr[0]);

   // sort(arr , arr+n);
   //  int slargest = 0;

	//     for(int i=n-2;i>=0;i--){
	//        if(arr[i]!=arr[n-1]){
   //         slargest = arr[i];
   //         break;
   //         }
   //      }
   //     cout<<slargest;
          

           /* OPTIMAL SOLUTION*/
   int largest = arr[0];
   int slargest = -1;
   for(int i=0;i<n;i++){
      if(arr[i]>largest){
         slargest = largest;
         largest = arr[i];
      }
      else if(arr[i] < largest && arr[i] > slargest){
         slargest = arr[i];
      }
   }

   cout << slargest <<endl;

        return 0;
}