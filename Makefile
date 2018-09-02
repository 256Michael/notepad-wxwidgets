CXX = g++
CXXFLAGS = -Wall -I. $(shell wx-config-gtk3 --cxxflags) -c
LIBS = $(shell wx-config-gtk3 --libs)
target = notepad
src = src/notepadapp.cpp
objects = obj/notepadapp.o

all:$(target)

$(target):$(objects)
	$(CXX) $(LIBS) $^ -o $@

$(objects):$(src)
	mkdir obj
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm *.o $(target)
