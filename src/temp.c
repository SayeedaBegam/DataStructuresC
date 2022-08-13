#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
    int value;
    struct node *next;
};
void insert();
void delete();
void display();
int count();

typedef struct node DATA_NODE;
DATA_NODE *headnode,*firstnode,*previousnode,*tempnode = 0,nextnode;
int data;

int main()
{
    int option = 0;
    while(option < 5)
    {
        printf("CHOOSE AN OPTION:  \n");
        printf("1.INSERT\n");
        printf("2.DELETE\n");
        printf("3.DISPLAY\n");
        printf("4.EXIT\n");
        printf("Enter your option: \n");
        scanf("%d",& option);
        switch(option)
        {
          case 1:
          insert();
          break;
          case 2:
          delete();
          break;
          case 3:
          display();
          break;
          case 4:
          printf("EXITING");
          default:
          printf("INVALID OPTION");
        };
    }
    return 0;
}
void insert()
{
    printf("ENter");
    scanf("%d",&data);
    
    tempnode = (DATA_NODE *)malloc(sizeof(DATA_NODE));
    tempnode->value = data;
    if(firstnode == 0)
    {
        firstnode = tempnode;
    }
    else
    {
        headnode->next =tempnode;
    }
    tempnode->next = 0;
    headnode =tempnode;
    fflush(stdin);
}
void delete()
{
    int countvalue,pos,i = 0;
    countvalue =count();
    tempnode = firstnode;
    printf("Display");
    
    printf("Enter the position: \n");
    scanf("%d",&pos);
    
    if (pos > 0 && pos <= countvalue)
    {
        if(pos == 1)
        {
            tempnode = tempnode->next;
            firstnode = tempnode;
            printf("DELETE");
        }
        else
        {
            while(tempnode != 0)
            {
                if (i ==(pos -1))
                {
                    previousnode->next = tempnode->next;
                    if(i == (countvalue -1))
                    {
                        headnode =previousnode;
                    }
                    printf("DELETE");
                    break;
                }
                else
                {
                    i++;
                    previousnode = tempnode;
                    tempnode = tempnode ->next;
                }
            }
        }
    }
    else 
    printf("invalid positon");
}

void display()
{
    int count = 0;
    tempnode = firstnode;
    printf("display");
    while(tempnode != 0)
    {
        printf("%d",tempnode->value);
        count++;
        tempnode =tempnode->next;
    }
    printf("no of items: %d",count);
}
int count()
{
    int count = 0;
    tempnode = firstnode;
    while(tempnode !=0)
    {
        count++;
        tempnode =tempnode ->next;
    }
    printf("No of items : %d",count);
    return count;
}