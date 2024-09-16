#include<iostream>
#include<algorithm>
using namespace std;

void noordersort(int arr[], int size){
    sort(arr+ 1, arr+size);
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" "<<endl;
    }
}
int main(){
    int arr[9] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    // function order not matter 
    noordersort(arr, 9);
    return 0;
}