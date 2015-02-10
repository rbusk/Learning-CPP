all: loanmain savingsmain

loanmain: SubmarineLoanMain.o BankAccount.o SubmarineLoan.o
	g++ SubmarineLoanMain.o BankAccount.o SubmarineLoan.o  -o loanmain

savingsmain: SavingsForSailingMain.o BankAccount.o SavingsForSailing.o
	g++ SavingsForSailingMain.o BankAccount.o SavingsForSailing.o -o savingsmain

SubmarineLoanMain.o: SubmarineLoanMain.cpp
	g++ -c SubmarineLoanMain.cpp

SavingsForSailingMain.o: SavingsForSailingMain.cpp
	g++ -c SavingsForSailingMain.cpp

BankAccount.o: BankAccount.cpp
	g++ -c BankAccount.cpp

SubmarineLoan.o: SubmarineLoan.cpp
	g++ -c SubmarineLoan.cpp

SavingsForSailing.o: SavingsForSailing.cpp
	g++ -c SavingsForSailing.cpp

clean:
	rm -f *.o loanmain savingsmain
