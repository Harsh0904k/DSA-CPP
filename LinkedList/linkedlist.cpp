#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int Val){
        data = Val;
        next = nullptr;
    }
};

class LinkedList{
    public:
    Node* head;

    public:
    LinkedList(){
        head = nullptr;
    }

    void insert_beg(int data){
        Node* new_node = new Node(data);
        if (head == nullptr){
            head = new_node;
            return;
        }
        new_node -> next = head;
        head = new_node;
    }

    void insert_end(int data){
        Node* new_node = new Node(data);
        if(head == nullptr){
            head = new_node;
            return;
        }

        Node* current = head;
        while (current -> next ){
            current = current -> next;
        }
        current -> next = new_node;
    }

    void insert_index(int index, int data){
        Node* New_node = new Node(data);
        if(index == 0){
            insert_beg(data);
            return;
        }
        Node* current = head;

        int i =0;
        while (current &&  i < index-1){
             current = current -> next;
             i++;
            }
            if(current){
        New_node -> next = current -> next;
        current -> next = New_node;
            }
            else{
                cout<<index<<" Is invalid Index "<<endl;
            }

        }

        void del_index(int idx){
            int count = 0;
            Node* current = head;
            while(current -> next){
                if(count<idx-1){
                    current = current -> next;
                count++;
                }
                else if(count == idx-1){
                    current -> next = current->next ->next;
                    return;
                }
            }
            
            {

            }
            
        }

        int search(int n){
            int count = 0;
            Node* current = head;
            while(current){
                if(current->data == n){
                    return count;
                }
                current = current -> next;
                count++;
            }

            return -1;

        }


        void reverse(){
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;


        while(current){
            next = current -> next;
            current -> next = prev;
            prev = current;
            current = next;

        }
        head = prev;
    }


    void disp(){
        if (head==nullptr){
            cout<<"Empty ";
        }
        Node* current = head;
        while(current){
            cout<<current->data<<" -> ";
            current = current -> next;
        }
        cout<<"NULL";
    }

};

int main(){
    LinkedList A;
    A.insert_beg(1);
    A.insert_beg(0);
    A.insert_end(3);
    A.insert_index(2,2);
    A.insert_index(4,4);

    int id = A.search(4);
    if(id==-1){
        cout<<"element not found"<<endl;;
    }
    else{
        cout<<"element found at index "<<id<<endl;
    }
    
    A.disp();

   cout<<endl;  
    A.reverse();
    A.disp();

 cout<<endl;

    A.del_index(2);
    A.disp();
}