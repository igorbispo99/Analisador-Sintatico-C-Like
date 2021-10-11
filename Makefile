# Igor Bispo de Moraes - 170050432
# Tradutores 2021/1

LEX=flex
YACC = bison
CFLAGS = -g -I "lib/" -Wall
OBJ = lexical.o parser.o symbol_table.o syntax_tree.o main.o
DEPS = lexical.h parser_lib.h symbol_table.h syntax_tree.h

all: bin/parser

bin/parser: obj/parser.o obj/lexical.o obj/main.o obj/symbol_table.o obj/syntax_tree.o
	mkdir -p bin
	gcc -o $@ $^ $(CFLAGS)

src/parser.c: src/parser.y
#	bison -o $@ -d $^ --debug -Wcounterexamples
	bison -o $@ -d $^

src/lexical.c: src/lexical.l
	flex -o $@ $^

obj/symbol_table.o: src/symbol_table.c lib/symbol_table.h
	mkdir -p obj
	gcc -c -o $@ $< $(CFLAGS)

obj/syntax_tree.o: src/syntax_tree.c lib/syntax_tree.h
	mkdir -p obj
	gcc -c -o $@ $< $(CFLAGS)

obj/lexical.o: src/lexical.c lib/lexical.h
	mkdir -p obj
	gcc -c -o $@ $< $(CFLAGS)

obj/parser.o: src/parser.c
	mkdir -p obj
	gcc -c -o $@ $< $(CFLAGS)

obj/main.o: src/main.c
	gcc -c -o $@ $< $(CFLAGS)

.PHONY: clean

clean:
	rm -rf obj
	rm -rf bin
	rm src/lexical.c
	rm src/parser.c

