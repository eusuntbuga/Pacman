CC = g++
CFLAGS = -c -std=c++17
LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

INCLUDE = include
SRC = src
LIB = libs
TEST = tests

SOURCES = $(SRC)/board.cpp $(SRC)/ghost.cpp $(SRC)/pacman.cpp $(SRC)/gameengine.cpp $(SRC)/painter.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = PacManGame

TEST_SOURCES = $(TEST)/test_point.cpp $(TEST)/test_board.cpp $(TEST)/test_ghost.cpp
TEST_OBJECTS = $(TEST_SOURCES:.cpp=.o)
TEST_EXECUTABLE = TestPacMan

all: $(EXECUTABLE) $(TEST_EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $^ -o $@ $(LDFLAGS)

$(TEST_EXECUTABLE): $(TEST_OBJECTS)
	$(CC) $^ -o $@ $(LDFLAGS)

%.o: %.cpp
	$(CC) $(CFLAGS) -I$(INCLUDE) $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE) $(TEST_OBJECTS) $(TEST_EXECUTABLE)
