#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node* prev; 
};
Node *push(Node** head_ref,int new_value){
    Node* new_node= new Node();
    new_node->data=new_value;
    new_node->next=(*head_ref);
    new_node->prev=NULL;
    
    if ((*head_ref)!=NULL){
        (*head_ref)->prev=new_node;}
    (*head_ref)=new_node;
    return *head_ref;
}
void InsertAfter(Node* prev_node,int new_data){
    if (prev_node==NULL)
        printf(" This node cannot be inserted before a Null Pointer");
    Node* new_node= new Node() ;
    new_node->data=new_data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;
    new_node->prev=prev_node;
    if (new_node->next != NULL)
        new_node->next->prev = new_node;    
}
void append(Node** head_ref,int new_data){
    Node* new_node= new Node();
    Node* last=*head_ref;
    new_node->data=new_data ;
    new_node->next=NULL ;
    while(last->next!=NULL){
        last=last->next;
    }     
    last->next=new_node;
    new_node->prev=last;
}
void insertBefore(Node** head_ref,Node* next_node, int new_data  ){
    if (next_node==NULL){
        printf("Cannot Insert This Node");
        return;}
    Node* new_node=new Node();
    new_node->data=new_data ;
    new_node->prev=next_node->prev;
    next_node->prev=new_node;
    new_node->next=next_node;
    if (new_node->prev!=NULL){
        new_node->prev->next=new_node;
    }
    else (*head_ref)=new_node;
}
void printList(Node* node ){
    Node* last=new Node();
    last=node;
    while (last!=NULL){
    cout<<last->data;
    last=last->prev;
    return ;
    }
}
int main(){
int size_0=6 ;
    int a[size_0];
    int i=6;
    for(int i=0;i<size_0;i++){
        a[i]=i;
    }
    Node* head=new Node();

//    push(&head,1);
//    push(&head,2);
//    push(&head,3);

    head=NULL;
//    cout<<'\n'<<&head;
    for(int j=0;j<size_0;j++){
        head=push(&head,a[j]);
        cout<<'\n'<<head->data;
        
    }
//    printList(head);
    return 0;
}
