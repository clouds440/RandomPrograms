#include<iostream>
using namespace std;

class Node
{
	public:
		int ROLL;
		
		Node *Link;
};

class LinkedList
{
	private:
		Node *head, *tail, *current, *temp;
		
	public:
		LinkedList()
		{
			head = NULL;
		}
		
	void InsertAtHead(int roll)
	{
		if (head == NULL)
		{
			head = new Node;
			head->ROLL = roll;
			
			head->Link = NULL;
			tail = head;
		}
		
		else
		{
			temp = new Node;
			temp->ROLL = roll;
			
			temp->Link = head;
			head = temp;
		}
	}
	
	void InsertAtMid(int roll, int location)
	{	
		current = head;
			
		temp = new Node;
		
		while(current != NULL)
		{
			if (location == current->ROLL)
			{
				temp->Link = current->Link;
				current->Link = temp;
				
				cout << "22316 inserted at 3rd location!\n\n";
			}
			
			current = current->Link;
		}
		
		return;
	}
	
	void InsertAtTail(int roll)
	{
		
		if (head == NULL)
		{
			InsertAtHead(roll);
			return;
		}
		
		temp = new Node;
		temp->ROLL = roll;
			
		temp->Link = NULL;
		tail->Link = temp;
		tail = temp;
		
		if (head == NULL)
		{
			head = tail;
		}
	}
	
	void Display()
	{
		current = head;
		
		cout << "\tROLL" << endl;
		
		while(current != NULL)
		{
			cout << "\t" << current->ROLL << "\n";
			
			current = current->Link;
		}
		
		cout << endl;
	}
	
	void Search(int roll)
	{
		bool found = false;
		current = head;
		int location = 1;
		
		cout << endl;
		
		while (current != NULL)
		{
			if (roll == current->ROLL)
			{
				found = true;
				
				cout << "Roll found at " << location << "\n" << current->ROLL << "\n\n";
			}
			
			current = current->Link;
			location += 1;
		}
		
		if (!found)
		{
			cout << "ROLL NO. not found!\n";
		}
	}
};

main()
{
	LinkedList list;
	int select, roll;
	
	list.InsertAtHead(21222);
	list.InsertAtTail(21223);
	list.InsertAtTail(21224);
	list.InsertAtTail(21225);
	list.InsertAtTail(21227);
	list.InsertAtTail(21228);
	list.InsertAtTail(21231);
	list.InsertAtTail(21235);
	list.InsertAtTail(21236);
	list.InsertAtTail(21237);
	list.InsertAtTail(21238);
	list.InsertAtTail(21239);
	list.InsertAtTail(21240);
	list.InsertAtTail(21242);
	list.InsertAtTail(21245);
	list.InsertAtTail(21247);
	list.InsertAtTail(21250);
	list.InsertAtTail(21251);
	list.InsertAtTail(21252);
	list.InsertAtTail(21257);
	list.InsertAtTail(21258);
	list.InsertAtTail(21263);
	list.InsertAtTail(21112);
	list.InsertAtTail(21094);
	list.InsertAtTail(21126);
	list.InsertAtTail(21131);
	list.InsertAtTail(21102);
	
	list.Display();
	
	list.InsertAtMid(22316, 21223);
	
	cout << "Updated Linked List\n";
	
	list.Display();
	
	cout << "WELCOME TO STUDENT DATA SYSTEM!\n\n";
	
	while (true)
	{
		cout << "Press 1 to search for a record. \n";
		cout << "Press 2 to display all records. \n";
		cin >> select;
		
		while (select != 1 && select != 2)
		{
			cout << "Wrong selection. Select again: ";
			cin >> select;
		}
		
		if (select == 1)
		{
			cout << "Enter ROLL NO. of the sutdent to search: ";
			cin >> roll;
			
			list.Search(roll);
		}
		
		else if (select == 2)
		{
			list.Display();
		}
	}
}
