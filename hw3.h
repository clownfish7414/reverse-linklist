typedef struct _Node {
    int id;
    struct _Node* next;
} Node;

void reverse(Node *node_l, Node *node_r){
    Node*tail=node_r->next;
    Node*head=node_l->next;
    Node*temp=NULL;
    while(head!=node_r){
        //printf("enter");
        temp=head->next;
        head->next=tail;
        tail=head;
        head=temp;       
    }
    head->next=tail;
    node_l->next=node_r;
}
