all:
	g++ -o main main.cpp conta.cpp contaCorrente.cpp contaPoupanca.cpp cliente.cpp
	./main

clean:
	rm -f main main-debug