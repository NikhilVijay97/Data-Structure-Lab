#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 5
void initialize();
void lqinsert();
void lqdelete();
void lqtraverse();
int queue[MAXSIZE];
int front,rear;
void main()
{
int choice;
initialize();
clrscr();
while(1)
{
clrscr();
printf("\n STATIC IMPLEMENTATION OF LINEAR QUEUE");
printf("\n________");
printf("\n1.insert");
printf("\n2.delete");
printf("\n3.traverse");
printf("\n4.exit");
printf("\n________");
printf("\n\n Enter your choice[1/2/3/4]:");
scanf("%d",&choice);
switch(choice)
{
case 1:lqinsert();
break;
case 2:lqdelete();
break;
case 3:lqtraverse();
break;
case 4:exit(0);
default:printf("\n invalid choice");
}
getch();
}
}
void initialize()
{
front=rear=-1;
}
void lqinsert()
{
int num;
if(rear==MAXSIZE-1)
{
printf("\n Queue is full(queue overflow)");
return;
}
printf("\n Enter the elements to be inserted:");
scanf("%d",&num);
rear++;
queue[rear]=num;
if(front==-1)
front=0;
}
void lqdelete()
{
int num;
if(front==-1)
{
printf("queue is empty(queue underflow)");
return;
}
num=queue[front];
printf("\n Deleted element is:%d",num);
front++;
if(front>rear)
front=rear=-1;
}
void lqtraverse()
{
int i;
if(front==-1)
{
printf("\n queue is empty(queue underflow)");
return;
}
else
{
printf("\n queue elements are:\n");
for(i=front;i<=rear;i++)
printf("%d\t",queue[i]);
}
}


