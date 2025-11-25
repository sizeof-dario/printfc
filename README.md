# printfc
## How to obtain and use the library
> [!IMPORTANT] 
> You'll need both **git** and **cmake** to make this work!
### 1. Get a copy of this repository content
Choose the directory where you want the files to be put into, then open it in terminal and type (or paste):
```
git clone --depth 1 https://github.com/sizeof-dario/printfc.git
```
You'll find all the files in the **printfc** directory, inside the one you initally chose.
### 2. Build the library
Go to the **printfc** directory and type:
```
cmake -B build
```
followed by
```
cmake --build build
```
You'll find the library in the (newly created) **build** drectory, as **libprintfc.a**.
### 3. Include the library header file in your project
To access this library function(s), you need to include its header, it being in the **include** directory. 
Take note of the **printfc** directory path and paste the following line in the appropriete project file
```
#include "path-to-printfc/include/printfc.h"
```
Of course, you'll need to adjust **path-to-printfc** to its real value.
### 4. Link against the library
Last step is linking. For this, you need to keep in mind the path to the **build** directory and tell your linker to also link with **path-to-build/libprintfc.a**.
For example, assuming you use the gcc compiler and your project just consists of a main.c file, then you'll need to type
```
gcc main.c path-to-build/libprintfc.a
```
