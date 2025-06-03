all: serializePatients.out deserializePatients.out serializeBinaryFile.out deserializeBinaryFile.out

fileUtil.o: fileUtil.h fileUtil.c
	gcc -c fileUtil.c -o fileUtil.o

patient.o: patient.h patient.c
	gcc -c patient.c -o patient.o

linkedlist.o: linkedlist.h linkedlist.c patient.h
	gcc -c linkedlist.c -o linkedlist.o

serializePatients.out: serializePatients.c fileUtil.o patient.o
	gcc serializePatients.c fileUtil.o patient.o -o serializePatients.out

deserializePatients.out: deserializePatients.c fileUtil.o patient.o linkedlist.o
	gcc deserializePatients.c fileUtil.o patient.o linkedlist.o -o deserializePatients.out

serializeBinaryFile.out: serializeBinaryFile.c fileUtil.o patient.o linkedlist.o
	gcc serializeBinaryFile.c fileUtil.o patient.o linkedlist.o -o serializeBinaryFile.out

deserializeBinaryFile.out: deserializeBinaryFile.c fileUtil.o patient.o linkedlist.o
	gcc deserializeBinaryFile.c fileUtil.o patient.o linkedlist.o -o deserializeBinaryFile.out

clean:
	rm -f *.o *.out