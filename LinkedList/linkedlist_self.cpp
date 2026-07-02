#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
    int data;
    node* next;   // declaring a pointer named next that will point to an object of type Node.

    node(int val){
        data = val;
        next = NULL;
    }
};

class LinkedList{
    node* head;

    public:
    LinkedList(){
        head = NULL;
    }


    void insert_end(int data){
        node* new_node = new node(data);

        if(head == NULL){
            head = new_node;
            return;
        }

        node* current = head;
        while (current -> next != NULL){
            current = current -> next;
        }
        current -> next = new_node;
    }

    void disp(){
        if(head == NULL){
            cout<<"Linked List is Empty \n";
        }

        node* current = head;
        while (current != NULL){
            cout << current->data << " -> ";
            current = current -> next;
        }
        cout<<"NULL \n";
    }

};

int main(){
    LinkedList A;
    A.insert_end(1);
    A.insert_end(2);
    A.disp();


}