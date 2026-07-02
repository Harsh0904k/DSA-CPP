#include <iostream>
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
class linkedlist{
    private:
    node* head;

    public:
    linkedlist(){
        head = NULL;
    }

    void insertBeg(int val){
        node* temp = new node(val);
        if(head==NULL){
            head = temp;
            return;
        }
        temp -> next = head;
        head = temp;
    }

    void disp(){
        if(head == NULL){
            cout<<"Empty List";
        }
        node* current = head;
        while(current){
            cout << current -> data << "-> ";
            current = current -> next;
        }
        cout<<"end";
    }


};

int main(){
    linkedlist A;
    A.insertBeg(3);
    A.insertBeg(2);
    A.insertBeg(1);
    A.disp();
}