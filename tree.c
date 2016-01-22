//
//  tree.c
//  day11
//
//  Created by tarena on 15/12/14.
//  Copyright © 2015年 EvilCompssion. All rights reserved.
//

#include "tree.h"
#include <stdlib.h>
void PreOrderTraverse(Tnode* T){
    if(T){
        printf("%d\t",T->data);
        PreOrderTraverse(T->lchild);
        PreOrderTraverse(T->rchild);
    }
}
void MidOrderTraverse(Tnode* T)
{
    if (T) {
        MidOrderTraverse(T->lchild);
        printf("%d\t",T->data);
        MidOrderTraverse(T->rchild);
    }
}
void ReOrderTraverse(Tnode* T)
{
    if (T) {
        ReOrderTraverse(T->lchild);
        ReOrderTraverse(T->rchild);
        printf("%d\t",T->data);
    }
}
void travel(Tree *pt)
{
    printf("有序二叉树的元素有：");
    PreOrderTraverse(pt->root);
    printf("\n\n\n");
    MidOrderTraverse(pt->root);
     printf("\n\n\n");
    ReOrderTraverse(pt->root);
     printf("\n\n\n");
    printf("\n");
}



void insertTree(Tnode** ppRoot,Tnode* pn)//插入新节点的递归函数
{
    if (*ppRoot==NULL) {//如果为空直接插入
        *ppRoot=pn;
        return;
    }
    if ((*pn).data<(*ppRoot)->data) {
        insertTree(&(*ppRoot)->lchild, pn);
    }else{
        insertTree(&(*ppRoot)->rchild, pn);
    }
}


void insert_data(Tree* pt,int data)
{
    Tnode* pn=(Tnode*)malloc(sizeof(Tnode));
    if (NULL==pn) {
        printf("creat node is failure!\n");
        return;
    }
    pn->data=data;
    pn->lchild=NULL;
    pn->rchild=NULL;
    //调用递归函数
    insertTree(&pt->root,pn);
    ++pt->cnt;
    
}
