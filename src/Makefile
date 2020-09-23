tokenizer: tokenizer.o main.o history.o
	 cc -o tokenizer tokenizer.o main.o history.o

clean:
	rm -f *.o tokenizer

tokenizer.o: tokenizer.h tokenizer.c

main.o: main.c toeknizer.h history.h

history.o: history.h history.c tokenizer.h
