#ifndef _STACK_HPP
#define _STACK_HPP

#include <string>
#include "Node.hpp"

class Stack{
public: 
	Stack();

	bool isEmpty() const;
	int getSize() const;

	void push(std::string item);
	std::string pop();
	std::string peek();

	~Stack();

private:
	Node* top;
	int size;


};

#endif