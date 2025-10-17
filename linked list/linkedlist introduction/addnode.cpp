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
node* addfirst(node* head,int value){  // add at front
    node* temp=new node(value);
    if(!head)
    return temp;
    temp->next=head;
    head=temp;
    return head;
}
node* addlast(node* head,int value){
    node* temp=new node(value);
    if(head==NULL)
    return temp;
    node* it=head;
    while(it->next){
        it=it->next;
    }
    it->next=temp;
    return head;
}
node* addAtposition(node* head,int value,int pos){
    node* temp=new node(value);
    if (pos <= 1 || !head) {
        temp->next = head;
        return temp;
    }
   int i=1;
   node* it=head;
   while(i<pos-1&&it){
    i++;
    it=it->next;
   }
   if(it){
    temp->next=it->next;
    it->next=temp;
    return head;
   }
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
    
    head=addfirst(head,12); //add front
    t=head;
     while(t->next){
        cout<<t->val<<"->";
        t=t->next;
    }
    cout<<t->val<<endl;
    head=addlast(head,20);  //add last
    t=head;
     while(t->next){
        cout<<t->val<<"->";
        t=t->next;
    }
    cout<<t->val<<endl;

    head=addAtposition(head,45,5);
    t=head;
     while(t->next){
        cout<<t->val<<"->";
        t=t->next;
    }
    cout<<t->val<<endl;
}