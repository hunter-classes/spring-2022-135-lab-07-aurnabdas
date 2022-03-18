main: main.o indent.o unindent.o
	g++ -o main main.o indent.o unindent.o
main.o: main.cpp indent.h unindent.h
	g++ -c main.cpp

indent.o: indent.cpp indent.h
	g++ -c indent.cpp

unindent.o: unindent.cpp unindent.h
	g++ -c unindent.cpp

clean: 
	rm main.o indent.o unindent.o
