# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "/home/sheepdotcom/Link to Documents/GeodeMods/MinecraftMenu/build-win/_deps/json-src")
  file(MAKE_DIRECTORY "/home/sheepdotcom/Link to Documents/GeodeMods/MinecraftMenu/build-win/_deps/json-src")
endif()
file(MAKE_DIRECTORY
  "/home/sheepdotcom/Link to Documents/GeodeMods/MinecraftMenu/build-win/_deps/json-build"
  "/run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/json-subbuild/json-populate-prefix"
  "/run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/json-subbuild/json-populate-prefix/tmp"
  "/run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/json-subbuild/json-populate-prefix/src/json-populate-stamp"
  "/run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/json-subbuild/json-populate-prefix/src"
  "/run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/json-subbuild/json-populate-prefix/src/json-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/json-subbuild/json-populate-prefix/src/json-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/run/media/sheepdotcom/Windows/Users/magic/Documents/GeodeMods/MinecraftMenu/build-win/_deps/json-subbuild/json-populate-prefix/src/json-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
