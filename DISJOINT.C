#include<stdio.h>
#include<conio.h>
void main()
{
int arr1[30],i,n,a,b,temp,arr2[30],ch;
clrscr();
printf("\n1.create");
printf("\n2.union");
printf("\n3.find");
printf("\n4.exit");
while(1)
{
printf("\n enter choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("enter number of elements in set:");
scanf("%d",&n);
printf("enter elements in set:");
for(i=0;i<n;i++)
{
scanf("%d",&arr1[i]);
arr2[i]=i;
}
break;
case 2:
printf("\n Enter the index of elements(2 indices) which are to be connected(union):\n");
scanf("%d%d",&a,&b);
temp=arr2[a];
for(i=0;i<n;i++)
{
if(arr2[i]==temp)
arr2[i]=arr2[b];
}
printf("\n elements satus after union \n");
for(i=0;i<n;i++)
{
printf("%d\t\t%d\n",arr1[i],arr2[i]);
}
printf("\n elements have been sucessfully connected(union operation)\n");
break;
case 3:
printf("\n enter the index of elements(2 indices) whose connection is to be checked (find operation):\n");
scanf("%d%d",&a,&b);
if(arr2[a]==arr2[b])
printf("\n elements at indices %d & %d are connected\n",a,b);
else
printf("\n elements at indices %d & %d are not connected \n",a,b);
break;
case 4:
exit(0);
break;
default:
printf("\n wrong choice,please select a valid choice");
break;
}
}
}
