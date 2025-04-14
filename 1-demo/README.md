### Build and run the tests

```
g++ -std=c++17 -I/opt/homebrew/include -L/opt/homebrew/lib -lgtest -lgtest_main -pthread test/test_sample.cpp src/sample.cpp -o test_runner
```

### VS Command line
```
cl /I ..\googletest\googletest\include /EHsc tests\test_sample.cpp src\sample.cpp /link /LIBPATH:..\build\lib gtest.lib gtest_main.lib
```

### MinGW compilers

```
g++ -std=c++17 -I../googletest/googletest/include -L../build/lib -lgtest -lgtest_main -pthread tests/test_sample.cpp src/sample.cpp -o test_runner.exe
```

#### Run the tests with filters

