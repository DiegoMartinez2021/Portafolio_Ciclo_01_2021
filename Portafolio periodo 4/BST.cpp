#include <iostream>
#include <cstdint>
using namespace std;

struct node{
	int key_value;
	node *left;
	node *right;
};

class btree{
	public:
		btree();
		~btree();
		void insert(int key);
		node *search(int key);
		void destroy_tree();
		node *get_root();
	private:
		void destroy_tree(node *leaf);
		void insert(int key, node *leaf);
		node *search(int key, node *leaf);
		node *root;
};

btree::btree(){
	root = NULL;
}

btree::~btree(){
	destroy_tree();
}

void btree::destroy_tree(node *leaf){
	if(leaf!=NULL){
		destroy_tree(leaf->left);
		destroy_tree(leaf->right);
		delete leaf;
	}
}

void btree::insert(int key, node *leaf){
	if(key < leaf->key_value){
		if(leaf->left!=NULL){
			insert(key, leaf->left);
	} else {
		leaf->left = new node;
		leaf->left->key_value;
		leaf->left->left=NULL;
		leaf->left->right=NULL;
	}
} else if(key >= leaf->key_value){
	if(leaf->right!=NULL){
		insert(key, leaf->right);
	} else {
	leaf->right = new node;
	leaf->right->key_value;
	leaf->right->left = NULL;  // Define que el nuevo hijo a la izquierda sea nulo
	leaf->right->right = NULL; // Define que el nuevo hijo a la derecha sea nulo
		}
	}	
}

node *btree::search(int key, node *leaf){
	if(leaf!=NULL){
		if(key==leaf->key_value){
			return leaf;
		}
		if(key < leaf->key_value){
			return search(key, leaf->left);
		} else {
			return search(key, leaf->right);
		}
	} else {
		return NULL;
	}
}

void btree::insert(int key){
	if(root!=NULL){
		insert(key, root);
	} else {
		root = new node;
		root->key_value = key;
		root->left = NULL;
		root->right = NULL;
	}
}

node *btree::search(int key){
	return search(key, root);
}

void btree::destroy_tree(){
	destroy_tree(root);
}

node *btree::get_root(){
	return root;
}


int main(){
	
	btree tree;
	tree.insert(10);
	tree.insert(8);
	tree.insert(30);
	cout << "          ("<< tree.get_root()->key_value << ")  \n";
	cout << "          /   \\   \n";
	cout << " ("<< tree.get_root()->left->key_value << ")    (" << tree.get_root()->right->key_value << ")   \n" ;  
	
	return 0;
}

































