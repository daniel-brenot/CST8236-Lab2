rm -rf ./build/*
g++ -c ./src/*.cpp
g++ *.o -o ./build/tubeman -I./headers/ -lsfml-graphics -lsfml-window -lsfml-system
rm -rf ./*.o
./build/tubeman