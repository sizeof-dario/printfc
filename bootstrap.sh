#!/bin/bash

set -e

git clone --depth 1 https://github.com/sizeof-dario/printfc.git
cd ./printfc/
cmake -B build 
cmake --build build && mv ./printfc/build/libprintfc.a ./
find . ! -name 'libprintfc.a' -exec rm -rf {} +
