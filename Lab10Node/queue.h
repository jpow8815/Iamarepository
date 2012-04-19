#include <iostream>

using namespace std;

class node {
	
	friend class queue;

	private: 
		char data;
            	node* next;

};

class queue {
	public:
	queue();
	~queue();
	bool enqueue(char);
	bool dequeue(char&);
	bool empty() const;
	bool full() const;
	bool clear();
	
	bool operator == (const queue&) const;
	queue& operator = (const queue&);
	friend ostream& operator << (ostream&, const queue&);

	private:

	node* front;
	node* rear;
};

