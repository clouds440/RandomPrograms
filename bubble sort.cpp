#include <iostream>
#include <fstream>
using namespace std;

main (){
	
	int roll[27], n = 0;
	
	ifstream File;
    File.open("rollnumbers.txt");
    
    while(!File.eof())
    {
        File >> roll[n];
        n++;
    }
    
	int size = 27;
    int i, j;
    
    for (i = 0; i < size - 1; i++){
    	for (j = 0; j < size - i - 1; j++){
    		if (roll[j] > roll[j + 1]){
    			swap(roll[j], roll[j + 1]);
			}
		}
	}
    
    for (n = 0; n < 27; n++){
    	cout<<roll[n]<<endl;
	}
}
