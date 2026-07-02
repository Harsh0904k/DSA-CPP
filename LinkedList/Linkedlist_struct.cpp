#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

struct node* head = NULL;

void insetrbeg(int val){
    struct node* new_node = new node();
    new_node -> data = val;
    new_node -> next = head;
    head = new_node;
}

void disp(){
    struct node* temp = head;
    if(temp == NULL){
        cout<<" list is empty";
    }
    while(temp){
        cout<<temp->data<<"->";
        temp = temp -> next;
    }
    cout<<"end";
}

int main(){
   struct node* head = NULL;
   insetrbeg(5);
   insetrbeg(4);
   disp();

}

