#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,0,0,3,1,3,5,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    int i=-1;
    for(int j=0;j<n;j++){
        if(arr[j]==0){
            i=j;
            break;
        }
    }
    for(int j=i+1;j<n;j++){
        if(arr[j]!=0)
        {
            swap(arr[j],arr[i]);
            i++;
        }
    }
    
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
    return 0;
}