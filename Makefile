all:
	g++ -g -Wall Main.cpp Kernel.cpp Core/Core.cpp -o ChaOS2CPP
	./ChaOS2CPP
clean:
	rm ChaOS2CPP
