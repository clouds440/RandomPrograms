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
    
    int i, step;
    
    for (step = 0; step < n - 1; step++) {
    int min_idx = step;
    for (i = step + 1; i < n; i++) {

      if (roll[i] < roll[min_idx])
        min_idx = i;
    }
    
    swap(roll[min_idx], roll[step]);
  }
    
    for (i = 0; i < 27; i++){
    	cout<<roll[i]<<endl;
	}
}
