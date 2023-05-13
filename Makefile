all:
	make build
	./bin/ChaOS2CPP

build:
	g++ -g -Wall src/Main.cpp src/Kernel.cpp src/Core/Core.cpp -o bin/ChaOS2CPP

clean:
	rm bin/ChaOS2CPP
