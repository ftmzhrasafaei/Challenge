CXX = g++
CXXFLAGS = -std=c++17 -Wall -c
LXXFLAGS = -std=c++17 
OBJECTS = main.o GearFactory.o
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) -o $(TARGET) $(OBJECTS)
main.o: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp
GearFactory.o: GearFactory.cpp GearFactory.h
	$(CXX) $(CXXFLAGS) GearFactory.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
