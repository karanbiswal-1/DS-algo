//You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list

#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      int sum =0;
   ListNode *l3 = NULL;
   ListNode  **node = &l3;

   while(l1!=NULL || l2!=NULL ||sum>0){
       if(l1!=NULL){
           sum+=l1->val;
           l1 = l1->next;
       }
       if(l2!=NULL){
           sum+=l2->val;
           l2= l2->next;
       }
       (*node) = new ListNode(sum%10);
        node = (*node)->next;
         sum = sum/10;
   }
   return l3;

}