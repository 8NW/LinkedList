// #ifndef _NODE_HPP
// #define _NODE_HPP
// #include <string>

// class Node{
// public:
// 	Node(std::string data, Node* n);
// 	~Node();

// 	std::string getData() const;
// 	Node* getNode() const;

// 	void setData(std::string data);
// 	void setNode(Node* n);

// private:
// 	std::string data;
// 	Node* node;

// };


// #endif

#ifndef _NODE_HPP
#define _NODE_HPP
#include <string>

class Node{
public:
	Node(std::string data, Node* n);
	std::string get_data() const;
	Node* get_node() const;
	void set_data(std::string data);
	void set_node(Node* n);
	~Node();
private:
	std::string data;
	Node* node;

};



#endif
