#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int front;
  int rear;
  int array[50];
}queue;

void avg(queue *q);
void enqueue(queue *q,int e);
void dequeue(queue *q);
int count(queue *q);
void search(queue *q);
void display(queue *q);

void main()
{
  queue q;
  q.front=-1;
  q.rear=-1;
  int ch,x,c;

  while(1)
  {
    printf("1.Add\n");
    printf("2.Delete\n");
    printf("3.Search\n");
    printf("4.Count\n");
    printf("5.Average\n");
    printf("6.Display\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:

      scanf("%d",&x);
      enqueue(&q,x);
      break;

      case 2:

      dequeue(&q);
      break;

      case 3:

      search(&q);
      break;

      case 4:

      c=count(&q);
      printf("%d\n",c);
      break;

      case 5:

      avg(&q);
      break;

      case 6:

      display(&q);
      break;
    }
  }
}

void enqueue(queue *q,int e)
{
  if(q->front==-1)
  q->front++;

  q->rear++;
  q->array[q->rear]=e;

  return;
}

void dequeue(queue *q)
{
  q->rear--;
}

int count(queue *q)
{
  int count=0;
  for(int i=q->front;i<=q->rear;i++)
  {
  if(q->array[i]>=60)
  count++;
  }

  return count;
}

void search(queue *q)
{
  int max=-1;
  for(int i=q->front;i<=q->rear;i++)
  {
    if(q->array[i]>max)
    max=q->array[i];
  }
  printf("%d\n",max);
}

void avg(queue *q)
{
  int sum=0,count=0;
  float avg;

  for(int i=q->front;i<=q->rear;i++)
  {
    sum=sum+q->array[i];
    count++;
  }

  avg=sum/count;
  printf("%f\n",avg);
}

void display(queue *q)
{
  for(int i=q->front;i<=q->rear;i++)
  printf("%d\n",q->array[i]);
}
