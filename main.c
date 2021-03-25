#include "common.h"
#include "chunk.h"
#include "debug.h"

int main(int argc, const char* argv[]) {
    Chunk chunk;
    initChunk(&chunk);

    int constant = addConstant(&chunk, 1.2);
    writeChunk(&chunk, OP_CONSTANT);
    writeChunk(&chunk, constant);

    int constant2 = addConstant(&chunk, 456);
    writeChunk(&chunk, OP_CONSTANT);
    writeChunk(&chunk, constant2);

    writeChunk(&chunk, OP_RETURN);

    disassembleChunk(&chunk, "TChunk");

    freeChunk(&chunk);

    return 0;
}
