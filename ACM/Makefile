CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic -g


# Build an executable file named by argument "id" and remove .o file
all: print.o
ifeq ($(id), )
	@echo Usage "make id=[OJ id]".
else
	@make -s $(id).o
	@$(CXX) $(CXXFLAGS) $(id).o print.o -o $(id)
	@rm $(id).o  # no need to remove print.o locally
endif

# Compile .o file
$(id).o: $(id).cpp
	@$(CXX) $(CXXFLAGS) -c $(id).cpp

print.o: print.cpp
	@$(CXX) $(CXXFLAGS) -c print.cpp

# Run .cpp files like python scripts
# Compile, build, and run a .cpp file and remove the executable file. 
.PHONY: run
run: all
	@./$(id)
	@rm $(id)

.PHONY: clean
clean:
	@rm *.o