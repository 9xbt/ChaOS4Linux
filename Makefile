all:
	g++ -g -Wall Main.cpp Kernel.cpp Core/Core.cpp Plugs/Console.h Plugs/IO.h Plugs/String.h -o ChaOS2CPP
	./ChaOS2CPP
clean:
	rm ChaOS2CPP
