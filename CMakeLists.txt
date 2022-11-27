cmake_minimum_required(VERSION 3.23)
project(Lecture18Examples)

set(CMAKE_CXX_STANDARD 14)

add_executable(Main main.cpp)
add_executable(Point point.cpp)
add_executable(BankAccount BankAccountDriver.cpp BankAccount.cpp)