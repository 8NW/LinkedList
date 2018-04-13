// # include "Node.hpp"

// Node::Node(std::string data, Node* n){
// 	this->data = data;
// 	node = n;

// }

// Node::~Node(){
// 	delete node;
// }

// std::string Node::getData()const{
// 	return data;
// }
// void Node::setData(std::string d){
// 	data = d;
// }

// Node* Node::getNode()const{
// 	return node;
// }
// void Node::setNode(Node* n){
// 	node = n;
// }


#include "Node.hpp"

Node::Node(std::string data, Node* n){
	this->data = data;
	node = n;
}
std::string Node::get_data()const{return data;}
void Node::set_data(std::string d){
	data = d;
}

Node* Node::get_node()const{return node;}
void Node::set_node(Node* n){node = n;}

Node::~Node(){
	delete node;
}
