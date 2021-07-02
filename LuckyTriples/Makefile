CXX = g++
CXXFLAGS = -std=c++17 -Wall -c
LXXFLAGS = -std=c++17 
OBJECTS = main.o LuckyTriple.o
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) -o $(TARGET) $(OBJECTS)
main.o: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp
LuckyTriple.o: LuckyTriple.cpp LuckyTriple.h
	$(CXX) $(CXXFLAGS) LuckyTriple.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
