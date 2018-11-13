CXX = g++
VARNAME = value
CXFLAGS = -Wall -g
functions_headers: functions_headers.o
	$(CXX) $(CXXFLAGS) -o functions_headers functions_headers.o
functions_headers.o: functions_headers.cc test.h widget.h
	$(CXX) $(CXXFLAGS) -c functions_headers.cc

