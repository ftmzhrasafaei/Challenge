CXX = g++
CXXFLAGS = -std=c++17 -Wall -c
LXXFLAGS = -std=c++17 
OBJECTS = main.o LegendaryValue.o
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) -o $(TARGET) $(OBJECTS)
main.o: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp
LegendaryValue.o: LegendaryValue.cpp LegendaryValue.h
	$(CXX) $(CXXFLAGS) LegendaryValue.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
