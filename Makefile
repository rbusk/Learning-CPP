all: main

main: main.o BankAccount.o
	g++ main.o BankAccount.o -o main

main.o: main.cpp
	g++ -c main.cpp

BankAccount.o: BankAccount.cpp
	g++ -c BankAccount.cpp

clean:
	rm -f *.o main
