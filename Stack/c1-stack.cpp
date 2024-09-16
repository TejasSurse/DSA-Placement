#include<iostream>
#include<stack>

using namespace std;

int main(){
    // Generation 
    stack<int> st;

    // insertion 

    st.push(10);
    st.push(20);
    st.push(30);

    // size
    cout<<"size of Stack: "<<st.size()<<endl;

    // remove

    st.pop();

    // emptiness 
    if(st.empty()){
        cout<<"Stack is Empty"<<endl;

    }
    else{
        cout<<"Stack is Not Empty "<<endl;
    }
    // top element

    cout<<"top element "<<st.top()<<endl;
    st.pop();
    cout<<"top element "<<st.top()<<endl;
    st.push(100);
    cout<<"top element "<<st.top()<<endl;
}
