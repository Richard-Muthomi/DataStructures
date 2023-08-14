#include <iostream>
using namespace std;

// Data structure to store a Binary Search Tree node
struct Node
{
	int data;
	Node *left, *right;
};

// Recursive function to insert a key into BST
Node* insert(Node* root, int key)
{
	// if the root is null, create a new node and return it
	if (root == NULL)
	{
		Node* node = new Node;
		node->data = key;
		node->left = node->right = NULL;

		return node;
	}	
// if given key is less than the root node, recur for left subtree
	if (key < root->data)
		root->left = insert(root->left, key);

	// if given key is more than the root node, recur for right subtree
	else
		root->right = insert(root->right, key);

	return root;
}

// Function to perform tree traversals 
void inorder(Node* root)
{
	if (root == NULL)
		return;

	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

 void preorder(Node* root) {
    if (root == NULL) {
      return;
    }
    cout<<root->data<<"  ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if (root == NULL) {
      return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"  ";
}
void search (node *root,int item){
	if(item==root->data){
		cout<<item<<"found";
	}
	else if(item<root->data){
		search(root->left,item);
	}
	else{
		search(root->right,item);
	}
}


int main()
{
	Node* root = NULL;
	int n, i, key;
	cout<<"how many values ";
	cin>>n;
	
	cout<<"enter values now ";
	for(int i=0; i<n; i++)
	{
		cin>>key;
	
		root = insert(root, key);
	}
	cout<<"\ninorder Traversal ";
	inorder(root);
	cout<<"\npreorder Traversal ";
	preorder(root);
	cout<<"\npostorder Traversal ";
	postorder(root);
	cout<<"Enter item to search";
	cin>>item;
	search(root,item);
	
	

	return 0;
}

