#include<iostream>
using namespace std;
int main()
{
    //  to prints the pairs of the each elements of array - Using nested loop 

    int arr [] = {10,20,30,40};
    int n = 4;

    for(int i = 0 ;i<n ; i++){
        for( int j=0 ; j<n ;j++){
            cout<< arr[i] << ", " << arr[j] <<"\n";
        }
    }



 return 0;
}