SRC = $(wildcard src/*.cpp)
APP = "fotm"

All: $(APP)
	echo Done

$(APP): $(SRC)
	g++ -o $(APP) $(SRC) -lncurses -std=c++11

test: $(APP)
	./$(APP) debug
