#include<iostream>
using namespace std;

struct Node {
	char data;
	struct Node *left;
	struct Node *right;
};

//Function to visit nodes in Preorder
void Preorder(struct Node *root) {
	// base condition for recursion
	// if tree/sub-tree is empty, return and exit
	if(root == NULL) return;

	printf("%c ",root->data); // Print data
	Preorder(root->left);     // Visit left subtree
	Preorder(root->right);    // Visit right subtree
}

//Function to visit nodes in Inorder
void Inorder(Node *root) {
	if(root == NULL) return;

	Inorder(root->left);       //Visit left subtree
	printf("%c ",root->data);  //Print data
	Inorder(root->right);      // Visit right subtree
}

//Function to visit nodes in Postorder
void Postorder(Node *root) {
	if(root == NULL) return;

	Postorder(root->left);    // Visit left subtree
	Postorder(root->right);   // Visit right subtree
	printf("%c ",root->data); // Print data
}

// Function to Insert Node in a Binary Search Tree
Node* Insert(Node *root,char data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left,data);
	else
		root->right = Insert(root->right,data);
	return root;
}

int main() {
	Node* root = NULL;
	root = Insert(root,'M'); root = Insert(root,'B');
	root = Insert(root,'Q'); root = Insert(root,'Z');
	root = Insert(root,'A'); root = Insert(root,'C');
	int choice;
	cout<<"Inserted Values: A B C M Q Z";
	cout<<"\n1. Preorder\n2. Inorder\n3. Postorder\n4. Exit";
	cout<<"\n\nEnter your choice: ";
	cin>>choice;

	switch(choice) {
      case 1 :
          {
              //Print Nodes in Preorder.
	          cout<<"Preorder:  ";
	          Preorder(root);
	          cout<<"\n";
          }

         break;
      case 2 :
          {
              //Print Nodes in Inorder
	          cout<<"Inorder:   ";
	          Inorder(root);
	          cout<<"\n";
          }

              break;
      case 3 :
         {
             //Print Nodes in Postorder
	          cout<<"Postorder: ";
	          Postorder(root);
	          cout<<"\n";
         }
              break;
      case 4 :
         {

            cout << "*********** EXIT ***********" << endl;
            exit(0);

         }
         break;
      default :
         cout << "Invalid choice" << endl;
   }

}
