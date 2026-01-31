cmake_minimum_required(VERSION 3.10)
project(MYOpencv)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(OpenCV REQUIRED)

add_executable(opencv_demo
    src/main.cpp
    src/MyOpencvApi.cpp
)

target_include_directories(opencv_demo PRIVATE
    ${PROJECT_SOURCE_DIR}/include
    ${OpenCV_INCLUDE_DIRS}
)

target_link_libraries(opencv_demo
    ${OpenCV_LIBS}
)
