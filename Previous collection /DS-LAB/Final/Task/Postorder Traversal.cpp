#include<iostream>
#include<stack>
using namespace std;

struct node
{
	int info;
	node *left,*right;
};

node *newNode(int n)
{
	node *ptr=new node;
	ptr->info=n;
	ptr->left=ptr->right=NULL;
	return ptr;
}

node *insert(node* node,int info)
{
	if(node==NULL)
	{
		return newNode(info);
	}
	if(info < node->info)
	{
		node->left=insert(node->left,info);
	}
	else
	{
		node->right=insert(node->right,info);
	}
	return node;
}

void postorder(node *root)
{
	stack<node*> post;
	post.push(root);

	stack<int> pout;
	while(!post.empty())
	{
		node *curr=post.top();
		post.pop();
		pout.push(curr->info);

		if(curr->left)
		{
			post.push(curr->left);
		}
		if(curr->right)
		{
			post.push(curr->right);
		}
	}
	cout<<"PostOrder traversal :";
	while(!pout.empty())
	{
		cout<<pout.top()<<" ";
		pout.pop();
	}
}

int main()
{
	node* root=newNode(60);

	insert(root,50);
	insert(root,70);
	insert(root,40);
	insert(root,30);
	insert(root,80);
	insert(root,75);
	insert(root,65);
	insert(root,45);
	insert(root,55);
	insert(root,90);
	insert(root,67);

	postorder(root);

	cout<<endl;

	return 0;
}
