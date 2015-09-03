main.o: main.cpp add.h subtract.h
	g++ -Wall main.cpp -o main

clean:
	rm main