# CXX = g++
# CXXFLAGS = -Wall -g

# all: main.o Node.o 
# 	$(CXX) $(CXXFLAGS) -o executable main.o Node.o

# main.o: Node.hpp

# Node.o: Node.hpp

# clean:
# 	rm -rf *.o
# 	rm main

CXX = g++
CXXFLAGS = -Wall -g

main: main.o Node.o Stack.o
	g++ main.o Node.o Stack.o -o main
main.o: Stack.hpp 

Node.o: Node.hpp

Stack.o: Stack.hpp Node.hpp

clean:
	rm -rf *.o
	rm main