# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "F:\Softwares\CLion 2020.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "F:\Softwares\CLion 2020.1.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\CSC211-DSA\File Management System"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\CSC211-DSA\File Management System\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/File_Management_System.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/File_Management_System.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/File_Management_System.dir/flags.make

CMakeFiles/File_Management_System.dir/main.cpp.obj: CMakeFiles/File_Management_System.dir/flags.make
CMakeFiles/File_Management_System.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\CSC211-DSA\File Management System\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/File_Management_System.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\File_Management_System.dir\main.cpp.obj -c "E:\CSC211-DSA\File Management System\main.cpp"

CMakeFiles/File_Management_System.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/File_Management_System.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\CSC211-DSA\File Management System\main.cpp" > CMakeFiles\File_Management_System.dir\main.cpp.i

CMakeFiles/File_Management_System.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/File_Management_System.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\CSC211-DSA\File Management System\main.cpp" -o CMakeFiles\File_Management_System.dir\main.cpp.s

CMakeFiles/File_Management_System.dir/FileManagement.cpp.obj: CMakeFiles/File_Management_System.dir/flags.make
CMakeFiles/File_Management_System.dir/FileManagement.cpp.obj: ../FileManagement.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\CSC211-DSA\File Management System\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/File_Management_System.dir/FileManagement.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\File_Management_System.dir\FileManagement.cpp.obj -c "E:\CSC211-DSA\File Management System\FileManagement.cpp"

CMakeFiles/File_Management_System.dir/FileManagement.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/File_Management_System.dir/FileManagement.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\CSC211-DSA\File Management System\FileManagement.cpp" > CMakeFiles\File_Management_System.dir\FileManagement.cpp.i

CMakeFiles/File_Management_System.dir/FileManagement.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/File_Management_System.dir/FileManagement.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\CSC211-DSA\File Management System\FileManagement.cpp" -o CMakeFiles\File_Management_System.dir\FileManagement.cpp.s

# Object files for target File_Management_System
File_Management_System_OBJECTS = \
"CMakeFiles/File_Management_System.dir/main.cpp.obj" \
"CMakeFiles/File_Management_System.dir/FileManagement.cpp.obj"

# External object files for target File_Management_System
File_Management_System_EXTERNAL_OBJECTS =

File_Management_System.exe: CMakeFiles/File_Management_System.dir/main.cpp.obj
File_Management_System.exe: CMakeFiles/File_Management_System.dir/FileManagement.cpp.obj
File_Management_System.exe: CMakeFiles/File_Management_System.dir/build.make
File_Management_System.exe: CMakeFiles/File_Management_System.dir/linklibs.rsp
File_Management_System.exe: CMakeFiles/File_Management_System.dir/objects1.rsp
File_Management_System.exe: CMakeFiles/File_Management_System.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\CSC211-DSA\File Management System\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable File_Management_System.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\File_Management_System.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/File_Management_System.dir/build: File_Management_System.exe

.PHONY : CMakeFiles/File_Management_System.dir/build

CMakeFiles/File_Management_System.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\File_Management_System.dir\cmake_clean.cmake
.PHONY : CMakeFiles/File_Management_System.dir/clean

CMakeFiles/File_Management_System.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\CSC211-DSA\File Management System" "E:\CSC211-DSA\File Management System" "E:\CSC211-DSA\File Management System\cmake-build-debug" "E:\CSC211-DSA\File Management System\cmake-build-debug" "E:\CSC211-DSA\File Management System\cmake-build-debug\CMakeFiles\File_Management_System.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/File_Management_System.dir/depend

