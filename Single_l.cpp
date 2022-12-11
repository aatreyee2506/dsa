#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
};
void display(Node*n){
    while(n!=NULL){
        cout<<" "<<n->data;
        n=n->next;

    }
}
void insert_b(Node **head_ref,int new_data){
    Node *new_node=new Node();
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}
void insert(Node*prev_node,int new_data){
    if(prev_node==NULL){
        cout<<"Previous node can't be null."<<endl;
        return;

    }
    Node *new_node=new Node();
    new_node->data=new_data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;

}
void insert_e(Node**head_ref,int new_data){
   Node *new_node=new Node();
   new_node->data=new_data;
   Node *last=*head_ref;
   new_node->next=NULL;
   if(*head_ref==NULL){
        *head_ref=new_node;
        return;
   }
   while(last->next!=NULL){
    last=last->next;
    return;
   }
   last->next=new_node;
   return;

}
int main(){
     Node* head = NULL;
     
    
    insert_e(&head, 6);
    insert_b(&head, 7);
    insert_b(&head, 1);
    insert_e(&head, 4);
    insert(head->next, 8);
     
    cout<<"Created Linked list is: ";
    display(head);
    return 0;
}