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

#add_executable(run_tests
#    tests/test_main.c
#    tests/unity.c
#)

#target_link_libraries(run_tests PRIVATE printfc)

#add_test(NAME unit_tests COMMAND run_tests)


function(add_unity_test name)
  #add_executable(${name} ${ARGN})
  add_executable(${name} ${ARGN} tests/unity.c)
  target_link_libraries(${name} PRIVATE printfc)
  add_test(NAME ${name} COMMAND ${name})
endfunction()

add_unity_test(test_clrcpy tests/test_clrcpy.c)
add_unity_test(test_RGB_macro tests/test_RGB_macro.c)
add_unity_test(test_tocolor tests/test_tocolor.c)