//find the length of the linked list

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

int getLength(Node* head){
    int count =0;
    Node* current = head;
    while(current!=NULL){
        current = current->next;
        count++;
    }
    return count;
    
}

int main(){
    Node* head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head,4);
    push(&head,7);
    push(&head,6);

    cout<<getLength(head);
}