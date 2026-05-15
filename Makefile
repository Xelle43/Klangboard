CXX = g++
CXXFLAGS = -Isrc -std=c++17
LIBS = -lraylib -lm -ldl -lpthread -lGL -lrt -lX11

SRC = $(shell find src -name "*.cpp") main.cpp

all:
	$(CXX) $(SRC) -o main $(CXXFLAGS) $(LIBS) && ./main