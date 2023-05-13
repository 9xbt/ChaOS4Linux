all:
	make build
	./ChaOS2CPP

build:
	g++ -g -Wall Main.cpp Kernel.cpp Core/Core.cpp -o ChaOS2CPP

clean:
	rm ChaOS2CPP
