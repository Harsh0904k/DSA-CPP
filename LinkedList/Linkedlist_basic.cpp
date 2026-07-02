#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};

int main(){
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    first -> data  = 2;
    first ->  next = second;
    second -> data = 4;
    second -> next  = third;
    third -> data  = 6;
    third-> next = NULL;

    Node* head  = first;
    while(head != NULL){
        cout<<head->data;
        head =  head->next;
    }



}