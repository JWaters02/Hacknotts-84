cmake_minimum_required(VERSION 3.17)
project(Hacknotts84)

# Set the C++ standard you wish to use (you could use C++11 or above)
set(CMAKE_CXX_STANDARD 17)

# Manually specify the paths to the SDL2 headers and libraries
set(SDL2_INCLUDE_DIR "C:/SDL2/SDL2/include")
set(SDL2_LIBRARY_DIR "C:/SDL2/SDL2/lib/x64")
set(SDL2_MAIN "C:/SDL2/SDL2/lib/x64/SDL2main.lib") # If needed

set(SDL2_IMAGE_INCLUDE_DIR "C:/SDL2/SDL2_image/include")
set(SDL2_IMAGE_LIBRARY_DIR "C:/SDL2/SDL2_image/lib/x64")

set(SDL2_TTF_INCLUDE_DIR "C:/SDL2/SDL2_ttf/include")
set(SDL2_TTF_LIBRARY_DIR "C:/SDL2/SDL2_ttf/lib/x64")

# Add the include directories for SDL2
include_directories(${SDL2_INCLUDE_DIR} ${SDL2_IMAGE_INCLUDE_DIR} ${SDL2_TTF_INCLUDE_DIR})

# Define the source files for the project
add_executable(${PROJECT_NAME} main.cpp "globals.h" "mainEvents.cpp")

# Add the libraries for SDL2, specifying the exact path to the SDL2 libs
target_link_libraries(${PROJECT_NAME}
        "${SDL2_LIBRARY_DIR}/SDL2.lib"
        "${SDL2_LIBRARY_DIR}/SDL2main.lib" # Only if you're making a GUI application
        "${SDL2_IMAGE_LIBRARY_DIR}/SDL2_image.lib"
        "${SDL2_TTF_LIBRARY_DIR}/SDL2_ttf.lib")

# Copy SDL2.dll, SDL2_image.dll, and SDL2_ttf.dll to the output directory
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${SDL2_LIBRARY_DIR}/SDL2.dll"
        "$<TARGET_FILE_DIR:${PROJECT_NAME}>")
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${SDL2_IMAGE_LIBRARY_DIR}/SDL2_image.dll"
        "$<TARGET_FILE_DIR:${PROJECT_NAME}>")
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${SDL2_TTF_LIBRARY_DIR}/SDL2_ttf.dll"
        "$<TARGET_FILE_DIR:${PROJECT_NAME}>")