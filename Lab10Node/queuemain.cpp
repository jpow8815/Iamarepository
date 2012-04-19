#include "queue.h"
#include <iostream>

using namespace std;

int main() {

	queue queue1;
	char userInput;
	char charVal;
	char removedVal;
	
	while( userInput != 'Q' && userInput != 'q' ) {
		cout << "Please enter a command: " << endl;
		cout << "<A>dd new data" << endl;
		cout << "<R>emove data" << endl;
		cout << "Test <F>ull" << endl;
		cout << "Test <E>mpty" << endl;
		cout << "<Q>uit" << endl;
		cin >> userInput;

	
		switch(userInput) {
			case 'A': case 'a':
				cout << endl <<  "Enter the character value to be placed in your queue: ";
				cin >> charVal;
				queue1.enqueue(charVal);
				cout << queue1 << endl;
				break;

			case 'R': case 'r':
				queue1.dequeue(removedVal);
				cout << "dequeue'd: " << removedVal << endl;
				cout << queue1 << endl;
				break;

			case 'F': case 'f':
				queue1.full();
				break;
	
			case 'E': case 'e':
				queue1.empty();
				break;
		}
	}

return 0;
}
