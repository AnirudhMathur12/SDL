SRC = src/main.cpp
APP = game
INC = -I/Library/Frameworks/SDL2.framework/Versions/A/Headers -I/Library/Frameworks/SDL2_image.framework/Versions/A/Headers

build:
	g++ $(SRC) -o $(APP) $(INC) -F/Library/Frameworks/ -framework SDL2 -framework SDL2_image
