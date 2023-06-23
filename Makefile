CXX=g++
CXX_STANDARD=-std=c++20
CXX_FLAGS=-pedantic -Wall -Wextra
SRC_DIR=~/dev/cpp/ex1/
SRC_FILES=main.cpp
EXEC=./a.out


compile_and_run:
	${CXX} ${CXX_STANDARD} ${CXX_FLAGS} ${SRC_DIR}/${SRC_FILES} && ${EXEC}