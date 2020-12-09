#include<stdio.h>
#include<stdlib.h>
struct color{
    int number;
    int isVisited; 
    struct color *next;
};
int main(){
    struct color *head,*temp,*newnode;
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(head==NULL){
            newnode=(struct color *)malloc(sizeof(struct color));
            scanf("%d",&newnode->number);
            newnode->isVisited=0;
            newnode->next=NULL;
            head=newnode;
            temp=newnode;    
        }
        else{
            newnode=(struct color *)malloc(sizeof(struct color));
            scanf("%d",&newnode->number);
            newnode->isVisited=0;
            temp->next=newnode;
            temp=newnode;
        }
    }
    temp=head;
    int pairs=0,count;
    struct color *move;
    for(i=0;i<n;i++){
        count=0;
        move=temp;
        for(j=i;j<n;j++){
            if(temp->number==move->number){
                if(move->isVisited==0){
                    move->isVisited=1;
                    count++;
                }
            }
            move=move->next;
        }
        temp=temp->next;
        pairs=pairs+(count/2);
    }
    printf("%d",pairs);
}
