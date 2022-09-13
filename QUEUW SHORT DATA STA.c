#include<stdio.h>
#define n 5
int main()
{
	int queue[n],ch=1,front=0,rear=0,i,j=1,x=n;
	printf("queue using Array");
	printf("\nl.insertion\n2.deletion\n3.dispaly\n4.exit");
	while(ch)
	{
		printf("\nEnter the choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			if(rear==x)
			printf("\n Queue is FUll");
			else{
				printf("\n Enter no %d:",j++);
				scanf("%d",&queue[rear++]);
			}
			break;
			case2:
			if(front==rear)
			{
				printf("\n Queue is empty");
			}
			else
			{
				printf("\n Deleted element is %d",queue[front++]);
				x++;
			}
			break;
			case3:
			printf("\n Queue ELements are:\n");
			if(front==rear)
			printf("\n Queue is Empty");
			else
			{
				for(i=front;i<rear;i++)
				{
					printf("%d",queue[i]);
					printf("\n");
				}
				break;
				case4:
				exit(0);
				default:
				printf("Wrong choice: please see the options");
			}
		}
	}
}
