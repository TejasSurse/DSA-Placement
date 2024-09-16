#include<iostream>
using namespace std;
void maxMin(int arr[], int size){
    int max = -2222;
    int min = 9999;
    int i = 0; 
    while(i<size){
        if(arr[i] > max){
            max = arr[i];
            cout<<max<<"at iteration max"<<arr[i]<<endl;
        }
        if(arr[i]< min){
            min = arr[i];
            cout<<min<<"at iteration min  "<<arr[i]<<endl;
        }
        i++;
    }
    cout<<"Max is "<<max<<endl;
    cout<<"Min is "<<min<<endl;

}
int main(){
    int arr[5] = {2,3,4,5,45};
    maxMin(arr, 5);


}