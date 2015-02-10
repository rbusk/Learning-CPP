all: main

main: main.o BankAccount.o SavingsForSailing.o
	g++ main.o BankAccount.o SavingsForSailing.o -o main

main.o: main.cpp
	g++ -c main.cpp

BankAccount.o: BankAccount.cpp
	g++ -c BankAccount.cpp

SavingsForSailing.o: SavingsForSailing.cpp
	g++ -c SavingsForSailing.cpp

clean:
	rm -f *.o main
