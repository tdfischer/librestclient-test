all: test

test: main.c
			g++ $< -o $@ -lrestclient-cpp
