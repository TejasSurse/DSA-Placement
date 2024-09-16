public class ReverseArray {
    public void Reverse(int arr[], int size){
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
    public static void main(String[] args) {
        int arr[] = {2,5,23,4,54};
        ReverseArray r = new ReverseArray();
        r.Reverse(arr, 5);
        for(int i = 0; i<5; i++){
            System.out.print(arr[i]+ " ");
        }
        
        
    }   
}