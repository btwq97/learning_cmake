# Set the project name
project (project_test)

# Add a library with the above sources
# Add all source files accordingly into this segment
add_library(${PROJECT_NAME} 
    src/adder.c
    src/subtract.c
)

# Create an alias called sub::lib to be used in bin/CMakeLists.txt
add_library(sub::lib ALIAS ${PROJECT_NAME})

# Tells the compiler that ${PROJECT_SOURCE_DIR}/inc is where all the header files are
target_include_directories( ${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/inc
)
