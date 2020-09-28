//find a function to ensure a key present in linked list

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int data;
     Node* next;
};

void push(Node** head_ref,int newData){
    Node* newNode = new Node();
    newNode->data  = newData;
    newNode->next = (*head_ref);
    (*head_ref) = newNode;
}


bool search(Node* head,int key){
    Node* current = head;
    while(current != NULL){
        if(current->data == key){
            return true;
        }
        current = current->next;
    }
    return false;
}
int main(){
    Node* head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head,4);
    push(&head,7);
    push(&head,6);

    cout<<search(head,10);
}