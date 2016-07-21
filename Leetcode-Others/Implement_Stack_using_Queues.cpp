////implement a stack using two queue
//class Stack {
//public:
//	// Push element x onto stack.
//	//先判断一个队列空，压入空队列，然后出队第二个队列，压入另一个直至所有的数为空为止。
//	//同一时刻只能保证一个队列为空
//	void push(int x) {
//		if (queue1.empty()) {
//			queue1.push(x);
//			while (!queue2.empty()) {
//				queue1.push(queue2.front());
//				queue2.pop();
//			}
//		}
//		else {
//			queue2.push(x);
//			while (!queue1.empty()) {
//				queue2.push(queue1.front());
//				queue1.pop();
//			}
//		}
//
//	}
//
//	// Removes the element on top of the stack.
//	void pop() {
//		if (!queue1.empty())
//			queue1.pop();
//		else
//			queue2.pop();
//	}
//
//	// Get the top element.
//	int top() {
//		if (!queue1.empty())
//			return queue1.front();
//		else
//			return queue2.front();
//	}
//
//	// Return whether the stack is empty.
//	bool empty() {
//		return queue1.empty() && queue2.empty();
//	}
//
//private:
//	queue<int>queue1, queue2;
//};
//
