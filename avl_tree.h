#ifndef BALANCEDTREE_AVL_TREE_H
#define BALANCEDTREE_AVL_TREE_H

#include "node.h"
int 	max (int n1, int n2);
Node 	rotate_right (Node node);
Node 	rotate_left (Node node);
int 	get_balance (Node node);
Node 	insert (Node node, int key);
void 	print_postorder (Node node);
void 	unbalanced_insert (Node root, int key);
#endif //BALANCEDTREE_AVL_TREE_H
