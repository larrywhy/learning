#include<stdio.h>
#include<stdlib.h>
//#define DEBUG

struct cont{
    int num;
    struct cont * next;
};

int isNULL(struct cont *);
int addNode(struct cont *, int);/* add tail node */
struct cont * generateNode(int);
void showNode(struct cont *);
int showNodeNum(struct cont *);


int main()
{
    struct cont * head = NULL;
    struct cont * list = NULL;
    
#ifdef DEBUG     
    struct cont * node = NULL;
    isNULL(node);
    
    /* allocate memory to node */
    node = (struct cont *)malloc(sizeof(struct cont));
    
    isNULL(node);
    /* assign value to node */
    node->num = 3;    
    printf("%d\n",node->num);
        
#endif
    
    list = (struct cont *)malloc(sizeof(struct cont));
    head = list; /* node_head point to list's head node */
    //list->num = 1;/* initialize */
    //list->next = NULL; /* create first node, the next node must point to NULL */
    list = generateNode(0);    /* first node */
    addNode(list,3);
    addNode(list,5);
    
    //isNULL(list);    
    showNode(list);
    printf("number of list node is:%d\n",showNodeNum(list));
    
    
    system("pause");
    return 0;
}

/* test node is null or not. */
int isNULL(struct cont * testNode)
{
    if(testNode == NULL){
        //printf("node is null!\n");
        return 1;
    }
    else{
        //printf("node is not null!\n");
        return 0;
    }
}

int addNode(struct cont * list, int newNum)
{
    if(isNULL(list)){
        // addNum fail , return 0
        return 0;
    }
    else{
        // visit to end note
        while(list->next != NULL){
            list = list->next;
        }
        list->next = generateNode(newNum);
        return 1;
    }
}

struct cont * generateNode(int newNum)
{
    struct cont * newNode = (struct cont *)malloc(sizeof(struct cont));
    newNode->num = newNum;
    newNode->next = NULL;    
    return newNode;
}

int showNodeNum(struct cont * list){
    int count = 0;
    if(list == NULL)
        return 0;
    else{
        while(list != NULL){
            count++;
            list = list->next;
        }
        return count;
    }     
}

void showNode(struct cont * list){
    if(list == NULL)
        printf("list is null!\n");
    else{
        printf("show list:");
        while(list != NULL){
            printf("%d -> ",list->num);
            list = list->next;
        }
        printf("NULL\n");
    }     
}
