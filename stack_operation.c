
#This is the code for performing entering and deleting element from stacT
#include<stdio.h>
int main()
{
 int op,num,i,top=-1,a[5],element,choice=1;
 printf("enter the size of stack");
 scanf("%d",&num);
 while(choice!=0)
 {
printf("enter 1 for entering an element and 2 for deleting an element\t");      #inputing the chioce wheather it is input or deletion
 scanf("%d",&op);
  switch(op)
  {
   case 1 :if(top>=num-1)       #cheching is stak full
           {
            printf("stack overflow\n");
           }
           else
           {
           printf("enter the element for adding\t");
           scanf("%d",&element);
           top+=1;            #incrementing the value of tap by 1
           a[top] = element;
           }
           printf("elements in stack are\t");
           for(i=0;i<=top;i++)
           {
            printf("%d\t",a[i]);
	   }
           printf("\n");
           break;
   case 2 :if(top<0)        #checing is the stack empty
           {
            printf("stack underflow\n");
           }
           else
           {
            top = top -1;
            printf("Element is deleted\tvalue of top = %d\n",top);        #displaying the value of top after deleting the stack element
           }
 }
  printf("enter 1 to continue and 0 for exit\t");
  scanf("%d",&choice);
}
}

