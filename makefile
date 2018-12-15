TestMap: TestMap.o
	g++ -g $^ -o $@ -std="c++11"

TestMap.o: TestMap.cpp Map.h Employee.h BookInformation.h
	g++ -g -c -Wall -pedantic $< -o $@ -std="c++11"

.PHONY: clean

clean:
	-rm TestMap.o TestMap
