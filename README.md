## Kaprekar's constant
Small application counting number of subtractions of two 4-digit numbers (current and reversed) before reaching number 6174 named Kaprekar's constant.

## Table of content
- [Getting Started](#getting-started)
  * [Prerequisites](#prerequisites)
  * [Building](#building)
- [Built with](#built-with)
- [Usage](#usage)
- [Testing](#testing)
- [License](#license)

## Getting Started
This section describes briefly how to setup environment and build project.

### Prerequisites
C++ compiler with C++17 support as a minimum, CMake 3.8+ and Git tool used for downloading Google Test library.

### Building
Use Cmake directly or your favorite IDE supporting CMake projects.  
For building main project, without using of CMake, you can also use bare compiler:
```shell
$ g++ -Wall -std=c++17 -Isrc -O3 -c *.cpp
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
Project binary expects data containing 4 digit numbers (one per line) on std in.  
Example usages:  
1. Pass example file from repo:
    ```shell
    $ ./kaprekar-constant < testFile.txt
    0
    3
    2
    1
    5
    -1
    ```
2. Use directly:
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
Project contains test created using Goggle Test framework. After compiling test can be launched via IDE or directly from console. Example run:
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

Distributed under the MIT License. See `LICENSE` for more information.
