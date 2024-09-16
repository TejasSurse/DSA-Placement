#include<iostream>
using namespace std;

void ReverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

}

int main(){
    int arr[5] = {2,4,54,53,23};
    ReverseArray(arr, 5);
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}   