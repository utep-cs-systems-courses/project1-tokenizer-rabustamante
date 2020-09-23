tokenizer: tokenizer.o main.c history.o
	 cc -o tokenizer tokenizer.o main.c history.o

clean:
	rm -f *.o tokenizer

tokenizer.o: tokenizer.h toenizer.c

main.o: main.c toeknizer.h history.h

history.o: history.h history.c tokenizer.h
