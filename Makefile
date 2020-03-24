##
## EPITECH PROJECT, 2019
## 106bombyx_2019
## File description:
## Makefile
##

SRC = $(shell find . -not -path "*lib/*" -name '*.cpp')
OUT = 106bombyx
CFLAGS = -g3 -Og -g -I./include

$(OUT): re

clean:
	rm -rf *.o

fclean:
	rm -rf $(OUT)

re: fclean
	g++ $(SRC) $(CFLAGS) -o $(OUT)