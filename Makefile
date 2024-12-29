CXX = g++
CXXFLAGS = -Iinclude -std=c++11

all: calculator main

calculator: calculator.o
	$(CXX) -shared -o libcalculator.so calculator.o

main: main.o
	$(CXX) -o main main.o -L. -lcalculator

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

calculator.o: src/calculator.cpp
	$(CXX) $(CXXFLAGS) -c calculator.cpp -o calculator.o

clean:
	rm -f *.o main libcalculator.so