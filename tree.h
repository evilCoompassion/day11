//
//  tree.h
//  day11
//
//  Created by tarena on 15/12/14.
//  Copyright © 2015年 EvilCompssion. All rights reserved.
//

#ifndef tree_h
#define tree_h

#include <stdio.h>
typedef struct Tnode
{
    int data;
    struct Tnode* lchild;
    struct Tnode* rchild;
}Tnode;

typedef struct
{
    Tnode* root;
    int cnt;
    
}Tree;
void PreOrderTraverse(Tnode* T);
void MidOrderTraverse(Tnode* T);
void ReOrderTraverse(Tnode* T);
void travel(Tree *pt);
void insertTree(Tnode** ppRoot,Tnode* pn);//插入新节点的递归函数
void insert_data(Tree* pt,int data);




#endif /* tree_h */
