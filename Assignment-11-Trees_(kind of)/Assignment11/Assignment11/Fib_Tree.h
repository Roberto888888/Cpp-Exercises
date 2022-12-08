#ifndef __Fib_Tree__
#define __Fib_Tree__



////////////////////////////////////////////////////////
//       Simple node of the tree structure
////////////////////////////////////////////////////////

struct Node {
	int val;
	Node * L;
	Node * R;
};



/////////////////////////////////////////////////////////
//                       Tree
/////////////////////////////////////////////////////////

class Tree {
private:
	Node * root;
	int  depth, size, leafs;
	void fib(int, Node *);
	void empty(Node *);
	void printNode(Node *);
public:
	Tree(void);
	~Tree(void);
	void printTree(void);
	void buildTree(int);
};


#endif