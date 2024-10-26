#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *head = NULL,*temp,*r;

void addbeg(int value){

    if(head = NULL){
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = value;
        head = temp;
        temp->next = NULL;
    }

    else{
        r = (struct node*)malloc(sizeof(struct node));
        r->data = value;
        r->next = temp;
        while (temp->next!=head){
            temp = temp->next;
        }
        head = r;
    }
 }

void  addlast(int value){

    if(head = NULL){
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = value;
        head = temp;
        temp->next = NULL;
    }

    else{
        while (temp->next!=NULL){
            temp = temp->next;
        }
        r = (struct node*)malloc(sizeof(struct node));
        r->data = value;
        temp = r;
        r->next = NULL;
    }
}

void  display(struct linkedList *list) {
    struct node* temp = list -> head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


int main(){
    int c, d, p;

    while(1){
        int c;
        printf("\nLink List\n");
        printf ("1.For Add Element at First \n");
        printf ("2.For Add Element at Last \n");
        printf ("3.For Add Element at any Position \n");
        printf ("4.Display the Code \n");
        printf ("5.Exit the Code \n");
        printf ("Enter Operation: ");
        scanf("%d",&c);

        switch (c){
        case 1:
            printf("Enter data: ");
            scanf("%d", &d);
            addbeg(&list,d);
            break;
        case 2:
            printf("Enter data: ");
            scanf("%d", &d);
            addlast(&list,d);
            break;
        case 3:
            printf("Enter data: ");
            scanf("%d", &d);
            printf("Enter position: ");
            scanf("%d", &p);
            addanyposition(&list,d,p);
            break;
        case 4:
            display(&list);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Input !! \n");
            break;
        }
    }
    return 0;
}