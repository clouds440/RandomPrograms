#include<iostream>
using namespace std;

class Node
{
	public:
		string CAPITAL;
		
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
		
	void InsertAtHead(string capital)
	{
		if (head == NULL)
		{
			head = new Node;
			head->CAPITAL = capital;
			
			head->Link = NULL;
			tail = head;
		}
		
		else
		{
			temp = new Node;
			temp->CAPITAL = capital;
			
			temp->Link = head;
			head = temp;
		}
	}
	
	void InsertAtAlphabetical(string capital)
	{	
		current = head;
		Node* prev = NULL;
		
		temp = new Node;
		temp->CAPITAL = capital;
		
		while (current != NULL)
		{
			if (capital[0] < current->CAPITAL[0])
			{
				if (current == head)
					{
						temp->Link = head;
						head = temp;
						
						cout << "Gilgit inserted at its alphabetical position!\n";
						return;
					}
					
					else
					{
						temp->Link = current;
						prev->Link = temp;
						
						cout << "Gilgit inserted at its alphabetical position!\n";
						return;
					}
			}
			
			prev = current;
			current = current->Link;
		}
	}
	
	void InsertAtTail(string capital)
	{
		
		if (head == NULL)
		{
			InsertAtHead(capital);
			return;
		}
		
		temp = new Node;
		temp->CAPITAL = capital;
			
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
		
		cout << "\tCAPITALS" << endl << endl;
		
		while(current != NULL)
		{
			cout << "\t" << current->CAPITAL << "\n";
			
			current = current->Link;
		}
		
		cout << endl;
	}
};

main()
{
	LinkedList list;
	
	list.InsertAtHead("Quetta");
	list.InsertAtTail("Lahore");
	list.InsertAtTail("Peshawar");
	list.InsertAtTail("Karachi");
	
	list.Display();
	
	list.InsertAtAlphabetical("Gilgit");
	
	cout << "Updated linked list: \n\n";
	
	list.Display();
	
}
