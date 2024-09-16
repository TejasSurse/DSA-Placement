#include<iostream>
#include<stack>
using namespace std;

stack<int>insertAtBottom(stack<int>&st, int x){
    // base case 
    if(st.empty()){
        st.push(x);
        return st;
    }
    // 1 case solve krlo
    int temp = st.top();
    st.pop();
    // recursive  call 

    insertAtBottom(st, x);
    // bt 
    st.push(temp);
    return st;

}


int main(){
    stack<int>st;
    st.push(20);
    st.push(10);
    st.push(30);
    st.push(20);
    insertAtBottom(st, 200);
    while (!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();

    }
    return 0;
}