g++ -std=c++17 -I/opt/homebrew/include -L/opt/homebrew/lib -lgtest -lgtest_main -pthread tests/test_array.cpp src/array_operations.cpp -o test_runner

### To compile test_runner for all tests

```
g++ -std=c++17 -I/opt/homebrew/include -L/opt/homebrew/lib -lgtest -lgtest_main -pthread tests/*.cpp src/*.cpp -o test_runner
```