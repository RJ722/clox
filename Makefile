build:
	gcc main.c chunk.c memory.c value.c debug.c -o clox.exe

clean:
	rm clox.exe

run: build
	./clox.exe
