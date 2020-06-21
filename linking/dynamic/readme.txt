1. gcc -c fPIC mysum.c # compile to Position Independent Code mysum.o
2. gcc -shared -o libmylib.so mysum.o # create shared libmylib.so with mysum.o
3. gcc main.c -L. -lmylib # generate a.out using shared library libmylib.so
4. export LD_LIBRARY_PATH=./ # we export the LD_LIBRARY to the director where we are running a.out (./a.out)
5. ./a.out # run a.out ld will load libmylib.so

