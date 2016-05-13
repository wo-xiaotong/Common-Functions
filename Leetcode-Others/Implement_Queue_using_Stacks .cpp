/*
Implement Queue using Stacks 
Implement the following operations of a queue using stacks.

push(x) -- Push element x to the back of queue.
pop() -- Removes the element from in front of queue.
peek() -- Get the front element.
empty() -- Return whether the queue is empty.
*/

#include<iostream>
#include<stack>
using namespace std;

class Queue {
public:
	// Push element x to the back of queue.
	void push(int x) {
		first.push(x);
	}

	// Removes the element from in front of queue.
	void pop(void) {
		if (second.empty()) {
			while (!first.empty()) {
				second.push(first.top());
				first.pop();
			}
		}
		second.pop();
	}

	// Get the front element.
	int peek(void) {
		if (second.empty()) {
			while (!first.empty()) {
				second.push(first.top());
				first.pop();
			}
		}
		return second.top();
	}

	// Return whether the queue is empty.
	bool empty(void) {
		return first.empty() && second.empty();
	}
private:
	stack<int>first, second;
};
