## Kaprekar's constant
Small application counting number of subtractions of two 4-digit numbers (current and reversed) before reaching number 6174 named Kaprekar's constant.

## Table of content
TODO

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
TODO

## Testing
TODO

## License

Distributed under the MIT License. See `LICENSE` for more information.
