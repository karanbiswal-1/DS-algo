//Remove duplicates from a sorted linked list

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
void removeDuplicates(Node* head){
    Node* current = head;
    Node* next_next;
    if(current == NULL){
        return;
    }
    while(current->next != NULL){
        if(current->data == current->next->data){
            next_next = current->next->next;
            free(current->next);
            current->next = next_next;
        }else{
            current=current->next;
        }
    }
}

void printList(Node *node)  
{  
    while (node!=NULL)  
    {  
        cout<<" "<<node->data;  
        node = node->next;  
    }  
} 

int main(){
    Node* head = NULL;
     push(&head,2);
     push(&head,2);
    push(&head,3);
    push(&head,3);
    push(&head,9);
   removeDuplicates(head);
    printList(head);
}
