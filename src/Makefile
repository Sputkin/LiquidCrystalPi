PWD := $(shell pwd)

all:
	g++ -fPIC -O -g Print.cpp -c -o Print.o
	g++ -c -fpic LiquidCrystal.cpp -lwiringPi -lpthread
	g++ -shared Print.o -o libLiquidCrystal.so LiquidCrystal.o

clean:
	rm example/*.o
