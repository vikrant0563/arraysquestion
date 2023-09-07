#include<iostream>
using namespace std;

int main(){
    //QUESTION -->
    //REVERSE AN ARRAY AFTER POSITION M 

    int arr[] = {2,5,6,4,7,8,9,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<n<<endl;
    int m;
    cin>>m;             //INPUT POSITION
    int s = m+1;
    int e = n-1;
    while (s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--; 
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}