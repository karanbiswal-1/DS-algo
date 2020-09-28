//remove dupicates from unsorted list

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
    Node* current  = head;
    Node* prev;
    unordered_set<int> s;
    if(current == NULL){
        return;
    }
    while(current != NULL){
        if(s.find(current->data) != s.end()){
            prev->next = current->next;
           delete(current);
        }else{
            s.insert(current->data);
            prev = current;
        }
            current=prev->next;
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
     push(&head,3);
    push(&head,2);
    push(&head,9);
    push(&head,3);
   removeDuplicates(head);
    printList(head);
}