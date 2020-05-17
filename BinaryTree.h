#ifndef _TREE_H
#define _TREE_H

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

typedef struct NODE {
    struct NODE* left;
    struct NODE* right;
    int data;
} NODE;

NODE* createNode(int data);
#endif
