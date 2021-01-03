#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node* prev; 
};
void push(Node** head_ref,int new_value){
// Declare a node for the New Data
// Declaring a Pointer because Pointer can be passed and saved where variable will end once Function Call ends
    Node* new_node;
// Allocate Value to Node 
    new_node->data=new_value;
// Allocate New Node Prev and Next
    new_node->prev=NULL;
    new_node->next=(*head_ref);
// If Head_ref is not null then Prev of Head_ref Becomes the New Node
    if (*head_ref!=NULL){
        (*head_ref)->prev=new_node;}
// Make the Head_Ref point to the New Node
    (*head_ref)=new_node;

};

void InsertAfter(Node* prev_node,int new_data){
// Check that prev_node is null
    if (prev_node==NULL)
        printf(" This node cannot be inserted before a Null Pointer");
// Allocate New Node
    Node* new_node ;
// Put Data in New Node
    new_node->data=new_data;
// Allocate New Node prev and next
    new_node->next=prev_node->next;
    prev_node->next=new_node;
    new_node->prev=prev_node;
// Change previous of new_node's next node 
    if (new_node->next != NULL)
        new_node->next->prev = new_node;    
};

int main(){
// Create Linked List 
// Enter Number of Elements
int size_0=6 ;
//    cout<<"Input Initial Size of Linked List:  ";
//    cin>>size_0;
    int a[size_0];
//    cout<<"Input Numbers ";
    int i=6;
    for(int i=0;i<size_0;i++){
        a[i]=i;
    }
// Push Array elements into Linked List with Last one as Head
    Node* head=NULL;
    for(int j=0;j<size_0;j++){
        push(&head,a[j]);
    }


    return 0;
}
