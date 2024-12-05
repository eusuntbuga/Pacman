# Variabile de configurare
CXX = g++
CXXFLAGS = -std=c++17 -Wall -g

# Directorul cu fișierele sursă și fișierele de test
SRC_DIR = src
TEST_DIR = tests
BUILD_DIR = build

# Fișierele sursă principale
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)
# Fișierele de test
TEST_FILES = $(wildcard $(TEST_DIR)/*.cpp)

# Numele executabilului
TARGET = pacman_game
TEST_TARGET = test_runner

# Obiectele generate din fișierele sursă
OBJ_FILES = $(SRC_FILES:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)

# Obiectele generate din fișierele de test
TEST_OBJ_FILES = $(TEST_FILES:$(TEST_DIR)/%.cpp=$(BUILD_DIR)/%.o)

# Regula implicită - construirea executabilului principal
all: $(TARGET)

# Regula pentru compilarea executabilului principal
$(TARGET): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ_FILES)

# Regula pentru compilarea fișierelor sursă
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regula pentru compilarea fișierelor de test
$(BUILD_DIR)/%.o: $(TEST_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regula pentru construirea executabilului de test
test: $(TEST_OBJ_FILES) $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o $(TEST_TARGET) $(TEST_OBJ_FILES) $(OBJ_FILES)
	./$(TEST_TARGET)

# Curățarea fișierelor generate
clean:
	rm -rf $(BUILD_DIR) $(TARGET) $(TEST_TARGET)

# Regula pentru crearea directorului build dacă nu există
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Regula de instalare a testelor
tests: all test
