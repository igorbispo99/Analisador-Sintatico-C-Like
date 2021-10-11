// Igor Bispo de Moraes - 170050432
// Tradutores 2021/1

#include "lexical.h"
#include "syntax_tree.h"
#include "symbol_table.h"
#include "parser_lib.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: %s <input file>\n", argv[0]);
        return 0;
    }

    FILE* input_file;
    input_file = fopen(argv[1], "r");

    if (!input_file) {
        printf("Couldn't open %s\n", argv[1]);
        return 0;
    }

    yyin = input_file;
    parse();

    fclose(input_file);
    return 0;
}


