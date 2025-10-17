#include<bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node* next;
    node(int d){
        val=d;
        next=NULL;
    }
};
node* mid(node* head){
    if(!head)
    return NULL;
   node* fast=head;
   node* slow=head;
   while(fast&&fast->next){
    slow=slow->next;
    fast=fast->next->next;
   }
   return slow;
}
int main(){
    node* head=new node(5);
    head->next=new node(1);
    head->next->next=new node(3);
    head->next->next->next=new node(7);
    head->next->next->next->next=new node(4);
    head->next->next->next->next->next=new node(2);
    head->next->next->next->next->next->next=new node(9);
    node* t=head;
    while(t->next){
        cout<<t->val<<"->";
        t=t->next;
    }
    cout<<t->val<<endl;
    head=mid(head);
    t=head;
     while(t->next){
        cout<<t->val<<"->";
        t=t->next;
    }
    cout<<t->val<<endl;
}