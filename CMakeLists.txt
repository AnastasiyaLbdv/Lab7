cmake_minimum_required(VERSION 3.22.1) 

set(PROJECT_NAME Lab 7)				 	 
project("${PROJECT_NAME}")


set(CMAKE_CXX_STANDARD 17)			 
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

include_directories("inc/")

add_executable("${PROJECT_NAME}" Lab7.cpp inc/Lab7.hpp src/Source.cpp
					
)