# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/alexsitzman/Documents/Projects/CruxIDE

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/alexsitzman/Documents/Projects/CruxIDE/build

# Include any dependencies generated for this target.
include CMakeFiles/CruxIDE.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CruxIDE.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CruxIDE.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CruxIDE.dir/flags.make

CMakeFiles/CruxIDE.dir/codegen:
.PHONY : CMakeFiles/CruxIDE.dir/codegen

CMakeFiles/CruxIDE.dir/src/core/Core.cpp.o: CMakeFiles/CruxIDE.dir/flags.make
CMakeFiles/CruxIDE.dir/src/core/Core.cpp.o: /Users/alexsitzman/Documents/Projects/CruxIDE/src/core/Core.cpp
CMakeFiles/CruxIDE.dir/src/core/Core.cpp.o: CMakeFiles/CruxIDE.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/alexsitzman/Documents/Projects/CruxIDE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CruxIDE.dir/src/core/Core.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CruxIDE.dir/src/core/Core.cpp.o -MF CMakeFiles/CruxIDE.dir/src/core/Core.cpp.o.d -o CMakeFiles/CruxIDE.dir/src/core/Core.cpp.o -c /Users/alexsitzman/Documents/Projects/CruxIDE/src/core/Core.cpp

CMakeFiles/CruxIDE.dir/src/core/Core.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/CruxIDE.dir/src/core/Core.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexsitzman/Documents/Projects/CruxIDE/src/core/Core.cpp > CMakeFiles/CruxIDE.dir/src/core/Core.cpp.i

CMakeFiles/CruxIDE.dir/src/core/Core.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/CruxIDE.dir/src/core/Core.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexsitzman/Documents/Projects/CruxIDE/src/core/Core.cpp -o CMakeFiles/CruxIDE.dir/src/core/Core.cpp.s

CMakeFiles/CruxIDE.dir/src/editor/Editor.cpp.o: CMakeFiles/CruxIDE.dir/flags.make
CMakeFiles/CruxIDE.dir/src/editor/Editor.cpp.o: /Users/alexsitzman/Documents/Projects/CruxIDE/src/editor/Editor.cpp
CMakeFiles/CruxIDE.dir/src/editor/Editor.cpp.o: CMakeFiles/CruxIDE.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/alexsitzman/Documents/Projects/CruxIDE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CruxIDE.dir/src/editor/Editor.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CruxIDE.dir/src/editor/Editor.cpp.o -MF CMakeFiles/CruxIDE.dir/src/editor/Editor.cpp.o.d -o CMakeFiles/CruxIDE.dir/src/editor/Editor.cpp.o -c /Users/alexsitzman/Documents/Projects/CruxIDE/src/editor/Editor.cpp

CMakeFiles/CruxIDE.dir/src/editor/Editor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/CruxIDE.dir/src/editor/Editor.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexsitzman/Documents/Projects/CruxIDE/src/editor/Editor.cpp > CMakeFiles/CruxIDE.dir/src/editor/Editor.cpp.i

CMakeFiles/CruxIDE.dir/src/editor/Editor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/CruxIDE.dir/src/editor/Editor.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexsitzman/Documents/Projects/CruxIDE/src/editor/Editor.cpp -o CMakeFiles/CruxIDE.dir/src/editor/Editor.cpp.s

CMakeFiles/CruxIDE.dir/src/main.cpp.o: CMakeFiles/CruxIDE.dir/flags.make
CMakeFiles/CruxIDE.dir/src/main.cpp.o: /Users/alexsitzman/Documents/Projects/CruxIDE/src/main.cpp
CMakeFiles/CruxIDE.dir/src/main.cpp.o: CMakeFiles/CruxIDE.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/alexsitzman/Documents/Projects/CruxIDE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/CruxIDE.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CruxIDE.dir/src/main.cpp.o -MF CMakeFiles/CruxIDE.dir/src/main.cpp.o.d -o CMakeFiles/CruxIDE.dir/src/main.cpp.o -c /Users/alexsitzman/Documents/Projects/CruxIDE/src/main.cpp

CMakeFiles/CruxIDE.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/CruxIDE.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexsitzman/Documents/Projects/CruxIDE/src/main.cpp > CMakeFiles/CruxIDE.dir/src/main.cpp.i

CMakeFiles/CruxIDE.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/CruxIDE.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexsitzman/Documents/Projects/CruxIDE/src/main.cpp -o CMakeFiles/CruxIDE.dir/src/main.cpp.s

CMakeFiles/CruxIDE.dir/src/syntax/SyntaxHighlighter.cpp.o: CMakeFiles/CruxIDE.dir/flags.make
CMakeFiles/CruxIDE.dir/src/syntax/SyntaxHighlighter.cpp.o: /Users/alexsitzman/Documents/Projects/CruxIDE/src/syntax/SyntaxHighlighter.cpp
CMakeFiles/CruxIDE.dir/src/syntax/SyntaxHighlighter.cpp.o: CMakeFiles/CruxIDE.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/alexsitzman/Documents/Projects/CruxIDE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/CruxIDE.dir/src/syntax/SyntaxHighlighter.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CruxIDE.dir/src/syntax/SyntaxHighlighter.cpp.o -MF CMakeFiles/CruxIDE.dir/src/syntax/SyntaxHighlighter.cpp.o.d -o CMakeFiles/CruxIDE.dir/src/syntax/SyntaxHighlighter.cpp.o -c /Users/alexsitzman/Documents/Projects/CruxIDE/src/syntax/SyntaxHighlighter.cpp

CMakeFiles/CruxIDE.dir/src/syntax/SyntaxHighlighter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/CruxIDE.dir/src/syntax/SyntaxHighlighter.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexsitzman/Documents/Projects/CruxIDE/src/syntax/SyntaxHighlighter.cpp > CMakeFiles/CruxIDE.dir/src/syntax/SyntaxHighlighter.cpp.i

CMakeFiles/CruxIDE.dir/src/syntax/SyntaxHighlighter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/CruxIDE.dir/src/syntax/SyntaxHighlighter.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexsitzman/Documents/Projects/CruxIDE/src/syntax/SyntaxHighlighter.cpp -o CMakeFiles/CruxIDE.dir/src/syntax/SyntaxHighlighter.cpp.s

CMakeFiles/CruxIDE.dir/src/ui/UIManager.cpp.o: CMakeFiles/CruxIDE.dir/flags.make
CMakeFiles/CruxIDE.dir/src/ui/UIManager.cpp.o: /Users/alexsitzman/Documents/Projects/CruxIDE/src/ui/UIManager.cpp
CMakeFiles/CruxIDE.dir/src/ui/UIManager.cpp.o: CMakeFiles/CruxIDE.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/alexsitzman/Documents/Projects/CruxIDE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/CruxIDE.dir/src/ui/UIManager.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CruxIDE.dir/src/ui/UIManager.cpp.o -MF CMakeFiles/CruxIDE.dir/src/ui/UIManager.cpp.o.d -o CMakeFiles/CruxIDE.dir/src/ui/UIManager.cpp.o -c /Users/alexsitzman/Documents/Projects/CruxIDE/src/ui/UIManager.cpp

CMakeFiles/CruxIDE.dir/src/ui/UIManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/CruxIDE.dir/src/ui/UIManager.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexsitzman/Documents/Projects/CruxIDE/src/ui/UIManager.cpp > CMakeFiles/CruxIDE.dir/src/ui/UIManager.cpp.i

CMakeFiles/CruxIDE.dir/src/ui/UIManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/CruxIDE.dir/src/ui/UIManager.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexsitzman/Documents/Projects/CruxIDE/src/ui/UIManager.cpp -o CMakeFiles/CruxIDE.dir/src/ui/UIManager.cpp.s

CMakeFiles/CruxIDE.dir/src/utils/FileUtils.cpp.o: CMakeFiles/CruxIDE.dir/flags.make
CMakeFiles/CruxIDE.dir/src/utils/FileUtils.cpp.o: /Users/alexsitzman/Documents/Projects/CruxIDE/src/utils/FileUtils.cpp
CMakeFiles/CruxIDE.dir/src/utils/FileUtils.cpp.o: CMakeFiles/CruxIDE.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/alexsitzman/Documents/Projects/CruxIDE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/CruxIDE.dir/src/utils/FileUtils.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CruxIDE.dir/src/utils/FileUtils.cpp.o -MF CMakeFiles/CruxIDE.dir/src/utils/FileUtils.cpp.o.d -o CMakeFiles/CruxIDE.dir/src/utils/FileUtils.cpp.o -c /Users/alexsitzman/Documents/Projects/CruxIDE/src/utils/FileUtils.cpp

CMakeFiles/CruxIDE.dir/src/utils/FileUtils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/CruxIDE.dir/src/utils/FileUtils.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alexsitzman/Documents/Projects/CruxIDE/src/utils/FileUtils.cpp > CMakeFiles/CruxIDE.dir/src/utils/FileUtils.cpp.i

CMakeFiles/CruxIDE.dir/src/utils/FileUtils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/CruxIDE.dir/src/utils/FileUtils.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alexsitzman/Documents/Projects/CruxIDE/src/utils/FileUtils.cpp -o CMakeFiles/CruxIDE.dir/src/utils/FileUtils.cpp.s

# Object files for target CruxIDE
CruxIDE_OBJECTS = \
"CMakeFiles/CruxIDE.dir/src/core/Core.cpp.o" \
"CMakeFiles/CruxIDE.dir/src/editor/Editor.cpp.o" \
"CMakeFiles/CruxIDE.dir/src/main.cpp.o" \
"CMakeFiles/CruxIDE.dir/src/syntax/SyntaxHighlighter.cpp.o" \
"CMakeFiles/CruxIDE.dir/src/ui/UIManager.cpp.o" \
"CMakeFiles/CruxIDE.dir/src/utils/FileUtils.cpp.o"

# External object files for target CruxIDE
CruxIDE_EXTERNAL_OBJECTS =

CruxIDE: CMakeFiles/CruxIDE.dir/src/core/Core.cpp.o
CruxIDE: CMakeFiles/CruxIDE.dir/src/editor/Editor.cpp.o
CruxIDE: CMakeFiles/CruxIDE.dir/src/main.cpp.o
CruxIDE: CMakeFiles/CruxIDE.dir/src/syntax/SyntaxHighlighter.cpp.o
CruxIDE: CMakeFiles/CruxIDE.dir/src/ui/UIManager.cpp.o
CruxIDE: CMakeFiles/CruxIDE.dir/src/utils/FileUtils.cpp.o
CruxIDE: CMakeFiles/CruxIDE.dir/build.make
CruxIDE: CMakeFiles/CruxIDE.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/alexsitzman/Documents/Projects/CruxIDE/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable CruxIDE"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CruxIDE.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CruxIDE.dir/build: CruxIDE
.PHONY : CMakeFiles/CruxIDE.dir/build

CMakeFiles/CruxIDE.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CruxIDE.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CruxIDE.dir/clean

CMakeFiles/CruxIDE.dir/depend:
	cd /Users/alexsitzman/Documents/Projects/CruxIDE/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/alexsitzman/Documents/Projects/CruxIDE /Users/alexsitzman/Documents/Projects/CruxIDE /Users/alexsitzman/Documents/Projects/CruxIDE/build /Users/alexsitzman/Documents/Projects/CruxIDE/build /Users/alexsitzman/Documents/Projects/CruxIDE/build/CMakeFiles/CruxIDE.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/CruxIDE.dir/depend

