#include<iostream>
using namespace std;

class stack {
	private:
		int data[5];
		int top;
		
		public:
			stack(){
				top = -1;
			}
			void push(int value){
				if (top == 4){
					cout<<"Stack overflow!";
				}
				else{
					top++;
					data[top] = value;
					cout<<"Value inserted!\n";
					cout<<"Data = "<<data[top];
				}
			}
};

main (){
	stack obj;
	int value;
	cout<<"Enter value: ";
	cin>>value;
	
	obj.push(value);
}
