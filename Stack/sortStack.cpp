// base case when stack gets empty, return 

// step 1 - int temp = st.top();
// step 2 - st.pop();
// step 3 - make a recursive call until base case is achieved 
// step 4 - insert temp in the stack using insertInSortedStack
//          function while backtracking 


#include<iostream>
#include<stack>

using namespace std;

void insertInSortedStack(stack<int>&st, int data){
    // base case
    if(st.empty() || data > st.top()){
        st.push(data);
        return;
    }
    // 1 case solve karo 
    int temp = st.top();
    st.pop();

    // recursive call
    insertInSortedStack(st, data);
    // BT
    st.push(temp);
    return;
}

void sortStack(stack<int>&st){
    // base case
    if(st.empty()){
        return; 
    }
    // 1 case solve karo
    int temp = st.top();
    st.pop();

    // recursive call
    sortStack(st);
    // bt
    insertInSortedStack(st, temp);
    return;
    
}