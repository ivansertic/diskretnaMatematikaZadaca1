cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp ChessPiece.cpp ChessPiece.h Knight.cpp Knight.h Position.cpp Position.h Rook.cpp Rook.h)