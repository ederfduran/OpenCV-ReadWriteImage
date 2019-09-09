# OpenCV-ReadWriteImage

**TOOL SET:**

* macOS Mojave
* CMake and Make (Build Project)
* vsCode (Editor)
* lldb (Debug, https://code.visualstudio.com/docs/cpp/config-clang-mac)
* vcpkg (Package Manager, https://github.com/microsoft/vcpkg)

# Description 

This is a very simple project to show some basic functionality of OpenCV.
* Read an Image and show it in window, make a copy in black and white format. 

There are some important things to notice here:

/vscode is a folder generetaed by vsCode to set up the debug functionality.
CMakeLists.txt used to build the project. Notice i use vcpkg to bind OpenCV library.

# Steps to run

On Project folder :

```sh
$ mkdir build && cd build
$ cmake ..
$ make
$ ./ReadWrite_Image
```
