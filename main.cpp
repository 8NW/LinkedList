// #include "Node.hpp"
// #include <iostream>

// using namespace std;

// int main(){

// 	Node* node = new Node("hello", NULL);
// 	Node* node2 = new Node("hi", NULL);

// 	node->setNode(node2);

// 	cout << node->getNode()->getData() << endl;

// 	cout << node->getData() << endl;

// 	cout << node->getNode()->getNode() << endl;

// 	node->setData("bye");
// 	cout << node->getData() << endl;

// 	return 0;
// }


#include "Stack.hpp"
#include <iostream>

using namespace std;

int main(){

	Stack* testingStack = new Stack();

	cout << testingStack->isEmpty() << endl;
	cout << testingStack->getSize() << endl;

	testingStack->push("Test 1");

	cout << testingStack->isEmpty() << endl;
	cout << testingStack->getSize() << endl;

	testingStack->push("Test 2");

	cout << testingStack->isEmpty() << endl;
	cout << testingStack->getSize() << endl;

	cout << testingStack->peek() << endl;

	cout << testingStack->isEmpty() << endl;
	cout << testingStack->getSize() << endl;

	cout << testingStack->pop() << endl;

	cout << testingStack->isEmpty() << endl;
	cout << testingStack->getSize() << endl;

	cout << testingStack->pop() << endl;

	cout << testingStack->isEmpty() << endl;
	cout << testingStack->getSize() << endl;

	// Node* node = new Node("hello", NULL);
	// Node* node2 = new Node("hi", NULL);

	// node->set_node(node2);
	// cout << node->get_node()->get_data() << endl;
	// cout << node->get_data() << endl;
	// cout << node->get_node()->get_node() << endl;
	// node->set_data("bye");
	// cout << node->get_data() << endl;




	return 0;
}