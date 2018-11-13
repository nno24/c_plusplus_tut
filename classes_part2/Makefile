CXX = g++
VARNAME = value
CXFLAGS = -Wall -g
main: main.o cat.o
	$(CXX) $(CXXFLAGS) -o main main.o cat.o
main.o: main.cc
	$(CXX) $(CXXFLAGS) -c main.cc cat.h
cat.o: cat.cc
	$(CXX) $(CXXFLAGS) -c cat.cc cat.h

