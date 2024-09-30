CC = g++
CFLAGS = -c
SOURCES = board.cpp ghost.cpp pacman.cpp gameengine.cpp painter.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = PacManGame

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
    $(CC) $^ -o $@

%.o: %.cpp
    $(CC) $(CFLAGS) $< -o $@

clean:
    rm -f $(OBJECTS) $(EXECUTABLE)
