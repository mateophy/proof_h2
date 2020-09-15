CXX=g++
CXXFLAGS=-fsanitize=undefined -fsanitize=signed-integer-overflow -fsanitize=address -g

all : 1.x 2.x test1a test2a
%.x : %.cpp
	$(CXX)  $(CXXFLAGS) $< -o $@

test1a : 1.x
	./1.x 24321
test2a : 1.x
	./2.x 41
clean:
	rm -rf *.x *.x.dSy* a.out
