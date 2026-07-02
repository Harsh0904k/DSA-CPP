#include<iostream>
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

    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);

    Node* head = first;

    linkedlist(){
    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    }

    void del(int index){
        int count = 0;
        Node* current = head;
        while(count < index-1)
        {
            current = current -> next;
        }
        current -> next = current -> next -> next;

    }
    
    void disp(){
        Node* current = head;
        while(current != nullptr){
            cout<<current->data<<" -> ";
            current = current->next;
        }
        cout<<"NUll";
    }
};

int main(){
    linkedlist A;
    A.del(1);
    A.disp();
}