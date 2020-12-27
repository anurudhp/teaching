all:

%.out: %.cpp
	g++ -ftemplate-depth=2001 -Wall -O2 $^ -o $@

clean:
	@rm -f *.out

.PHONY: clean
