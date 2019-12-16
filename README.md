# LeetCode C++

- [LeetCode C++](#leetcode-c)
  - [Why?](#why)
  - [Getting Started](#getting-started)
    - [Requirements](#requirements)
    - [Building](#building)
    - [Running Tests](#running-tests)

## Why?

There are probably a hundred other repos on Github with excellent solutions and great explanations of the code, however, I found very few that contained solutions and tests written using C++ and from the few that I found, most were difficult to run locally.

So, with that in mind, this repo aims to provide a simple project structure that is easy to run locally.

## Getting Started

### Requirements

- C++11 compatible compiler: g++ (version >= 4.2), or clang++ (version >= 3.0)
- CMake (version >= 3.0.2)
- [Catch2](https://github.com/catchorg/Catch2).  Currently, this project expects Catch2 to be [installed locally](https://github.com/catchorg/Catch2/blob/master/docs/cmake-integration.md#installing-catch2-from-git-repository).  Most likely in the future I will modify the project setup to be more portable and include [`catch.hpp`](https://github.com/catchorg/Catch2/releases/download/v2.11.0/catch.hpp) instead of expecting a local installation.

### Building

1. `mkdir -p build`
1. `cd build`
1. `cmake ..`
1. `make`

For convenience, [`scripts/clean.sh`](`scripts/clean.sh`) is provided to clean the `build` directory and subsequently create a new build folder.

### Running Tests

Still in `build/`, execute `tests/Test` to run test binary.

