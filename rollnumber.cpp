
#include <iostream>
using namespace std;

main (){
	int array[27], i;
	
	for (i = 0; i < 27; i++){
	cout<<"Enter roll number of student \""<<i+1<<"\": ";
	cin>>array[i];
	}
	cout<<endl;
	
	for (i = 0; i < 27;	i++){
		cout<<"Roll number of student "<<i+1<<" is: "<<array[i];
		cout<<endl;
	}
}
