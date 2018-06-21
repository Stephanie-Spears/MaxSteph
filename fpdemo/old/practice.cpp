#include "table.h"

int table::retrieveLargestH(node * n)
{
   if(!n) return -1;
   if(!n->right) return n->data;
   else return retrieveLargestH(n->right);
}

int table::retrieveLargest()
{
    return retrieveLargestH(root);
}

int table::inOrderSuccessorH(node * n)
{
    if(!n) return -1;
    if(!n->left) return n->data;
    else return inOrderSuccessorH(n->left);
}

int table::inOrderSuccessor()
{
    return inOrderSuccessorH(root->right);
}

