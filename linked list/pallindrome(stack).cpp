//check if a linked list is pallindrome or not

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
bool checkPallindrone(Node* head){
    Node* current= head;
    stack<int> s;
    while(current != NULL){
        s.push(current->data);
        current = current->next;
    }
    while(head != NULL){
        if(head->data != s.top()){
            return false;
        }
        s.pop();
        head = head->next;
    }
    return true;
}

int main(){
    Node* head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,2);
    push(&head,1);

    cout<<checkPallindrone(head);
}