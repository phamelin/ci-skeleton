macro(ADD_DOCTEST TEST_NAME)
  	add_executable(${TEST_NAME} ${ARGN})
	add_test(NAME ${TEST_NAME} COMMAND $<TARGET_FILE:${TEST_NAME}>)
    add_sanitizers(${TEST_NAME})
endmacro()

# Include doctest header file(s)
include_directories(${DOCTEST_INCLUDE_DIR})
include_directories(../include)

add_doctest(test-skeleton test-skeleton.cpp)
target_link_libraries(test-skeleton skeleton)

