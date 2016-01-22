//
//  main.c
//  day11
//
//  Created by tarena on 15/12/14.
//  Copyright © 2015年 EvilCompssion. All rights reserved.
//

#include <stdio.h>
#include "six_sort_algorithm.h"
#include "tree.h"
#include <stdlib.h>

typedef struct Lnode
{
    int data;
    struct Lnode* next;
}Lnode;
typedef struct
{
    Lnode* head;
    Lnode* tail;
    int cnt;
    
}LinkList;

void insert(LinkList *link,int data)
{

    Lnode* pt=(Lnode*)malloc(sizeof(Lnode));
    if (NULL==pt) {
        printf("the linklist creat is failure!");
        return;
    }
    pt->data=data;
    pt->next=NULL;
    if (link->cnt==0) {
        link->tail=link->head=pt;
       
    }
    else{
        link->tail->next=pt;
        link->tail=pt;
        
    }
     ++link->cnt;
}

void trave(LinkList *link)
{
    Lnode* p=link->head;
    while(p!=NULL) {
        printf("%d\t",p->data);
        p=p->next;
    }
}

int main() {
    
    LinkList link;
    link.head=NULL;
    link.tail=NULL;
    link.cnt=0;
    insert(&link, 10);
    insert(&link, 20);
    insert(&link, 40);
    insert(&link, 30);
    insert(&link, 670);
    insert(&link, 33);
    insert(&link, 109);
    insert(&link, 26);
    insert(&link, 160);
    trave(&link);
    printf("%d\n",link.cnt);
//    Tree tree;
//    tree.root=NULL;
//    tree.cnt=0;
//    insert_data(&tree, 50);
//    insert_data(&tree, 20);
//    insert_data(&tree, 40);
//    insert_data(&tree, 10);
//    insert_data(&tree, 70);
//    insert_data(&tree, 30);
//    insert_data(&tree, 25);
//    insert_data(&tree, 55);
//    insert_data(&tree, 80);
//    travel(&tree);
//    int num[10]={12,35,34,55,21,17,78,94,53,28};
//    bubbleSort(num,10);
//    insertSort(num,10);
//    QickSort(num, 0, 9);
//    SimpleSort(num,10);
//    Heapsort(num, 9);
//    ShellSort(num, 10);
//    for (int i=0; i<10; i++) {
//        printf("a[%d]=%d\t",i,num[i]);
//    }
    return 0;
}
