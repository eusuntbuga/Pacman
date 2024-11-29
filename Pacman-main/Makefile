CC = g++
CFLAGS = -c -std=c++17
LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

INCLUDE = include
SRC = src
LIB = libs

SOURCES = $(SRC)/board.cpp $(SRC)/ghost.cpp $(SRC)/pacman.cpp $(SRC)/gameengine.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = PacManGame

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $^ -o $@ $(LDFLAGS)

%.o: %.cpp
	$(CC) $(CFLAGS) -I$(INCLUDE) $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
