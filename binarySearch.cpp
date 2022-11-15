#include <iostream>
using namespace std;

main (){
	int array[27], i;
	int roll = 21235, index = 0;
	
	for (i = 0; i < 27; i++){
	cout<<"Enter roll number of student \""<<i+1<<"\": ";
	cin>>array[i];
	}
	cout<<endl;
	
	int first = 0, last = 27;
	int mid = (first + last)/2;
	
	while (first <= last){
		int mid = first + (last - first)/ 2;
		
		if (array[mid] == roll){
			index = mid;
			break;
		}

    	else if (array[mid] < roll){
      			first = mid + 1;
      	}

    	else{
      		last = mid - 1;
			}
	}
	if (index > 0){
	cout<<"Your roll number is at index \""<<index<<"\"";
	}
	else {
		cout<<"Your roll number was not found.";
	}
}
