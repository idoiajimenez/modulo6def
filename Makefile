all: bin doc

bin: objects
	gcc obj/main.o obj/stack.o obj/armstrong.o -Wall -o bin/is_armstrong_number -lm 
main.o : main.c
	gcc -c main.c -pedantic -Wall -o obj/main.o
stack.o: stack.c
	gcc -c stack.c -pedantic -Wall -o obj/stack.o
armstrong.o: armstrong.c
	gcc -c armstrong.c -pedantic -Wall -o obj/armstrong.o

objects: main.o stack.o armstrong.o

clean: clean-doc clean-obj clean-bin clean-reports

clean-reports:
	rm -rf reports/tests/*
clean-obj:
	rm -f obj/*
clean-bin:
	rm -f bin/*
	rm -rf tests/build/*
clean-doc:
	rm -rf html latex
doc: clean-doc
	doxygen
cppcheck: 
	cppcheck --enable=all --inconclusive *.c 

cppcheck-xml: 
	cppcheck --enable=all --inconclusive --xml --xml-version=2 *.c 2> reports/cppcheck/report.xml

tests: armstrong.o stack.o
	gcc tests/armstrong/is_armstrong_number.c obj/armstrong.o obj/stack.o -lm -lcmocka -o tests/build/is_armstrong_number

tests-xml: clean armstrong.o stack.o
	gcc tests/armstrong/is_armstrong_number.c obj/armstrong.o obj/stack.o -lm -lcmocka -o tests/build/is_armstrong_number
	CMOCKA_XML_FILE=reports/tests/%g.xml CMOCKA_MESSAGE_OUTPUT=xml ./tests/build/is_armstrong_number || true
