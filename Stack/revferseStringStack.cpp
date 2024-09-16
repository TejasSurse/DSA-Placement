#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str = "abcd";
    cout<<str<<endl;
    stack<char>st;
    for(auto ch : str){
        char c = ch;
        st.push(c);

    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}