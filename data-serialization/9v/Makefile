all: fillPatientData.out readPatients.out

fillPatientData.out: fillPatientData.c patient.o patientLinkedList.o fileUtil.h
	gcc fillPatientData.c patient.o patientLinkedList.o -o fillPatientData.out

readPatients.out: readPatients.c patient.o patientLinkedList.o fileUtil.h
	gcc readPatients.c patient.o patientLinkedList.o -o readPatients.out

patient.o: patient.h patient.c
	gcc -c patient.c -o patient.o

patientLinkedList.o: patient.h patientLinkedList.h patientLinkedList.c
	gcc -c patientLinkedList.c -o patientLinkedList.o

clean:
	rm -f *.o *.out