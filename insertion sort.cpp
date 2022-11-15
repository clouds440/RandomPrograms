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
    
    int i, j, key;
    
    for (i = 1; i < n; i++)
    { 
        key = roll[i]; 
        j = i - 1; 
  
        while (j >= 0 && roll[j] > key)
        {
            roll[j + 1] = roll[j]; 
            j -= 1; 
        } 
        roll[j + 1] = key; 
    } 
    
    for (i = 0; i < 27; i++){
    	cout<<roll[i]<<endl;
	}
}
