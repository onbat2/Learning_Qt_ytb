# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Ex2_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Ex2_autogen.dir/ParseCache.txt"
  "Ex2_autogen"
  )
endif()
