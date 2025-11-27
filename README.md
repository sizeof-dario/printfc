![Build](https://img.shields.io/github/actions/workflow/status/sizeof-dario/printfc/cmake-multi-platform.yml)
# printfc
## Obtaining the library
> [!IMPORTANT] 
> You'll need both **git** and **cmake** to make this work!

Choose a directory where you want the library files to be put into, open it in terminal, then paste and execute the following command:
```
curl -fsSL https://raw.githubusercontent.com/sizeof-dario/printfc/main/bootstrap.sh | bash
```
You'll find the library at **path-to-dir/printf/build/libprintfc.a** and its header at **path-to-dir/printf/include/printfc.h**,
where **path-to-dir** is the path of the director you've chosen.
