#include<bits/stdc++.h>
using namespace std;

class node{
    public:
      int data ;
      node* next;
};

void printList(node* n){
    while(n != 0){
        cout<<n->data<<" ";
        n = n->next;
    }
}

void insertFront(node** head_ref , int newData){
    node* newNode = new node();
    newNode->data = newData;
    newNode->next = (*head_ref);

    *head_ref = newNode;
}

void insertAT(node* prev,int newData){
    node* newNode = new node();
    newNode->data = newData;
    newNode->next = prev->next;

    prev->next = newNode;
}
void append(node** head_ref,int newData){
    node* last = *head_ref;
    node* newNode = new node();
    newNode->data = newData;
    newNode->next = NULL;

    if(*head_ref == NULL){
        *head_ref = newNode;
    }else{
        while(last->next != NULL){
            last = last->next;
        }
        last->next = newNode;
    }
}

int main(){
    node* head = new node();
    node* second = new node();
    node* third = new node();

    head->data = 1;
    head->next = second;
    
    second->data =2;
    second->next = third;

    third->data =3;
    third->next = NULL;

    printList(head);
    cout<<endl;

    insertFront(&head,7);
    insertAT(head->next,6);
    append(&head,5);

    printList(head);

    return 0;
}
    
