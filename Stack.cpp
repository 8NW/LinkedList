#include "Stack.hpp"

Stack::Stack(){
	top = NULL;
	size = 0;
}

bool Stack::isEmpty() const{
	return size == 0;
}

int Stack::getSize() const{
	return size;
}

void Stack::push(std::string item){
	Node* oldTop = top;
    Node* newTop = new Node(item, oldTop);

    top = newTop;
    size++;
}


std::string Stack::pop(){
	 if(isEmpty()) {
            return NULL;
        }
     else{
		std::string value = top->get_data();
        top = top->get_node();

        size--;
        return value;
    }
}


std::string Stack::peek(){
	if(isEmpty()) {
            return NULL;
        }
     else{
     	return top->get_data();
     }
}

Stack::~Stack(){
	delete top;
}