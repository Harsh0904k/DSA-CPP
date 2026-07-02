#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> A;
    A.push(0);
    A.push(1);
    A.push(2);

    while(!A.empty()){
        cout<<A.top()<<" ";
        A.pop();
    }
}