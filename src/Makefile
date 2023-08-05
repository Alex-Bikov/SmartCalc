CC= gcc 
CFLAGS= -Wall -Wextra -Werror -std=c11
LIB_NAME = s21_smartcalc
TEST= test.c
OS := $(shell uname -s)
OBJ = ofther.c parce.c polca.c

ifeq ($(OS), Darwin)
    TEST_FLAGS = -lcheck
else
	TEST_FLAGS = -lcheck -lpthread -pthread -lrt -lm -lsubunit
endif

all: $(LIB_NAME).a

test: clean
		$(CC) $(TEST_FLAGS) $(CFLAGS) $(OBJ) $(TEST) -o test -g
		./test

gcov_report: clean
		$(CC) --coverage $(TEST_FLAGS) $(CFLAGS) $(OBJ) $(TEST) -o test
		
		./test
		lcov -t "test" -o test.info -c -d . 
		genhtml -o report test.info
		open report/index.html

$(LIB_NAME).a: clean
		$(CC) $(CFLAGS) $(OBJ) -c 
		ar rcs $(LIB_NAME).a *.o

leak:
	CK_FORK=no leaks --atExit -- ./test 

linter:
	cp ../materials/linters/.clang-format ..
	clang-format -i *.c *.h *.c *.h
	clang-format -n *.c *.h *.c *.h
	rm -rf ../.clang-format

push:
	git add .
	git commit -m check
	git push origin develop

rebuild:
	make clean
	make all

clean:
	rm -rf *.a *.so *.out *.o report *.gc* *.info *.txt *.cmake test *.gch *.pdf *.tar  
	rm -rf  *.html *.css test.info test.dSYM report

build: $(LIB_NAME).a
	rm -rf calc
	mkdir calc
	cd calc && qmake ../../src/Q1/Q1.pro && make

install: build
	cd calc; make
	open calc/Q1.app

uninstall:
	rm -rf calc

dvi:
	doxygen
	open html/index.html

dist: build
	tar  -zcf$(LIB_NAME).tar calc