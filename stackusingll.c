#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};

struct node *head = NULL;

void push(int item){
struct node *p = (struct node*)malloc(sizeof(struct node));
		if(!p){
		printf("\nError of malloc");
		return;
		}
	p->data=item;
	p->link=head;
	head = p;
	printf("\nElement pushed is %d",item);
}

void pop(){
int item; 
struct node *p;
if(!head)
{
	printf("Underflow"); 
	 return;
}
else   {
	item = head->data;
	p = head;
	head = head -> link;
	p->link=NULL;
	free(p);
	printf("\nElement popped is %d",item);
	}
}

int peek(){
	if(head!=NULL)
	return head->data;
	else
	return -1;
}


void display(){
struct node *temp;
printf("\n\n");

	if(head == NULL){
	printf("\nStack Underflow");
	return;
	}

	else{
		temp = head;
		while(temp){	
		printf("%d->",temp->data);
		temp = temp->link;
		}
		if(!temp){
			printf("NULL");
			}	
	    }
	printf("\n%c\n",'^');
} 

int main(){
push(11);
push(22);
push(5);
push(9);
push(34);
display();

pop();
pop();
pop();

display();
return 0;
}
