### Assignment_01_20191013
#### The first OOP assignment on Oct 13, 2019

#### P206  
6.50 (Pass-by-Value vs. Pass-by-Reference)   Write a complete C++ program with the two alternate functions specified below, each of which simply triples the variable count defined in main. Then compare and contrast the two approaches. These two functions are:  
> a) function tripleByValue that passes a copy of count by value, triples the copy and returns the new value  
> b) function tripleByReference that passes count by reference via a reference parameter and triples the original value of count through its alias (i.e., the reference parameter).

#### P.S.
1. C-style input/output is not allowed!
2. Use std::cout/std::cin/std::endl or cout/cin/endl with "using namespace std;"
3. Commenting code is necessary!

#### Sample Output
    Enter a value for count: 10

    Value of count before call to tripleByValue() is: 10
    Value returned from tripleByValue() is: 30
    Value of count (in main) after tripleCallByValue() is: 10

    Value of count before call to tripleByReference() is: 10
    Value of count (in main) after call to tripleByReference() is: 30
