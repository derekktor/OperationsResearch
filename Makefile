# Compiler to use
CXX = g++

# Compiler flags
# -Iinclude 			find headers in include folder
# -std=c++20 			use c++20 std
CXXFLAGS = -std=c++20 -Iinclude

# Name of the final executable
TARGET = app

# Source files
SRCS = $(wildcard src/*.cpp) main.cpp

# Object directory
OBJDIR = build

# Object files (place them in OBJDIR)
OBJS = $(SRCS:%.cpp=$(OBJDIR)/%.o)

# Default rule
all: run

# Link object files into the final executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile each .cpp into a .o inside OBJDIR
$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Run rule
run: $(TARGET)
	./$(TARGET)

# Clean rule
clean:
	rm -rf $(OBJDIR)/* $(TARGET)

# Declaring a target as .PHONY tells make to always run it, regardless of whether a file with that name exists.
.PHONY: all run clean

