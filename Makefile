all: data_types arithmetic_operators boolean_operators references

CFLAGS = -c

data_types: data_types.o
	$(CXX) data_types.o -o data_types
data_types.o: data_types.cc
	$(CXX) $(CFLAGS) data_types.cc
references: references.o
	$(CXX) references.o -o references
references.o: references.cc
	$(CXX) $(CFLAGS) references.cc
boolean_operators: boolean_operators.o
	$(CXX) boolean_operators.o -o boolean_operators
boolean_operators.o: boolean_operators.cc
	$(CXX) $(CFLAGS) boolean_operators.cc
arithmetic_operators: arithmetic_operators.o
	$(CXX) arithmetic_operators.o -o arithmetic_operators
arithmetic_operators.o: arithmetic_operators.cc
	$(CXX) $(CFLAGS) arithmetic_operators.cc
clean:
	$(RM) *.o data_types boolean_operators arithmetic_operators references core

















#NO FUNCIONA PORQUE SOLO PUEDE HABER UNA FUNCIÓN MAIN EN EL PROYECTO
#CC=g++ #declarar una variable
#Evita tener que escribir el compilador y permite cambiarlo fácilmente
#CFLAGS=-c -Wall#Opciones de compilador: -c para compilar -Wall para escribir todos los mensajes de error
#all: target compilacion: dependencia
#all:	compilacion 

#compilacion:	boolean_operators.o references.o data_types.o arithmetic_operators.o #Si terminan en .o son objetos y actúan como dependencias en este caso
	#$(CC) boolean_operators.o references.o data_types.o arithmetic_operators.o -o boolean_operators references data_types arithmetic_operators
#signo dólar para llamar variable
#boolean_operators.o:	boolean_operators.cc 
	#$(CC) $(CFLAGS) boolean_operators.cc
#references.o:    references.cc
	#$(CC)$(CFLAGS) references.cc
#arithmetic_operators.o:    arithmetic_operators.cc
	#$(CC)$(CFLAGS) arithmetic_operators.cc
#data_types.o:	data_types.cc
	#$(CC)$(CFLAGS) data_types.cc
#Borra todo los .o creados
#clean:
	#rm -rf *o compilacion
