cmake_minimum_required(VERSION 3.28.3)

project(printfc)

add_library(printfc)

target_sources(printfc
  PRIVATE
    printfc.c

  PUBLIC
    FILE_SET HEADERS
    BASE_DIRS
      include
    FILES
      include/printfc.h
)

enable_testing()

add_executable(run_tests
    tests/test_main.c
    tests/unity.c
)

target_link_libraries(run_tests PRIVATE printfc)

add_test(NAME unit_tests COMMAND run_tests)