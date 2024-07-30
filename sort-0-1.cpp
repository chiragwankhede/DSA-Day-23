#include<iostream>
using namespace std;

 void sortZeroOne (int arr[] , int n){
    int zeroCount=0 ;
    int oneCount = 0;

//  Step 1 - Count the zero and one - 
    for(int i =0 ; i<n ;i++){
        if(arr[i] == 0){
            zeroCount++;
        }
        if(arr[i] == 1) {
            oneCount++;
        }
    }

    //  Step 2 - place zero first in the array then one 

    int i ;
    for(i = 0 ; i<zeroCount ; i++){
        arr[i] = 0;
    }

    for (int j =i ; j<n; j++){
        arr[j] =1;
    }

 }

// Sort the array such that first there will be all zeros then one - (000001111)

int main()
{

    int arr[] = {0,1,1,1,0,1,0,1,0,1};
    int n = 10;

    sortZeroOne(arr,n);

//  printing the sorted array-

    for (int i=0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }



 return 0;
}