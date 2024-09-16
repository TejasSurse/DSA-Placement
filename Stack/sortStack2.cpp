#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
void printstack(stack<int>st){
    while(!st.empty()){
        cout<<st.top()<< "  "<<endl;
        st.pop();
    }
}
void sortStack(stack<int>&st){
    vector<int>ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());
    for(int i = 0; i < ans.size(); i++){
        st.push(ans[i]);
    }
}

int main(){
    stack<int>st;
    st.push(20);
    st.push(10);
    st.push(22);
    st.push(40);
    printstack(st);
    sortStack(st);
    cout<<"Stack AFter Sorted"<<endl;
    printstack(st);
}