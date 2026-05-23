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

