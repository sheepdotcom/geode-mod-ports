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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild

# Utility rule file for result-populate.

# Include any custom commands dependencies for this target.
include CMakeFiles/result-populate.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/result-populate.dir/progress.make

CMakeFiles/result-populate: CMakeFiles/result-populate-complete

CMakeFiles/result-populate-complete: result-populate-prefix/src/result-populate-stamp/result-populate-install
CMakeFiles/result-populate-complete: result-populate-prefix/src/result-populate-stamp/result-populate-mkdir
CMakeFiles/result-populate-complete: result-populate-prefix/src/result-populate-stamp/result-populate-download
CMakeFiles/result-populate-complete: result-populate-prefix/src/result-populate-stamp/result-populate-update
CMakeFiles/result-populate-complete: result-populate-prefix/src/result-populate-stamp/result-populate-patch
CMakeFiles/result-populate-complete: result-populate-prefix/src/result-populate-stamp/result-populate-configure
CMakeFiles/result-populate-complete: result-populate-prefix/src/result-populate-stamp/result-populate-build
CMakeFiles/result-populate-complete: result-populate-prefix/src/result-populate-stamp/result-populate-install
CMakeFiles/result-populate-complete: result-populate-prefix/src/result-populate-stamp/result-populate-test
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'result-populate'"
	/usr/bin/cmake -E make_directory /run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild/CMakeFiles
	/usr/bin/cmake -E touch /run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild/CMakeFiles/result-populate-complete
	/usr/bin/cmake -E touch /run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild/result-populate-prefix/src/result-populate-stamp/result-populate-done

result-populate-prefix/src/result-populate-stamp/result-populate-update:
.PHONY : result-populate-prefix/src/result-populate-stamp/result-populate-update

result-populate-prefix/src/result-populate-stamp/result-populate-build: result-populate-prefix/src/result-populate-stamp/result-populate-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No build step for 'result-populate'"
	cd "/home/sheepdotcom/Link to Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-build" && /usr/bin/cmake -E echo_append
	cd "/home/sheepdotcom/Link to Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-build" && /usr/bin/cmake -E touch /run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild/result-populate-prefix/src/result-populate-stamp/result-populate-build

result-populate-prefix/src/result-populate-stamp/result-populate-configure: result-populate-prefix/tmp/result-populate-cfgcmd.txt
result-populate-prefix/src/result-populate-stamp/result-populate-configure: result-populate-prefix/src/result-populate-stamp/result-populate-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "No configure step for 'result-populate'"
	cd "/home/sheepdotcom/Link to Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-build" && /usr/bin/cmake -E echo_append
	cd "/home/sheepdotcom/Link to Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-build" && /usr/bin/cmake -E touch /run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild/result-populate-prefix/src/result-populate-stamp/result-populate-configure

result-populate-prefix/src/result-populate-stamp/result-populate-download: result-populate-prefix/src/result-populate-stamp/result-populate-gitinfo.txt
result-populate-prefix/src/result-populate-stamp/result-populate-download: result-populate-prefix/src/result-populate-stamp/result-populate-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'result-populate'"
	cd "/home/sheepdotcom/Link to Documents/GeodeMods/MinecraftMenu/build-win/_deps" && /usr/bin/cmake -DCMAKE_MESSAGE_LOG_LEVEL=VERBOSE -P /run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild/result-populate-prefix/tmp/result-populate-gitclone.cmake
	cd "/home/sheepdotcom/Link to Documents/GeodeMods/MinecraftMenu/build-win/_deps" && /usr/bin/cmake -E touch /run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild/result-populate-prefix/src/result-populate-stamp/result-populate-download

result-populate-prefix/src/result-populate-stamp/result-populate-install: result-populate-prefix/src/result-populate-stamp/result-populate-build
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No install step for 'result-populate'"
	cd "/home/sheepdotcom/Link to Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-build" && /usr/bin/cmake -E echo_append
	cd "/home/sheepdotcom/Link to Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-build" && /usr/bin/cmake -E touch /run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild/result-populate-prefix/src/result-populate-stamp/result-populate-install

result-populate-prefix/src/result-populate-stamp/result-populate-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'result-populate'"
	/usr/bin/cmake -Dcfgdir= -P /run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild/result-populate-prefix/tmp/result-populate-mkdirs.cmake
	/usr/bin/cmake -E touch /run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild/result-populate-prefix/src/result-populate-stamp/result-populate-mkdir

result-populate-prefix/src/result-populate-stamp/result-populate-patch: result-populate-prefix/src/result-populate-stamp/result-populate-patch-info.txt
result-populate-prefix/src/result-populate-stamp/result-populate-patch: result-populate-prefix/src/result-populate-stamp/result-populate-update
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No patch step for 'result-populate'"
	/usr/bin/cmake -E echo_append
	/usr/bin/cmake -E touch /run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild/result-populate-prefix/src/result-populate-stamp/result-populate-patch

result-populate-prefix/src/result-populate-stamp/result-populate-update:
.PHONY : result-populate-prefix/src/result-populate-stamp/result-populate-update

result-populate-prefix/src/result-populate-stamp/result-populate-test: result-populate-prefix/src/result-populate-stamp/result-populate-install
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No test step for 'result-populate'"
	cd "/home/sheepdotcom/Link to Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-build" && /usr/bin/cmake -E echo_append
	cd "/home/sheepdotcom/Link to Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-build" && /usr/bin/cmake -E touch /run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild/result-populate-prefix/src/result-populate-stamp/result-populate-test

result-populate-prefix/src/result-populate-stamp/result-populate-update: result-populate-prefix/tmp/result-populate-gitupdate.cmake
result-populate-prefix/src/result-populate-stamp/result-populate-update: result-populate-prefix/src/result-populate-stamp/result-populate-update-info.txt
result-populate-prefix/src/result-populate-stamp/result-populate-update: result-populate-prefix/src/result-populate-stamp/result-populate-download
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Performing update step for 'result-populate'"
	cd "/home/sheepdotcom/Link to Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-src" && /usr/bin/cmake -Dcan_fetch=YES -DCMAKE_MESSAGE_LOG_LEVEL=VERBOSE -P /run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild/result-populate-prefix/tmp/result-populate-gitupdate.cmake

CMakeFiles/result-populate.dir/codegen:
.PHONY : CMakeFiles/result-populate.dir/codegen

result-populate: CMakeFiles/result-populate
result-populate: CMakeFiles/result-populate-complete
result-populate: result-populate-prefix/src/result-populate-stamp/result-populate-build
result-populate: result-populate-prefix/src/result-populate-stamp/result-populate-configure
result-populate: result-populate-prefix/src/result-populate-stamp/result-populate-download
result-populate: result-populate-prefix/src/result-populate-stamp/result-populate-install
result-populate: result-populate-prefix/src/result-populate-stamp/result-populate-mkdir
result-populate: result-populate-prefix/src/result-populate-stamp/result-populate-patch
result-populate: result-populate-prefix/src/result-populate-stamp/result-populate-test
result-populate: result-populate-prefix/src/result-populate-stamp/result-populate-update
result-populate: CMakeFiles/result-populate.dir/build.make
.PHONY : result-populate

# Rule to build all files generated by this target.
CMakeFiles/result-populate.dir/build: result-populate
.PHONY : CMakeFiles/result-populate.dir/build

CMakeFiles/result-populate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/result-populate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/result-populate.dir/clean

CMakeFiles/result-populate.dir/depend:
	cd /run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild /run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild /run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild /run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild /run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/result-subbuild/CMakeFiles/result-populate.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/result-populate.dir/depend

