project(binary_test)

# Create the executable
add_executable(${PROJECT_NAME} main.c)

# Link the header only library from project using it's alias sub::lib
# This will cause the include directories for that target to be added to this project
target_link_libraries(${PROJECT_NAME}
    sub::lib
)

