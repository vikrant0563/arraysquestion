#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,10,50,60,70,80,90};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=1;i<n;i++){
        if(arr[i]<=arr[i-1])
        cout<<"false";
    }
    cout<<"true";
    return 0;
}