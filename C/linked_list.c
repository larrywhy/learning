#include<stdio.h>
#include<stdlib.h>
//#define DEBUG

struct cont{
    int num;
    struct cont * next;
};

int isNULL(struct cont *);
struct cont * addNode(struct cont *, int);/* add tail node */
struct cont * deleteNode(struct cont *);/* delete tail node */
struct cont * generateNode(int);
void showNode(struct cont *);
int showNodeNum(struct cont *);


int main()
{
    //struct cont * head = NULL;
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

    //showNode(list);
    list = addNode(list,5);    /* first node */
    showNode(list);
    list = deleteNode(list);
    showNode(list);
    printf("list number is %d\n",showNodeNum(list));

    
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

struct cont * addNode(struct cont * list, int newNum)
{
    /* if first node  is NULL.*/
    if(isNULL(list)){
        
        return generateNode(newNum);
    }
    else{
        struct cont * head = list; 
        // visit to end note
        while(list->next != NULL){
            list = list->next;
        }
        list->next = generateNode(newNum);
        return head;
    }
}

struct cont * deleteNode(struct cont * dlist){
    if(isNULL(dlist)){
        printf("this list is NULL , can not delete anymore!\n");
        return NULL;
    }
    else{     
        /* delete only one node */      
        if(dlist->next == NULL){
            free(dlist);
            return NULL;
        }
        else{
            struct cont * preNode; /* keep the last second node */
            struct cont * headNode = dlist;/* keep head list */               
            while(dlist->next != NULL){
                preNode = dlist;
                dlist = dlist->next;
            }
            preNode->next = NULL;
            free(dlist);
            return headNode;
        }        
    }
}

struct cont * generateNode(int newNum){
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
