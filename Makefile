BUILD_DIR = build
EXECUTABLE = $(BUILD_DIR)/calculator_app

all: $(BUILD_DIR) $(EXECUTABLE)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(EXECUTABLE): $(BUILD_DIR)/main.o $(BUILD_DIR)/calculator.o
	g++ $(BUILD_DIR)/main.o $(BUILD_DIR)/calculator.o -o $@

$(BUILD_DIR)/main.o: main.cpp calculator.hpp
	g++ -c main.cpp -o $@

$(BUILD_DIR)/calculator.o: calculator.cpp calculator.hpp
	g++ -c calculator.cpp -o $@

run: $(EXECUTABLE)
	./$(EXECUTABLE)

clean:
	rm -rf $(BUILD_DIR)