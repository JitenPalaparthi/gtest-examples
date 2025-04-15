- Runtime
- Static Linking vs Dynamic Linking 
        - GTest is statically linked
- VTables --> GMock uses, indirectly bcz pure virtual functions(Abstract class/interfaces)
- Static Dispatch vs Dynamic Dispatch --> Interfaces 

template --> monomorphization
Gmock --> Does not generate the code rather it uses VTabels which is dynamic dispatch


The real database is postgres 

CreateUser --> Create DB instance, insert data , test and clear the instance
GetUsers  --> Create DB instance, insert data(multiple times) , test(GetUsers) and clear the instance
UpdateUser -->
DeleteUser --> 
GetUser --> 


I want to write unit tests for the above

1. Mocking --> The above stuff should be interface driven


2. Can use SQLite --> real data 
3. What is it is a Integration testing ?

Setup
TearDown
TEST_F --> Setup perform the test and TearDown

