CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -g

OBJS = main.o shape.o circle.o rectangle.o

shapemanager: $(OBJS)
	$(CXX) $(CXXFLAGS) -o shapemanager $(OBJS)

main.o: main.cpp shape.h circle.h rectangle.h
shape.o: shape.cpp shape.h
circle.o: circle.cpp circle.h shape.h
rectangle.o: rectangle.cpp rectangle.h shape.h

clean:
	rm -f *.o shapemanager
