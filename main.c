#include "common.h"
#include "chunk.h"
#include "debug.h"

int main(int argc, const char* argv[]) {
    Chunk chunk;
    initChunk(&chunk);

    int constant = addConstant(&chunk, 1.2);
    writeChunk(&chunk, OP_CONSTANT, 122);
    writeChunk(&chunk, constant, 122);

    int constant2 = addConstant(&chunk, 456);
    writeChunk(&chunk, OP_CONSTANT, 123);
    writeChunk(&chunk, constant2, 123);

    writeChunk(&chunk, OP_RETURN, 123);

    disassembleChunk(&chunk, "TChunk");

    freeChunk(&chunk);

    return 0;
}
