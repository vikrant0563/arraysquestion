#include<iostream>
#include<algorithm>
using namespace std;


/*void leftrotate(int arr[],int n ,int d){
    int temp[d] ={0};     //HERE WE STORE D ELEMENT IN TEMP ARRAY
    d=d%n;               // AFTER EACH N ITERATION ARRAY WILL BE SAME 
               
    for(int i=0;i<d;i++){        // HERE WE ARE STORING D ELEMENT IN TEMP ARRAY FROM THE ARRAY
        temp[i] = arr[i];
    }

    for(int i=d;i<n;i++){        // HERE WE SHIFTING THE ARRAY FROM D INDEX TO THE LEFT SIDE 
        arr[i-d] = arr[i];
    }
 
    for(int i=n-d;i<n;i++){ // HERE WE COPY THE TEMP ARRAY TO ARRAY FROM (N-D) INDEX TO THE N INDEX
        arr[i] = temp[i-(n-d)];
    }



    
}*/

void Leftrotate(int arr[] , int n , int d){
    reverse(arr,arr+d);    // here we reverse the array from 0 index to the d index

    reverse(arr+d,arr+n);       // here we reverse the array from d index to the n index

    reverse(arr,arr+n);    // after above reversing the array , we reverse the whole array
}


/*void rightrotate(int arr[],int n , int d){
    reverse(arr,arr+(n-d));

    reverse(arr+(n-d) , arr+n);

    reverse(arr,arr+n);
}
*/




int main(){
    int arr[] = {25 ,6, 20, 55 ,69, 5, 50, 63, 61, 41, 87, 80, 2, 96, 77, 70, 12, 43, 31, 8 ,64, 41, 68, 18, 95, 79, 52, 74, 1 ,98, 3, 26
     ,3 ,74 ,32 ,23 ,79 ,81 ,37 ,39 ,21 ,24 ,18 ,22, 71, 47 ,44};

    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<"\n";

//      APPROACH FOR LEFTROTATE AN ARRAY BY ITS  FIRST ELEMENT 
   /* int j=arr[0];             //HERE WE COPY FIRST ELEMENT OF AN ARRAY AND IN THIS APPROACH WE USE AN EXTRA SPACE AS TEMP[] ARRAY
    for(int i=1;i<n;i++){        // HERE WE SHIFTING THE ARRAY TO LEFT SIDE
        arr[i-1]=arr[i];
    }
    arr[n-1]=j;                //  HERE WE COPY THE FIST ELEMENT TO THE LAST INDEX OF THIS ARRAY

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }*/

    // APPROACH FOR LEFTROTATE AN ARRAY BY ITS D STEPS

    // THE BRUTE FORCE APPOACH 
   /*int d; 
   cin>>d;

    leftrotate(arr,n,d);   // FUNCTION CALLING

for(int i=0;i<n;i++)
cout<<arr[i]<<" ";*/ 


 // APPROACH FOR LEFTROTATE AN ARRAY BY ITS D STEPS

    // THE OPTIMAL APPOACH without using extra space

    int d;
    cin>>d;

   Leftrotate(arr,n,d%n);
    
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";


 // APPROACH FOR RIGHTROTATE AN ARRAY BY ITS D STEPS

    // THE OPTIMAL APPOACH without using extra space

    /*int d;
    cin>>d;

   rightrotate(arr,n,d%n);
    
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";*/

    return 0;
}