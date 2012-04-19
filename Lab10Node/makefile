queue.out:	queue.o queuemain.o
		g++ -g -o queue.out queue.o queuemain.o

queue.o:	queue.cpp queue.h
		g++ -c queue.cpp

queuemain.o:	queuemain.cpp queue.cpp queue.h
		g++ -c queuemain.cpp

clean:
		rm *.o queue.out
