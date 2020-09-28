//check if a linked list is a pallindrome without using a stack

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
void reverse(Node** head_ref){
    Node* current = (*head_ref);
    Node* prev = NULL;
    Node* Next;

    while(current != NULL){
        Next = current->next;
        current->next = prev;
        prev = current;
        current =Next;
    }
    (*head_ref) = prev;
}

bool campare(Node* head1,Node* head2){
    Node* cur1 = head1;
    Node* cur2 = head2;
    while(cur1!=NULL && cur2!=NULL){
        if(cur1->data != cur2->data){
            return false;
        }
        cur1 = cur1->next;
        cur2 = cur2->next;
    }
    return true;
}

bool pallindrome(Node* head){
    Node* slow = head;
    Node* fast = head;
    Node* prev_slow  = head;
    Node* secondHalf = head;
    Node* midnode =NULL;
    if(head != NULL && head->next!=NULL){
        while(fast!=NULL && fast->next!=NULL){
            fast =fast->next->next;
            prev_slow = slow;
            slow = slow->next;
        }
        if(fast!=NULL){
            midnode = slow;
            slow = slow->next;
        }
        secondHalf = slow;
        prev_slow->next=NULL;
        reverse(&secondHalf);
        if(campare(head,secondHalf)){
            return true;;
        }
        
    }
    return false;
}

int main(){
    Node* head = NULL;
        push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,2);
    push(&head,9);

    cout<<pallindrome(head);
}