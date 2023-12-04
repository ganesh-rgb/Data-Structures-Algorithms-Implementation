// C++ implementation of Input Restricted
// Queue using circular array

#include <iostream>
using namespace std;

// Maximum size of array or Input
// Restricted Queue
#define MAX 100

// A structure to represent a Input
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

	// Operations on Input
	// Restricted Queue
	void insertrear(int key);
	void deletefront();
	void deleterear();
	bool isFull();
	bool isEmpty();
	int getFront();
	int getRear();
};

// Checks whether Input Restricted
// Queue is full or not.
bool Deque::isFull()
{
	return ((front == 0 && rear == size - 1)
			|| front == rear + 1);
}

// Checks whether Input Restricted
// Queue is empty or not.
bool Deque::isEmpty() { return (front == -1); }

// function to inset element at rear end
// of Input Restricted Queue
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
// Input Restricted Queue
void Deque::deletefront()
{

	// Check whether Deque is empty
	// or not
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

// Delete element at rear end of
// Input Restricted Queue
void Deque::deleterear()
{
	if (isEmpty()) {
		cout << " Underflow\n"
			<< endl;
		return;
	}

	// Deque has only one element
	if (front == rear) {
		front = -1;
		rear = -1;
	}
	else if (rear == 0)
		rear = size - 1;
	else
		rear = rear - 1;
}

// Returns front element of Input
// Restricted Queue
int Deque::getFront()
{

	// Check whether Deque is empty
	// or not
	if (isEmpty()) {
		cout << " Underflow\n"
			<< endl;
		return -1;
	}
	return arr[front];
}

// Function return rear element of
// Input Restricted Queue
int Deque::getRear()
{

	// Check whether Deque is empty
	// or not
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
	cout << "Insert element at rear end : 5 \n";
	dq.insertrear(5);

	cout << "insert element at rear end : 10 \n";
	dq.insertrear(10);

	cout << "insert element at rear end : 15 \n";
	dq.insertrear(15);

	cout << "Get rear element : "
		<< " " << dq.getRear() << endl;

	dq.deleterear();
	cout << "After delete rear element new rear"
		<< " become : " << dq.getRear() << endl;

	cout << "Get front element : " << dq.getFront() << endl;

	dq.deletefront();

	cout << "After delete front element new "
		<< "front become : " << dq.getFront() << endl;
	return 0;
}
