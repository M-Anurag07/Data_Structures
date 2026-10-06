#include<stdio.h>
#include<stdlib.h>
#define max 3
int queue[max];
int front=-1;
int rear=-1;
void insert(){
int value;
if(rear==max-1){
printf("Queue Overflow i.e Queue is Full");
}
else
printf("enter value:");
scanf("%d",&value);
if(front=-1){
front=0;
}
rear++;
queue[rear]=value;
printf("%d inserted into queue",value);
}
void delete(){
if(front==-1||front>rear){
printf("Queue Underflow");
}
else
printf("%d deleted from queue",queue[front]);
if(front==rear){
front=-1;
rear=-1;
}
else{
front++;
}
}
void display(){
if(front==-1|| front>rear){
printf("Queue is empty");
}
else{
printf("Queue elements:");
for(int i=0;i<max;i++){
printf("%d \t",queue[i]);
}}}
void main(){
int choice;
while(1){
printf("\n");
printf("\n 1.Insert ");
printf("\n 2.Delete");
printf("\n 3.Display");
printf("\n 4.Exit");
printf("\n Enter your choice: ");
scanf("%d",&choice);
switch(choice){
case 1:{
insert();
break;
}
case 2:{
delete();
break;
}
case 3:
{
display();
break;
}
case 4:{
printf("Exiting the program");
exit(0);
break;
 }
default:{
printf("Invalid choice");
}
}
}}

