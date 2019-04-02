#include <stdlib.h>
#include "node.h"

struct NodeImplementation{
  int element;
  Node key;
  Node right;
  Node left;
};

int 	get_key (Node node){
  return node->key->element;
}

Node 	get_left (Node node){
  return node->left;
}

void 	set_left (Node node, Node left_node){
  node->left= left_node;
}

Node 	get_right (Node node){
  return node->right;
}

void 	set_right (Node node, Node right_node){
  node->right=right_node;
}

int 	get_height (Node node){
return 0;
}

void 	set_height (Node node, int height){

}

Node 	create_node (int key){
  Node newNode=(Node)malloc(sizeof(struct NodeImplementation));
  newNode->key->element=key;
  newNode->left=0;
  newNode->right=0;
}
