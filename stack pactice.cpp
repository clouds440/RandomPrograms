#include<iostream>
using namespace std;

class stack{
	public:
		int *arr;
		int size = 27;
		int top = -1;
		
		stack(int size){
			arr = new int[size];
		};
		
		void push(int value)
		{
		
			if(top == size)
			{
				cout<<"Can't insert the value. Stack overflow!\n";
			}
			else
			{
				arr[++top] = value;
				cout<<"Value inserted!\n";
				
			}
		}
	
		void pop(){
				
				if(top == -1){
					cout<<"The value was not deleted. Stack underflow!\n";
				}
				else{
					cout<<"Value deleted!\n"<<arr[top];
					top--;
				}
			}
		
};


main () {
	
	stack sta(6);
	
	int check, value;
	
	while(true){
		
	cout<<"1 for pushing value into the stack \n2 for deleting current TOP value \n3 for peeking the TOP value: ";
	cin>>check;
	
	
	if (check == 1){
		cout<<"Enter the value you want to push into the stack: ";
		cin>>value;
		sta.push(value);
	}
	else if (check == 2){
		sta.pop();
	}
	else if (check == 3){
		cout<<"The current index of stack is: "<<sta.top<<". And the value at this index is: "<<sta.arr[sta.top]<<endl;;
	}
	else{
		cout<<"\nCouldn't indentify the inserted option. Please try again:\n";
		return main();
	}
}
	
}
