cmake_minimum_required(VERSION 3.10)
project(C_Basics_Assignment C)

# Set C standard to C11
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Gather all .c files from the src directory
file(GLOB SOURCES "src/*.c")

# Loop through each file to create an executable automatically
foreach(sourceFILE ${SOURCES})
    # Get the filename without the extension (e.g., 01_datatypes)
    get_filename_component(nameEXE ${sourceFILE} NAME_WE)
    
    # Create the executable
    add_executable(${nameEXE} ${sourceFILE})
endforeach()
