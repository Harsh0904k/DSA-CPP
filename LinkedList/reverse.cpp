#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data = val;
        next = NULL;
    }
};

void reverse(node* head){
    node* next = head->next;
    head -> next = nullptr;
    while(next != nullptr){
        node* prev = head;
        head = next;
        next = head->next;
        head->next = prev;
    }
    node* current = head;
    while(current){
        cout<<current->data<<" -> ";
        current = current->next;
    }
    cout<<"NULL";

}

int main(){
    node* head = new node(0);
    node* second = new node(1);
    node* third = new node(2);
    node* fourth = new node(3);
    node* fifth = new node(4);

    head->next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;

    node* temp = head;
    while(temp){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL";

    cout<<endl;
    reverse(head);
}