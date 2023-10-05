project(litecpp)

if(MSVC)
  set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /NODEFAULTLIB")
endif()

include_directories("include/litecpp")

add_executable(test "test.cpp")
target_link_libraries(test winmm)
