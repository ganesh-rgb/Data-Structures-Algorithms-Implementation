// C++ implementation of Output Restricted
// Queue using circular array

#include <iostream>
using namespace std;

// Maximum size of array or Output
// Restricted Queue
#define MAX 100

// A structure to represent a Output
// Restricted Queue
class Deque {
	int arr[MAX];
	int front;
	int rear;
	int size;

public:
	Deque(int size)
	{
		front = -1;
		rear = 0;
		this->size = size;
	}

	// Operations on Output Restricted
	// Queue
	void insertfront(int key);
	void insertrear(int key);
	void deletefront();
	bool isFull();
	bool isEmpty();
	int getFront();
	int getRear();
};

// Checks whether Output Restricted
// Queue is full or not.
bool Deque::isFull()
{
	return ((front == 0 && rear == size - 1)
			|| front == rear + 1);
}

// Checks whether Output Restricted
// Queue is empty or not.
bool Deque::isEmpty() { return (front == -1); }

// Function to insert element at front
// end of Output Restricted Queue
void Deque::insertfront(int key)
{

	// Check whether Deque if full or not
	if (isFull()) {
		cout << "Overflow\n"
			<< endl;
		return;
	}

	// If queue is initially empty
	if (front == -1) {
		front = 0;
		rear = 0;
	}

	// Front is at first position of queue
	else if (front == 0)
		front = size - 1;

	else

		// Decrement front end by '1'
		front = front - 1;

	// Insert current element into Deque
	arr[front] = key;
}

// Function to insert element at rear end
// of Output Restricted Queue
void Deque::insertrear(int key)
{
	if (isFull()) {
		cout << " Overflow\n " << endl;
		return;
	}

	// If queue is initially empty
	if (front == -1) {
		front = 0;
		rear = 0;
	}

	// Rear is at last position of queue
	else if (rear == size - 1)
		rear = 0;

	// Increment rear end by '1'
	else
		rear = rear + 1;

	// Insert current element into Deque
	arr[rear] = key;
}

// Deletes element at front end of
// Output Restricted Queue
void Deque::deletefront()
{

	// Check whether Deque
	// is empty or not
	if (isEmpty()) {
		cout << "Queue Underflow\n"
			<< endl;
		return;
	}

	// Deque has only one element
	if (front == rear) {
		front = -1;
		rear = -1;
	}
	else
		// Back to initial position
		if (front == size - 1)
		front = 0;

	else

		// Increment front by '1' to remove
		// current front value from Deque
		front = front + 1;
}

// Returns front element of Output
// Restricted Queue
int Deque::getFront()
{

	// Check whether Deque
	// is empty or not
	if (isEmpty()) {
		cout << " Underflow\n"
			<< endl;
		return -1;
	}
	return arr[front];
}

// Function to return rear element of
// Output Restricted Queue
int Deque::getRear()
{

	// Check whether Deque
	// is empty or not
	if (isEmpty() || rear < 0) {
		cout << " Underflow\n"
			<< endl;
		return -1;
	}
	return arr[rear];
}

// Driver code
int main()
{
	Deque dq(5);

	// Function calls
	cout << "Inserted element at rear end : 10 \n";
	dq.insertrear(10);

	cout << "Inserted element at rear end : 15 \n";
	dq.insertrear(15);

	cout << "Inserted element at front end : 5 \n";
	dq.insertfront(5);

	cout << "Get rear element : "
		<< " " << dq.getRear() << endl;

	cout << "Get front element : " << dq.getFront() << endl;

	dq.deletefront();

	cout << "After delete front element new "
		<< "front become : " << dq.getFront() << endl;
	return 0;
}
