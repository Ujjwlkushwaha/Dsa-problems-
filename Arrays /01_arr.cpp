#include<iostream>
using namespace std ;

int main(){
    
    int arr[10] ; // declaration of an array

    int arr2[5] = {2,5,4,6,7}; // initialization of an array
 
// Taking input of an array..........

    for(int i=0 ; i<5 ; i++){
        cin >> arr[i];
    }
    
// Printing array Element..........

    for(int i=0 ; i<5 ; i++){
        cout << arr[i] << " " ;
    }



}