////implement a stack using two queue
//class Stack {
//public:
//	// Push element x onto stack.
//	//���ж�һ�����пգ�ѹ��ն��У�Ȼ����ӵڶ������У�ѹ����һ��ֱ�����е���Ϊ��Ϊֹ��
//	//ͬһʱ��ֻ�ܱ�֤һ������Ϊ��
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
