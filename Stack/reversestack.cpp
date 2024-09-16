#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&st, int x){
    // base case
    if(st.empty()){
        st.push(x);
        return;
    }
    // solve 1 case 
    int temp = st.top();
    st.pop();
    // recursive call 
    insertAtBottom(st,x);

    // bt
    st.push(temp);
    return;
}

void Reverse(stack<int>&st){
    if(st.empty()){
        return;
    }
    // solve 1 case 
    int temp = st.top();
    st.pop();
    // recursive call
    Reverse(st);
    // bt 
    insertAtBottom(st, temp);
}
int main(){
    return 0;
}

// another approach 
/*
    vector<int>arr;
        while(!St.empty()){
            arr.push_back(St.top());
            St.pop();
        }
        int size = arr.size()-1;
        for(int i = 0; i<=size;  i++){
            St.push(arr[i]);
        }
*/