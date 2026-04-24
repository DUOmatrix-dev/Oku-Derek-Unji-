#include <iostream>
using namespace std;

// Function to draw the diamond

void drawDiamond(int size) {
	
    // Upper half of the diamond
    for (int i = 1; i <= size; i++) {
    	
        // Print spaces
        for (int j = i; j < size; j++) {
            cout << " ";
        }
        
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the diamond
    
    for (int i = size - 1; i >= 1; i--) {
    	
        // Print spaces
        for (int j = size; j > i; j--) {
            cout << " ";
        }
        
        // Print stars
        
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size; number of rows for the upper half: ";
    cin >> size;

    //  function call
    drawDiamond(size);

    return 0;
}
