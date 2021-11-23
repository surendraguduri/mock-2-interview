final:main.o create_matrix.o pattern.o string_com.o tree.o
	gcc main.o create_matrix.o pattern.o string_com.o tree.o -o final
main.o:main.c header.h
	gcc -c main.c 
create_matrix.o:create_matrix.c header.h
	gcc -c create_matrix.c
pattern.o:pattern.c header.h
	gcc -c pattern.c
string_com.o:string_com.c header.h
	gcc -c string_com.c
tree.o:tree.c header.h
	gcc -c tree.c
clean:
	rm *.o final
