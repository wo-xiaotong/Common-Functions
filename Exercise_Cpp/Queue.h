#ifndef QUEUE_H
#define QUEUE_H

template<typename T>
class Queue
{
public:
	Queue(int size);
	~Queue();
	inline void push(T val);
	inline void pop();
	inline T& back();
	inline T& front();
	inline bool empty();
	inline int size();

private:
	int head, tail;
	T *m_data;
	int m_capacity;
};

template<typename T>
Queue<T>::Queue(int size)
{
	m_capacity = size + 1;
	m_data = new T[size + 1];
	head = tail = 0;
}

template<typename T>
Queue<T>::~Queue()
{
	delete[] m_data;
}

template<typename T>
inline bool Queue<T>::empty()
{
	return head == tail;
}

template<typename T>
inline int Queue<T>::size()
{
	int size = tail - head;
	size = size >= 0 ? size : size + m_capacity;
	return size;
}

template<typename T>
inline void Queue<T>::push(T val)
{
	if ((tail + 1) % m_capacity == head)return;
	m_data[tail] = val;
	tail = (tail + 1) % m_capacity;
}

template<typename T>
inline void Queue<T>::pop()
{
	if (head == tail)return;
	head = (head + 1) % m_capacity;
}

template<typename T>
inline T& Queue<T>::front()
{
	return m_data[head];
}

template<typename T>
inline T& Queue<T>::back()
{
	int index = tail - 1;
	index = index >= 0 ? index : index + m_capacity;
	return m_data[index];
}


#endif