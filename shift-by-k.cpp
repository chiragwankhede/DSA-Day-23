#include<iostream>
using namespace std;

void shiftByk(int arr[] , int n){

//  Step 1 - create a temp array to hold last 2 value 
 
    int temp [] = {arr[n-1] , arr[n-2]};

// Step 2 - use loop to shift the elements by k value - It is a right shift (arr[i] = arr[i-1])

    for(int i = n-1; i>=2 ; i--){
        arr[i] = arr[i-2];
    }

//  Step 3 - place the temp value at the first 2 positions 

    arr[0 ] = temp [0];
    arr[1] = temp[1];



}


// shift the elements by k positions  



int main()
{



    int arr [] = {10,20,30,40,50,60};
    int n = 6;


    shiftByk(arr , n );

    for(int i =0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }




 return 0;
}