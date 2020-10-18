## Kaprekar's constant
Small application counting number of subtractions of two 4-digit numbers (with ascending and descending digits) before reaching number 6174. Number 6174 is named Kaprekar's constant.

## Table of content
- [Problem description](#problem-description)
- [Getting Started](#getting-started)
  * [Prerequisites](#prerequisites)
  * [Building](#building)
- [Built with](#built-with)
- [Usage](#usage)
- [Testing](#testing)
- [License](#license)

## Problem description
Given 4 digit number find number of steps to reach number 6174 or -1 if it is not possible. Each step is subtraction of 2 numbers created from current number by ordering digits descending and ascending. If 6174 is reached then current step counter is returned. If subtraction result is not equal 6174 than subtraction result is taken as current number in next step.

Example 1:  
Given number is 4223.

|Step| current | ascending | descending | descending - ascending |
| --- | --- | --- | --- | --- | 
| 1 | 4223 | 2234 | 4322 | 2088 |
| 2 | 2088 | 0288 | 8820 | 8532 |
| 3 | 8532 | 2358 | 8532 | 6174 |

Answer : 3 steps. 

Example 2:  
Given number is 1111.  
As 1111 is repdigit (number created using only one repeated digit) number algorithm returns -1. It is not possible to reach 6174 as each subtraction will be equal 0 (1111 - 1111).  
Answer : -1.

More info:
* https://en.wikipedia.org/wiki/6174_%28number%29
* https://en.wikipedia.org/wiki/Repdigit

## Getting Started
This section describes briefly how to setup environment and build project.

### Prerequisites
C++ compiler with C++17 support as a minimum and CMake 3.8+. Additionally Git tool for downloading Google Test library as it is needed by test subproject.

### Building
Recommended:  
Use Cmake directly or your favorite IDE supporting CMake projects.  

Alternative:  
Use bare compiler for building project binary:
```shell
$ g++ -Wall -std=c++17 -O3 -c *.cpp
$ g++ -Wall -std=c++17 -O3 -o kaprekar-constant *.o
```

## Built with
| Tool |  Windows 10 | Lubuntu 20.04 |
| --- | --- | --- |
| GCC | 7.3.0 | 9.3.0 |
| Cmake | 3.14 | 3.17 |
| Git | 2.20 | 2.25 |
| QtCreator | 4.12.0 | 4.13.0 |

## Usage
Application expects on std in lines containing 4 digit numbers.  
Example input:
```
6174
4223
2088
8532
1112
1111
```
Examples of usage:  
1. Pass example file named `testFile.txt` from project repo:
    ```shell
    $ ./kaprekar-constant < testFile.txt
    0
    3
    2
    1
    5
    -1
    ```
2. Use binary directly:
    ```shell
    $ ./kaprekar-constant
    1234
    3
    4321
    3
    ```
3. Pipe input:
    ```shell
    $ cat testFile.txt | ./kaprekar-constant
    0
    3
    2
    1
    5
    -1
    ```
## Testing
Project contains test subproject based on Goggle Test framework. Compile testing subproject and launch tests via IDE or directly from console. Example run:
```
$ ./kaprekar-constant-test
(...)
[==========] Running 3 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 3 tests from Kaprekar
[ RUN      ] Kaprekar.isRepdigitNegative
[       OK ] Kaprekar.isRepdigitNegative (0 ms)
[ RUN      ] Kaprekar.isRepdigitPositive
[       OK ] Kaprekar.isRepdigitPositive (0 ms)
[ RUN      ] Kaprekar.countSteps
[       OK ] Kaprekar.countSteps (0 ms)
[----------] 3 tests from Kaprekar (0 ms total)

[----------] Global test environment tear-down
[==========] 3 tests from 1 test suite ran. (0 ms total)
[  PASSED  ] 3 tests.

```

## License
Project is distributed under the MIT License. See `LICENSE` for more information.
