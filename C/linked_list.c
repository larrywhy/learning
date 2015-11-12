#include<stdio.h>
#include<stdlib.h>
//#define DEBUG

struct cont{
    int num;
    struct cont * next;
};

int isNULL(struct cont *);
int addNode(struct cont *, int);

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
    list->next = NULL; /* create first node, the next node must point to NULL */
        
    isNULL(list);    


    system("pause");
    return 0;
}

/* test node is null or not. */
int isNULL(struct cont * testNode)
{
    if(testNode == NULL){
        printf("node is null!\n");
        return 1;
    }
    else{
        printf("node is not null!\n");
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
        // visit to end node
    }
}


