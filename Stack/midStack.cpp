#include<iostream>
#include<stack>
using namespace std;

// Function to find the middle element of the stack
int solve(stack<int> &st, int pos){
    // Base case: if position is 1, return the top element
    if(pos == 1){
        return st.top();
    }
    // Recursive case
    int temp = st.top(); // Save the top element
    st.pop(); // Remove the top element

    // Recursive call to process the next element
    int result = solve(st, pos - 1);

    // Push the element back after recursion
    st.push(temp);

    return result;
}

// Function to calculate the position of the middle element
int middle(stack<int>&st){
    int size = st.size();
    int pos;

    // Check if stack is empty
    if(st.empty()){
        cout << "Stack is empty, no mid element" << endl;
        return -1;
    }

    // Calculate the position of the middle element
    if(size % 2 == 0){
        pos = size / 2;
    }
    else{
        pos = size / 2 + 1;
    }

    return solve(st, pos);
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size()<<endl;

    cout << "Middle element is " << middle(st) << endl; // Expect 30

    st.push(50);
    cout << "Middle element is " << middle(st) << endl; // Expect 30

    st.push(60);
    cout << "Middle element is " << middle(st) << endl; // Expect 40

    st.push(333);
    cout << "Middle element is " << middle(st) << endl; // Expect 30

    st.push(333);
    cout << "Middle element is " << middle(st) << endl; // Expect 40
    
    return 0;
}
