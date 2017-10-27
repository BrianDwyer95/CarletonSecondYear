OBJ= main.o song.o songLibrary.o track.o trackLibrary.o

a1: $(OBJ)
	g++ -o a2 $(OBJ)

main.o: main.cpp
	g++ -c -std=c++11 main.cpp

song.o: song.cpp song.h
	g++ -c -std=c++11 song.cpp

songLibrary.o: songLibrary.cpp songLibrary.h
	g++ -c -std=c++11 songLibrary.cpp

track.o: track.cpp track.h
	g++ -c -std=c++11 track.cpp

trackLibrary.o: trackLibrary.cpp trackLibrary.h
	g++ -c -std=c++11 trackLibrary.cpp

clean:
	rm -f *.o a1
