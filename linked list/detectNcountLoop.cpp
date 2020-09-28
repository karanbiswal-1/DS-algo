//Find length of loop in linked list

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
 int detectnCount(Node* head){
     int cf =0;
     int cs =0;
     int len =1;
     Node* fast = head;
     Node* slow = head;
     Node* common;
     while(slow && fast && fast->next){
         fast = fast->next->next;
         slow = slow->next;
         
         if(slow == fast){
           common = slow;
            break;
         }
     }
     Node* temp = common;;
     while(temp != NULL){
         if(temp->next == common){
             return len;
         }
         temp = temp ->next;
         len++;

     }
   
     return -1;
 }

 int main(){
     Node* head = NULL;
       push(&head,1);
    push(&head,2);
    push(&head,4);
    push(&head,7);

    head->next->next->next->next = head->next;
    cout<<detectnCount(head);
 }
