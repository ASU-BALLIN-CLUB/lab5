all: CrossReference

CrossReference: main.o Token.o Identifier.o IdentifierBinaryTree.o Int.o LineNumberList.o Literal.o Print.o Real.o Scanner.o String.o
	g++ main.o Token.o Identifier.o IdentifierBinaryTree.o Int.o LineNumberList.o Literal.o Print.o Real.o Scanner.o String.o -o CrossReference
main.o: main.cpp
	g++ -c main.cpp
Identifier.o: Identifier.cpp
	g++ -c Identifier.cpp
IdentifierBinaryTree.o: IdentifierBinaryTree.cpp
	g++ -c IdentifierBinaryTree.cpp
Int.o: Int.cpp
	g++ -c Int.cpp
LineNumberList.o: LineNumberList.cpp
	g++ -c LineNumberList.cpp
Literal.o: Literal.cpp
	g++ -c Literal.cpp
Print.o: Print.cpp
	g++ -c Print.cpp
Real.o: Real.cpp
	g++ -c Real.cpp
Scanner.o: Scanner.cpp
	g++ -c Scanner.cpp
String.o: String.cpp
	g++ -c String.cpp
Token.o: Token.cpp
	g++ -c Token.cpp


clean:
	rm -rf *o CrossReference


