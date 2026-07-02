#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
stack <int> st1;
st1.push(0);
st1.push(1);
st1.push(2);
st1.push(3);

stack<int> st2(st1);

print(st1);
cout<<endl;
print(st2);


}

