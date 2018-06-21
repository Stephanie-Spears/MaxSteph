#include "table.h"

//duplicate all unique nodes, return the value of the average of the
//duplicated nodes as a float. 
//

float table::duplicate_unique()
{
    
}

float table::duplicate_unique(node *& n)
{

}

node * find_successor(node *& n)
{
    if(!n) return NULL;
    if(!n->left) return n;
    else if(n->left) return find_successor(n->left);
}

