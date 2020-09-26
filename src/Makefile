tokenizer.exe: tokenizer.o main.o history.o
	 cc -o tokenizer.ex tokenizer.o main.o history.o
clean:
	rm -f *.o tokenizer.ext

tokenizer.o: tokenizer.h tokenizer.c

main.o: main.c tokenizer.h history.h

history.o: history.h history.c tokenizer.h
