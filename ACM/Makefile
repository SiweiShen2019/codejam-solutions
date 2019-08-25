CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic -g -O2

# Build an executable file named by argument "file" and remove .o file
all: $(file).o
ifeq ($(file), )
	@echo Usage "make file=[file name]".
else
	@make -s $(file).o
	@$(CXX) $(CXXFLAGS) $(file).o -o $(file)
	@rm $(file).o  # no need to remove locally
endif

# Compile .o file
$(file).o: $(file).cpp
	@$(CXX) $(CXXFLAGS) -c $(file).cpp

# Run .cpp files like python scripts
# Compile, build, and run a .cpp file and remove the executable file. 
.PHONY: run
run: all
	@echo Finish compiling.
	@echo =================
	@./$(file)
	@rm $(file)

.PHONY: clean
clean:
	@rm -f *.o
	@find . -maxdepth 1 -type f -executable -delete