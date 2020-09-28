//Detect loop in a linked list

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

bool detectLoop(Node* head){
    Node* fast= head;
    Node* slow = head;
    while(slow && fast && fast->next){
       
        fast = fast->next->next;
        slow = slow->next;
         if(slow == fast){
            return true;
        }
    }
    return false;
}

int main(){
    Node* head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head,4);
    push(&head,7);

   // head->next->next->next->next = head;

    cout<<detectLoop(head);
}