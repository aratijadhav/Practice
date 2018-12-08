#include "header.h"

int main(){
    Node *root = NULL;
    root = insertNode(root,100);
    root = insertNode(root,75);
    root = insertNode(root,125);
    root = insertNode(root,50);
    root = insertNode(root,25);
    root = insertNode(root,150);
    root = insertNode(root,160);
    root = insertNode(root,110);
    root = insertNode(root,80);
    root = insertNode(root,155);
    root = insertNode(root,180);

    printf("\n");
    preOrder(root);
    printf("\n");
    inOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n");

    root = deleteNode(root,75);
    inOrder(root);

    int h = HeightOfTree(root);
    printf("\n%d",h);

    printf("\n");

    LevelWise(root);
    printf("\n");

    leftView(root);

    printBoundary(root);
    return 0;
}