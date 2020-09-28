//Write a function that counts the number of times a given int occurs in a Linked List

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
int getFreq(Node* head,int key){
    int count =0;
    Node* current = head;
    while(current != NULL){
        if(current->data == key){
            count++;
        }
        current = current ->next;
    }
    return  count;
}
int main(){
          Node* head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head,4);
    push(&head,7);
    push(&head,6);
    push(&head,7);
    push(&head,6);
    push(&head,7);
    cout<<getFreq(head,7);
}