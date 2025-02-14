cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(A2_MatrixCal)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(movie_factory src/main.cpp src/movie_factory.cpp src/movie.cpp)

# adding tests

add_executable(my_tests src/movie.cpp src/movie_factory.cpp test/test.cpp)

target_include_directories(my_tests PRIVATE ${PROJECT_SOURCE_DIR}/include)

enable_testing()

add_test(NAME my_tests COMMAND my_tests)