all: fillPatientData.out readPatients.out

fillPatientData.out: fillPatientData.c patient.h patient.o fileUtil.h
	gcc fillPatientData.c patient.o -o fillPatientData.out

patientLinkedList.o: patientLinkedList.c patientLinkedList.h patient.h
	gcc -c patientLinkedList.c -o patientLinkedList.o

readPatients.out: readPatients.c patient.h patient.o fileUtil.h patientLinkedList.o
	gcc readPatients.c patient.o patientLinkedList.o -o readPatients.out

patient.o: patient.c patient.h
	gcc -c patient.c -o patient.o

clean:
	rm -f *.out *.o