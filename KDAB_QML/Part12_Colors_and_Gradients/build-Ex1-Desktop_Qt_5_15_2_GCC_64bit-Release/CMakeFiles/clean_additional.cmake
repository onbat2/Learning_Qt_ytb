# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles/Ex1_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Ex1_autogen.dir/ParseCache.txt"
  "Ex1_autogen"
  )
endif()
