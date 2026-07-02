#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
    data = val;
    next = nullptr;
    }
};

class linkedlist{
    public:
    Node* head = nullptr;

    void insertend(int val){
        Node* new_node = new Node(val);
        if(head == nullptr){
            head = new_node;
        }
        else{
            Node* temp = head;
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }

    void disp(){
        Node* current = head;
        while(current != nullptr){
            cout<<current->data<<" -> ";
            current = current->next;
        }
        cout<<"NULL";
    }
};

int main(){
    linkedlist A;
    A.insertend(1);
    A.insertend(2);
    A.insertend(3);
    A.disp();
}