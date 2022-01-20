# -*- MakeFile -*-

# This is a Makefile for the GNU C compiler.

# Procedure
# target: dependencies
#	action

# Compiler Variable
CC = gcc

# Variable for the compile process
CFLAGS = -c -Wall

# Look for .exe name and builds the necessary files (main = main.exe)
all: main

main: 180122_CLang_Global_Variables_in_Multi_File_Project.o main1.o global.o main2.o
	$(CC) 180122_CLang_Global_Variables_in_Multi_File_Project.o main1.o global.o main2.o -o main

180122_CLang_Global_Variables_in_Multi_File_Project.o: 180122_CLang_Global_Variables_in_Multi_File_Project.c global.h
	$(CC) $(CFLAGS) 180122_CLang_Global_Variables_in_Multi_File_Project.c

global.o: global.c
	$(CC) $(CFLAGS) global.c

main1.o: main1.c global.h
	$(CC) $(CFLAGS) main1.c

main2.o: main2.c global.h
	$(CC) $(CFLAGS) main2.c

# To remove the object files and the executable files
# Without -f, if files not present in the directory it will give error message. 
# With -f, error message is suppressed
clean: 
	rm -f *.o *.s main
