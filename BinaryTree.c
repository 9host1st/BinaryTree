#include "BinaryTree.h"

NODE* createNode(int newData) {
    NODE* newNode = (NODE*)malloc(sizeof(NODE));
    newNode -> left = NULL;
    newNode -> right = NULL;
    newNode -> data = newData;

    return newNode;
}

void preOrder(NODE* TREE) {
    if(TREE == NULL) return;
    printf("%d -> ", TREE -> data);
    preOrder(TREE -> left);
    preOrder(TREE -> right);
}

void inOrder(NODE* TREE) {
    if(TREE == NULL) return;
    inOrder(TREE -> left);
    printf("%d -> ", TREE -> data);
    inOrder(TREE -> right);
}

void postOrder(NODE* TREE) {
    if(TREE == NULL) return;
    postOrder(TREE -> left);
    postOrder(TREE -> right);
    printf("%d -> ", TREE -> data);
}
int main() {
    NODE* A = createNode(1);
    NODE* B = createNode(2);
    NODE* C = createNode(3);
    NODE* D = createNode(4);
    NODE* E = createNode(5);    
    A -> right = E;
    A -> left = B;
    B -> left = C;
    B -> right = D;
    cout << "preOrder\n";
    preOrder(A);
    cout << "\ninOrder\n";
    inOrder(A);
    cout << "\npostOrder\n";
    postOrder(A);
}
