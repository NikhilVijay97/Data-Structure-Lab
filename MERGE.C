

#include<stdio.h>
#include<conio.h>
int main()
{
int arr1[50],arr2[50],merge[100],n,k,i,size1,size2;
clrscr();
printf("Enter the size of elements in first array:\n");
scanf("%d",&size1);
printf("Enter the elements of first array\n");
for(i=0;i<size1;i++)
{
scanf("%d",&arr1[i]);
merge[i]=arr1[i];
}
k=i;
printf("\nEnter the size of elements of second array:\n");
scanf("%d",&size2);
printf("\nEnter the elemnets of second array\n");
for(i=0;i<size2;i++)
{
scanf("%d",&arr2[i]);
merge[k]=arr2[i];
k++;
}
printf("\nThe sorted array is:");
for(i=0;i<k;i++)
{
printf("%d\t",merge[i]);
}
getch();
return(0);
}
