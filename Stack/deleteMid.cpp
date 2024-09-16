#include<iostream>
#include<stack>

using namespace std;

void solve(stack<int>&s, int mid){
    if(mid == 1){
        s.pop();
        return;
    }
    int top = s.top();
    s.pop();
    solve(s, mid - 1);
    s.push(top);


}
 
void deletemid(stack<int>&s, int size){
    int mid;
    if(size & 1){
        mid = (size+1)/2;
        solve(s, mid);
    }
    else{
        mid = size/2;
        solve(s, mid);
    }
}

int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    int size = s.size();
    deletemid(s, size );
    int i = s.size()-1;
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();


    }
}