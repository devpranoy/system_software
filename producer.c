
#include<stdio.h>
#define max 5
int queue[max],front=0,rear=0;
int semaphore=1;
int menu(); 				//Display Function(menu)
int produce();				//Add to queue(produce)
int consume();				//Delete from queue(consume)
void display();				//Display Function (Queue)
int main()
{
int ch;

printf("\nProducer Consumer Problem\n");
int stat;
do
{
    ch=menu();
    switch(ch)
    {
    case 1: produce();
            display();
    break;
    case 2: 
	
	stat =1;
	 stat=consume();
	if (stat=0){
		return 0;}
	    display();
    break;
    case 3:
    return 0; // Exit
    break;
    default:printf("\n Please enter a valid choice!!");
    }
}while(1);
}
 
int menu()
    {
    int ch;
    printf("\n1 PRODUCE \n2.CONSUME \n3.EXIT");
    printf("\nEnter your Choice:");
    scanf("%d",&ch);
    return ch;
    }
 
int produce()
{
    if(semaphore==1)
  {
    semaphore=0;
    int element;
    if(rear==max)
    {
        printf("queue full");
	semaphore=1;
    }
    else
    {
        printf("\nEnter Element:");
        scanf("%d",&element);
        queue[rear++]=element;
        printf("\n %d Produced at %d",element,rear);
	semaphore=1;
    }
  }
else{
  return 0;
  }

}
 
int consume()
{
  if (semaphore==1){
    semaphore=0;
    if(rear==front)
    {
        printf("\nQueue Empty");
        semaphore=1;
	return 0;
    }
    else
    {
        front++;
        printf("\nElement is consumed from %d",front);
	semaphore=1;
    }
	}
else{
	return 0;
  }


}
void display()
{
    int i;
    if(front==rear)
    {
        printf("\nQueue is Empty!!!");
    }
    else
    {
        printf(" \n");
        for(i=front;i<max;i++)
        {
            printf(" | %d ",queue[i]);
        }
            printf("|");
    }
}
