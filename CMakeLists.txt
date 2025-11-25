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
