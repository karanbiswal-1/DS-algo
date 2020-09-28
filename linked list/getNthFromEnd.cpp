//find nth node from end

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

int getNthFromEnd(Node* head, int n){
    int count =0;
    Node* current = head;
    Node* ref = head;
    while(current != NULL){
        if(count > n){
            ref = ref->next;
        }
        current = current->next;
        count++;
    }
    if(current == NULL && n<count){
        return ref->next->data;
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

    cout<<getNthFromEnd(head,2);
}