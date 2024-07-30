#include<iostream>
using namespace std;

int unique (int arr[] , int size){
    int ans = 0;
    for (int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}



int main()
{

//  We have to find the number in the array that is only present once, where other are present twice - XOR [^] -

int arr [] = {1,1,2,2,3,3,4,4,9};

int size = 9;

int finalAns = unique(arr , size);

cout<<"Number present once : " << finalAns;

 return 0;
}