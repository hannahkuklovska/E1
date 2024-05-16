#Makefile pre program na výpočet mtej odmocniny
#Hannah Kuklovská
#Emisia 1

CC = gcc
CFLAGS = -Wall -Wextra -pedantic

# Source files
ZADANIE01_SOURCE = zadanie01.c

# Executables

ZADANIE01_OUTPUT = zadanie01

all: $(ZADANIE01_OUTPUT) 

$(ZADANIE01_OUTPUT) : $(ZADANIE01_SOURCE)
	$(CC) $(CFLAGS) -o $(ZADANIE01_OUTPUT)  $(ZADANIE01_SOURCE)



clean:
	rm -f $(ENDIAM_OUTPUT)