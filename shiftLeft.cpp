#include<iostream>
using namespace std;


void shiftArray (int arr[] , int n ){
    // Step 1 = store the first element in an temp variable -
    int temp = arr[0];

    // Step 2- shift the element using loop - This is left shift, so formula - arr[i] = arr[i+1]; 

    for(int i = 0 ; i <n-1 ; i++){
        arr[i] = arr[i+1]; 
        
    }

// Step 3 - assign the temp variable to the first element of the array -

    arr[n-1] = temp ;


}


int main()
{

// Shift the array element to the left by 1 -

    int arr[] = {10,20,30,40,50,60};
    int n= 6;

    shiftArray(arr , n);

    // Printing the array - 

    for(int i= 0; i<n;i++){
        cout<<arr[i]<<" ";
    }


 return 0;
}