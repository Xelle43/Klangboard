ifeq ($(OS), Windows_NT)
    GENERATOR = -G "MinGW Makefiles"
    RUN = build\AZAVDIAP.exe
else
    GENERATOR =
    RUN = ./build/AZAVDIAP
endif

all: build
	$(RUN)

build:
	cmake -B build $(GENERATOR) && cmake --build build

clean:
	rm -rf build

debug_run:

CXX = g++
CXXFLAGS = -Isrc -std=c++17
LIBS = -lraylib -lm -ldl -lpthread -lGL -lrt -lX11

SRC = $(shell find src -name "*.cpp") main.cpp

all:
	$(CXX) $(SRC) -o main $(CXXFLAGS) $(LIBS) && ./main

