cmake_minimum_required(VERSION 3.20)

project(CppNetworkAnalyzer)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(network_analyzer
    src/main.cpp
    src/Packet.cpp
    src/TcpPacket.cpp
    src/UdpPacket.cpp
)

target_include_directories(network_analyzer PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)