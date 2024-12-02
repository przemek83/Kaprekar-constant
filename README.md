[![Build & test](https://github.com/przemek83/kaprekar-constant/actions/workflows/buld-and-test.yml/badge.svg)](https://github.com/przemek83/kaprekar-constant/actions/workflows/buld-and-test.yml)
[![CodeQL](https://github.com/przemek83/kaprekar-constant/actions/workflows/github-code-scanning/codeql/badge.svg)](https://github.com/przemek83/kaprekar-constant/actions/workflows/github-code-scanning/codeql)
[![codecov](https://codecov.io/gh/przemek83/kaprekar-constant/graph/badge.svg?token=0WWJZICVVS)](https://codecov.io/gh/przemek83/kaprekar-constant)

[![Quality Gate Status](https://sonarcloud.io/api/project_badges/measure?project=przemek83_kaprekar-constant&metric=alert_status)](https://sonarcloud.io/summary/new_code?id=przemek83_kaprekar-constant)
[![Bugs](https://sonarcloud.io/api/project_badges/measure?project=przemek83_kaprekar-constant&metric=bugs)](https://sonarcloud.io/summary/new_code?id=przemek83_kaprekar-constant)
[![Code Smells](https://sonarcloud.io/api/project_badges/measure?project=przemek83_kaprekar-constant&metric=code_smells)](https://sonarcloud.io/summary/new_code?id=przemek83_kaprekar-constant)
[![Coverage](https://sonarcloud.io/api/project_badges/measure?project=przemek83_kaprekar-constant&metric=coverage)](https://sonarcloud.io/summary/new_code?id=przemek83_kaprekar-constant)
[![Duplicated Lines (%)](https://sonarcloud.io/api/project_badges/measure?project=przemek83_kaprekar-constant&metric=duplicated_lines_density)](https://sonarcloud.io/summary/new_code?id=przemek83_kaprekar-constant)

# Table of content
- [About](#about)
- [Problem description](#problem-description)
- [Getting Started](#getting-started)
   * [Prerequisites](#prerequisites)
   * [Building](#building)
   * [Used tools and libs](#used-tools-and-libs)
- [Usage](#usage)
- [Testing](#testing)
- [License](#license)

# About
A small application counts the number of subtractions of two 4-digit numbers (with ascending and descending digits) before reaching number 6174. Number 6174 is named Kaprekar's constant.

# Problem description
Given a 4-digit number, find a number of steps to reach the number 6174, or -1 if it is not possible. Each step is the subtraction of 2 numbers created from the current number by ordering digits descending and ascending. If 6174 is reached, then the current step counter is returned. If the subtraction result is not equal 6174 than the subtraction result is taken as the current number in the next step.

Example 1:  
Given number is 4223.

| Step | current | ascending | descending | descending - ascending |
| --- | --- | --- | --- | --- | 
| 1 | 4223 | 2234 | 4322 | 2088 |
| 2 | 2088 | 0288 | 8820 | 8532 |
| 3 | 8532 | 2358 | 8532 | 6174 |

Answer : 3 steps. 

Example 2:  
The given number is 1111.  
As 1111 is a repdigit (number created using only one repeated digit) number, the algorithm returns -1. It is not possible to reach 6174 as each subtraction will be equal to 0 (1111–1111).  
Answer : -1.

More info:
* https://en.wikipedia.org/wiki/6174_%28number%29
* https://en.wikipedia.org/wiki/Repdigit

# Getting Started
This section describes briefly how to set up the environment and build the project.

## Prerequisites
C++ compiler with C++17 support as a minimum and CMake 3.14+. Additionally, the Git tool for downloading the Google Test library is needed by the test subproject.

## Building
Clone and use CMake directly or via any IDE supporting it. CMake should:
- configure everything automatically,
- compile and create binaries.

As a result of compilation, binary for simulations and binary for testing should be created.

## Used tools and libs
| Tool |  Windows 10 | Lubuntu 20.04 |
| --- | --- | --- |
| OS version | 10 22H2 | 24.04 |
| GCC | 13.1.0 | 13.2.0 |
| Cmake | 3.30.2 | 3.28.3 |
| Git | 2.46.0 | 2.43.0 |
| GoogleTest | 1.15.2 | 1.15.2 |

# Usage
Application expects a std in lines containing 4-digit numbers.  
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
# Testing
The project contains a test subproject based on Goggle Test framework. Compile testing subproject and launch tests via IDE or directly from the console. Example run:
```
$ ./kaprekar-constant-tests
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

# License
The project is distributed under the MIT License. See `LICENSE` for more information.

The project uses the following open-source software:
| Name | License | Home | Description |
| --- | --- | --- | --- |
| GoogleTest | BSD-3-Clause | https://github.com/google/googletest | testing framework |

