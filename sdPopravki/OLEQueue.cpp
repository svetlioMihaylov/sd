
#include<iostream>
#include<string>


using namespace std;

class Queue {
private:
  char * data;      // The array that stores the elements of the queue.
  int size;     // The size of the data array.
  int front;    // The index that points to the element at the head of the queue.
  int back;     // The index where the next elemene of the queue will be pushed.
  int elements; // The total number of elements in the queue.

public:
  Queue(int size);
  Queue();
  ~Queue();
  bool Push(const char * value);
};