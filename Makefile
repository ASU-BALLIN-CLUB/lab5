CrossReference: Identifier.o IdentifierBinaryTree.o Int.o LineNumberList.o Literal.o main.o Print.o Real.o Scanner.o String.o Token.o  
	g++  main.o Scanner.o Print.o Token.o -o CrossReference
Identifier.o: Identifier.cpp Identifier.h
	g++ -c Identifier.cpp
IdentifierBinaryTree.o: IdentifierBinaryTree.cpp IdentifierBinaryTree.h
	g++ -c IdentifierBinaryTree.cpp
Int.o: Int.cpp Int.h
	g++ -c Int.cpp
LineNumberList.o: LineNumberList.cpp LineNumberList.h
	g++ -c LineNumberList.cpp
Literal.o: Literal.cpp Literal.h
	g++ -c Literal.cpp Literal.h
main.o: main.cpp common.h
	g++ -c main.cpp
Print.o: Print.cpp Print.h
	g++ -c Print.cpp
Real.o: Real.cpp Real.h
	g++ -c Real.cpp
Scanner.o: Scanner.cpp Scanner.h
	g++ -c Scanner.cpp
String.o: String.cpp String.h
	g++ -c String.cpp
Token.o: Token.cpp Token.h
	g++ -c Token.cpp


clean:
	rm CrossReference Identifier.o IdentifierBinaryTree.o Int.o LineNumberList.o Literal.o main.o Print.o Real.o Scanner.o String.o Token.o
Literal.h.gch
