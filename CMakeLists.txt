project(boost_log_test CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(Boost_USE_STATIC_LIBS ON)
find_package(Boost 1.62.0 REQUIRED log)

include_directories(${Boost_INCLUDE_DIRS})
add_executable(main main.cpp)

target_link_libraries(main ${Boost_LIBRARIES})

message(STATUS "BOOST LIBRARIES: ${Boost_LIBRARIES}")
