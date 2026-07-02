#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = nullptr;
    }
};

class linkedlist{
    public:
    node* head;
    linkedlist(){
        head = nullptr;
    }

void insertbeg(int var){
    node* new_node = new node(var);
    if(head == nullptr){
        head = new_node;
    }
    else{
        new_node ->  next = head;
        head = new_node;
    }
}

void disp(){
    node* temp = head;
    while(temp !=  nullptr){
        cout<<temp->data<<" -> ";
        temp = temp -> next;
    }

    cout<<"NULL";

}

};
int main(){
    linkedlist A;
    A.insertbeg(3);
    A.insertbeg(2);
    A.insertbeg(1);
    A.disp();


}