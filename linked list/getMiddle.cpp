//find the middle element of the linked list

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

int getMiddle(Node* head){
    if(head != NULL){
        Node* fast = head;
        Node* slow = head;
        while(fast != NULL  && fast->next != NULL){
            fast=fast->next->next;
            slow= slow->next;
        }
        return slow->data;
    }
    return -1;
}
int main(){
       Node* head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head,4);
    push(&head,7);
    push(&head,6);
    push(&head,8);
    cout<<getMiddle(head);
}