#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5,10,22,-20,44};
    int size = 5;
    int smallest = +2147483647; //(+INT_MAX)

//    for(int i=0; i<size; i++){
//        if (arr[i]<smallest){
//            smallest = arr[i];
//        }
//    }
    
    for(int i=0; i<size; i++){
		smallest = min(arr[i],smallest);
    }
    cout<<smallest;
}