useradd: useradd.o
	g++ useradd.o -o useradd

useradd.o: useradd.cpp
	g++ -c useradd.cpp 
