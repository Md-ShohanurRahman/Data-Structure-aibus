#include<iostream>
using namespace std;
/*Node structure*/
struct Node
{
	int data; //data part
	Node* next; //address part
};
Node* head; //pointer variable where the address of head will get stored
/*This function will create new node*/
Node* GetNewNode(int x)
{
	Node* NewNode = new Node(); //Creating a object for Node
	NewNode->data = x; //storing the data to the data part of new node
	NewNode->next = NULL; //storing null to the address part of new node. because we do not know the next node's address
	return NewNode; //returning the new node
}
/*Insert data in first position(head)*/
void InsertAtHead(int x)
{
	Node* NewNode = GetNewNode(x); //Creating a Node type pointer object for GetNewNode function to create new node
	NewNode->next = head; //storing the address of head to the address part of new node. This will make a link between nodes
	head = NewNode; //declaring the inserted value(NewNode) as head
}
/*Insert data in last position(tail)*/
void InserAtTail(int x)
{
	Node* NewNode = GetNewNode(x); //Creating a Node type pointer object for GetNewNode function to create new node
	if (head == NULL)
	{
		head = NewNode; //If head is empty then we will declare new node as head
		return;
	}
	Node* temp = head; //storing the address of head to temp in order to bypass data redundancy
	while (temp->next != NULL) //If the address part of head is not null. If there is another node exists after head
	{
		temp = temp->next; //storing the address part of head to temp. This will make the next node head
	}
	temp->next = NewNode; //storing the address part of head to new node which is inserted. This will insert the node at last position
}
/*Insert data in any position*/
void InserAtAnyPosition(int n, int x) //n is for position and x is for inserted value
{
	Node* NewNode = GetNewNode(x); //Creating a object for Node to create new node
	if (n == 1) //If insertion position is 1(head)
	{
		NewNode->next = head; //we will store the address of head to the address part of new node. This will make the new node head
		head = NewNode; //declaring new node as head
		return;
	}
	Node* temp = head; //pointer variable where the address of head will get stored
	for (int i = 1; i < n - 1; i++)
	{
		temp = temp->next; //storing the address part of head to temp. This will declare the next element of head as head and this will repeat
	}

	NewNode->next = temp->next; //
	temp->next = NewNode; //the address of newly inserted node will get stored to the address part of head
}
/*Delete element from any position*/
void Delete(int n)
{

	if (head == NULL) //If head is null or empty
	{
		cout << "Error: Nothing to delete " << endl;
		return;
	}
	Node* temp = head; //storing the address of head to temp to bypass the data redundancy
	if (n == 1) //If insertion position is 1(head)
	{
		head = temp->next; //next node of head will become head
		delete temp; //this will delete head
		return;
	}
	for (int i = 1; i < n - 1; i++)
	{
		temp = temp->next; //storing the address part of head to temp. This will declare the next element of head as head and this will repeat
	}
	Node* temp2 = temp->next; //storing the address part of head or next node address in temp2
	temp->next = temp2->next;
	delete temp2; //deleting next node of head
	return;
}
void DeleteTail()
{
	Node* temp = head; //storing the address of head to temp to bypass the data redundancy
	Node* temp2 = temp; //
	int i = 0;
	while (temp->next != NULL)//If there is other node after head
	{
		if (i > 0)
		{
			temp2 = temp2->next;
		}
		temp = temp->next;
		++i;
	}
	temp2->next = NULL;
	delete temp;

}
void Traverse()
{
	Node* temp = head;
	cout << "List is: ";
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;

	}
	cout << endl;
}

void Search(int x)
{
	Node* temp = head;
	while (temp != NULL)
	{
		if (temp->data == x)
		{
			cout << "Found" << endl;
			return;
		}
		temp = temp->next;

	}
	cout << "Not found" << endl;
}

int main()
{
	head = NULL;
	InsertAtHead(5);
	InsertAtHead(6);
	InsertAtHead(7);
	InsertAtHead(8);
	Traverse();

	InserAtTail(9);
	InserAtTail(10);
	Traverse();

	InserAtAnyPosition(2, 11);
	Traverse();
	Delete(5);
	Traverse();
	Search(10);
	Search(100);
	Delete(1);
	Traverse();
	DeleteTail();
	Traverse();
}

