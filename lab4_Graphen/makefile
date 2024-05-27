.PHONY: all clean

# Name des Programms
TARGET := code

# Compiler
CC := g++
# Compiler-Flags
CFLAGS := -Wall -std=c++11 -static

# Quelldateien
SRCS := main.cpp graph.cpp#read_list.cpp v1_liste.cpp#majority.cpp #mex.cpp # #even_first.cpp
# Objektdateien
OBJS := $(SRCS:.cpp=.o)

# Standardregel für die Erstellung von Objektdateien
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Regel zur Erstellung des Programms aus den Objektdateien
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@ -lm

# Regel 'all', um das Programm zu erzeugen (als erste Regel definiert)
all: $(TARGET)

# Regel 'clean' zur Entfernung aller generierten Dateien
clean:
	rm -f $(OBJS) $(TARGET)
