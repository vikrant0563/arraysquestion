#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*void mergearray(int arr[],int m,int brr[],int n,int crr[]){
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(arr[i]<brr[j]){
            crr[k]=arr[i];
            k++;
            i++;
        }
        else{
            crr[k]=brr[j];
            k++;
            j++;
        }
    }
// copy first array element
    while(i<m){
        crr[k]=arr[i];
        i++;
        k++;
    }
    // copy second array element
    while(j<n){
        crr[k]=brr[j];
        j++;
        k++;
    }
}

void printarray(int crr[],int p){
    for(int i=0;i<p;i++){
        cout<<crr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,4,6,8};
    int brr[] = {3,5,7,9,10};
   
    int m= sizeof(arr)/sizeof(arr[0]);
    int n= sizeof(brr)/sizeof(brr[0]);
    int crr[m+n];
    mergearray(arr,m,brr,n,crr);

    printarray(crr,m+n);
    return 0;
}*/

/*
void mergearray(vector<int >& arr , int n ,vector<int >& brr, int m){
   
  int r = m+n -1;
  int r1 = n-1;
  int r2 = m-1;
  while(r1>=0 && r2 >=0)
    arr[r--] = (arr[r1] > brr[r2] )? arr[r1--] : brr[r2--];

 while(r1>=0)
 arr[r--] = arr[r1--];

 while(r2>=0)
 arr[r--] = brr[r2--];

}

// void printarray(vector<int>arr,int p){
   
// }

int main(){
    vector<int > arr = {1,2,4,6,8};
    vector<int> brr = {3,5,7,9,10};
    int n = arr.size();
    int m = brr.size();

    mergearray(arr,n,brr,m);

    // printarray(arr,m+n);

}*/

