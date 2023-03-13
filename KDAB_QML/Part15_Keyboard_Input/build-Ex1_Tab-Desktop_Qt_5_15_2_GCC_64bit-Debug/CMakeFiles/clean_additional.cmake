# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Ex1_Tab_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Ex1_Tab_autogen.dir/ParseCache.txt"
  "Ex1_Tab_autogen"
  )
endif()
