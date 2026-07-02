#include<iostream>
#include<vector>
using namespace std;
class stack{
    vector <int> V;
    int size = 3;
    int count = 0;
    int element;

    public:
    void push(int element);
    void pop();
    int size_stack();
    void disp();
};

void stack :: push(int element){
    if (count == size){
        cout<<"stack is full"<<endl;
        return ;
    }
    V.push_back(element);
    count++;
    disp();
}

void stack :: pop(void){
    if (count == 0){
        cout<<"stack is empty"<<endl;
        return;
    }
    V.pop_back();
    count --;
    disp();
}


int stack :: size_stack(){
    return count;
}


void stack :: disp(void){
    cout<<"Stack : " ;
    if (count == 0){
        cout<<"Now stack is Empty"<<endl;
        return;
    }
    for(int i=0; i<count;i++){
        cout<<V[i]<<" ";
    }
        if (count == size){
        cout<<"(Now Stack is full)";
    }
    cout<<endl;
}


int main(){
stack S;
int element;
int a = -1;
while(a != 0){
cout<<"press 1 to push, 2 to pop,3 to get size, 0 to exit ";
cin>>a;
if(a==1){
    cout<<"Enter element you want to insert ";
    cin>>element;
    S.push(element);
}

if (a==2){
    S.pop();
}

if (a==3){
    int n = S.size_stack();
    cout<<"size of the stack is "<<n<<endl;
}

}
}