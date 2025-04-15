``` bash 
Workaround.. no need to do this on other computers
/opt/homebrew/opt/llvm/bin/llvm-profdata merge -sparse default.profraw -o coverage.profdata

xcrun llvm-profdata merge -sparse default.profraw -o coverage.profdata
xcrun llvm-cov show ./tests/service_test -instr-profile=coverage.profdata

xcrun llvm-cov show ./tests/service_test -instr-profile=coverage.profdata -format=html -output-dir=report
```

## Test Coverage steps

- step-1 add the following command in CMakeLists.txt file 
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-instr-generate -fcoverage-mapping")

- step-2 ./build/tests/service-test
    it generates default.profraw

- step-3 run the following command

    llvm-profdata merge -sparse default.profraw -o coverage.profdata

 - step-4 run the following command

    llvm-cov show ./tests/service_test -instr-profile=coverage.profdata

- step-5 get the html report

    llvm-cov show ./tests/service_test -instr-profile=coverage.profdata -format=html -output-dir=report