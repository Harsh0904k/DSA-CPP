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
    Node* head = nullptr;

    void insert(int val, int pos){
        Node* new_node = new Node(val);
        int  count=0;

        if(pos==0){
            new_node->next = head;
            head = new_node;
            return;
        }

        Node* temp = head;

        while(count != pos-1){
            if(temp == nullptr){
                cout<<"Node Does'nt exist ";
                return;
            }

            temp = temp->next;
            count++;
        }
        new_node->next = temp->next;
        temp->next = new_node;
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
    A.insert(2,0);
    A.disp();
}
