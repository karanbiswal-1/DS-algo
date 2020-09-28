//swap nodes 

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
void swapNodes(Node* head,int key1,int key2){
    Node* current = head;
    Node* prev = NULL;
    Node* next1 = NULL;
    Node* prev1 = NULL;
     Node* next2 = NULL;
    Node* prev2 = NULL;
    while(current != NULL){
        if(current->data == key1){
            prev1 = prev;
            next1 = current->next;
        }else if(current->data == key2) {
             prev2 = prev;
             next2 = current->next;
        }else{
            prev = current;
            current=current->next;
        }
    }
    prev1->next=prev2->next;
    prev1->next->next = next1;
    prev2->next

}