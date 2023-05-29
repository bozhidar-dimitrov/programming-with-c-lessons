all: fillPatientData.out readPatients.out

fillPatientData.out: patient.h fillPatientData.c patient.o fileUtil.h
	gcc fillPatientData.c patient.o -o fillPatientData.out

readPatients.out: patient.h readPatients.c patient.o fileUtil.h patientLinkedList.o
	gcc readPatients.c patient.o patientLinkedList.o -o readPatients.out

patient.o: patient.h patient.c
	gcc -c patient.c -o patient.o

patientLinkedList.o: patientLinkedList.c patientLinkedList.h patient.h
	gcc -c patientLinkedList.c -o patientLinkedList.o

clean: 
	rm -f *.o *.out