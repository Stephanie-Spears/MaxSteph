//table.h
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

struct node
{
    int data;   //some questions use char * data;
    node * left;
    node * right;
};

class table
{
    public:
    	//These functions are supplied already
    	table();			//supplied
    	~table();			//supplied
        void build(); 		//supplied
        void display(); 	//supplied


/* ************** PLACE YOUR PUBLIC PROTOTYPE HERE ***************** */
/*
        int retrieveLargestH(node *&);
        int retrieveLargest();
    
        int inOrderSuccessorH(node *&);
        int inOrderSuccessor();

        int findTreeSumH(node *&);
        int findTreeSum();

        void removeSmallestH(node *&);
        void removeSmallest();

        void removeLargestH(node *&);
        void removeLargest();

        void trimLeavesH(node *&);
        void trimLeaves();

        bool removeSmallestWithChildH(node *&);
        void removeSmallestWithChild();

        void removeAllOneChildH(node *&);
        void removeAllOneChild();

        bool  copyH(const node * src, node *& dest);
        bool  copy(table & to_copy);

        bool copyAllButLargestH(const node *, node *&, const node *);
        bool copyAllButLargest(table& newTable);

        const node * findSuccessor(const node *);
        void copyAllButRootH(const node *, node *&, const node *);
        void copyAllButRoot(table&);

        int retrieveLargestH(node *);
        int retrieveLargest();

        int inOrderSuccessorH(node *);
        int inOrderSuccessor();

*/

        float duplicate_unique();
        float duplicate_unique(node *&);
        node * find_successor(node *&);


 	private:
        //node * returnOnlyChild(node *);
 		node * root;
       // const node * findLargest(const node *);

/* ************** PLACE YOUR PRIVATE PROTOTYPE HERE ***************** */

};
  

