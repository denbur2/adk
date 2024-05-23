.PHONY: all clean

# Name des Programms
TARGET := code

# Compiler
CC := gcc
# Compiler-Flags
CFLAGS := -Wall -std=c11 -static

# Quelldateien
SRCS := code.c merge.c #majority.c #mex.c # #even_first.c
# Objektdateien
OBJS := $(SRCS:.c=.o)

# Standardregel für die Erstellung von Objektdateien
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regel zur Erstellung des Programms aus den Objektdateien
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@ -lm

# Regel 'all', um das Programm zu erzeugen (als erste Regel definiert)
all: $(TARGET)

# Regel 'clean' zur Entfernung aller generierten Dateien
clean:
	rm -f $(OBJS) $(TARGET)
