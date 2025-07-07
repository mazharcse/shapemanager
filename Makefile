CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -g -Iinclude

SRCDIR = src
INCDIR = include
BUILDDIR = build
TARGET = $(BUILDDIR)/shapemanager

SOURCES = main.cpp $(SRCDIR)/shape.cpp $(SRCDIR)/circle.cpp $(SRCDIR)/rectangle.cpp
OBJECTS = $(patsubst %.cpp,$(BUILDDIR)/%.o,$(notdir $(SOURCES)))

$(BUILDDIR)/%.o: %.cpp $(INCDIR)/shape.h $(INCDIR)/circle.h $(INCDIR)/rectangle.h | $(BUILDDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp $(INCDIR)/%.h | $(BUILDDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(BUILDDIR):
	mkdir -p $(BUILDDIR)

clean:
	rm -rf $(BUILDDIR)/*.o $(TARGET)
