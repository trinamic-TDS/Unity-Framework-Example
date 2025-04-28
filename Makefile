CC = gcc
CFLAGS = -Iunity/src -Itest -Isrc -Icmock/src -Imocks
TARGET = build/test_runner

SRC = src/led.c
TEST_SRC = test/test_led.c
MOCK_SRC = mocks/Mockgpio.c

UNITY_SRC = unity/src/unity.c
CMOCK_SRC = cmock/src/cmock.c
# Default rule
all: generate_mocks build/test_runner run_tests

# Step 1: Generate mocks
generate_mocks:
	ruby cmock/lib/cmock.rb CMock.yml src/gpio.h

# Step 2: Compile everything
build/test_runner: $(SRC) $(MOCK_SRC) $(TEST_SRC) $(UNITY_SRC) $(CMOCK_SRC)
	mkdir build
	$(CC) $(CFLAGS) $^ -o $(TARGET)

# Step 3: Run the tests
run_tests:
	./$(TARGET)

# Clean everything
clean:
	rm -rf build
	rm -f test/mock_*.c
	rm -f test/mock_*.h
