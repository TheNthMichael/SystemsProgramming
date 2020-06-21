1. gcc -c mysum.c # compile mysum.c into mysum.o
2. ar rcs libmylib.a mysum.o # create static link library with member mysum.o
3. gcc -static main.c -L. -libmylib # static compile-link main.c with libmylib.a as link library
4. ./a.out # run the program

