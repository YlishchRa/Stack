#pragma once
#include <iostream>
template <typename T>
class stack
{
	T arr[500];
	int MAXlength;
	int MINlength;
	int length;

public:
	stack();
	bool isEmpty();
	bool isFull();
	void push(T value);
	T top();
	void pop();
};


template<typename T>
stack<T>::stack() : MAXlength{ 500 }, length{ -1 }, MINlength{ -1 } {}

template<typename T>
inline bool stack<T>::isEmpty()
{
	return length == MINlength;
}

template<typename T>
inline bool stack<T>::isFull()
{
	return length + 1 == MAXlength;
}

template<typename T>
void stack<T>::push(T value)
{
	if (!isFull())
	{
		arr[++length] = value;
	}
	else
	{
		std::cout << "Stack is full\n";
	}
}

template<typename T>
T stack<T>::top()
{
	if (!isEmpty())
		return arr[length];
	else return T();
}

template<typename T>
void stack<T>::pop()
{
	if (!isEmpty())
	{
		length--;
	}
}
