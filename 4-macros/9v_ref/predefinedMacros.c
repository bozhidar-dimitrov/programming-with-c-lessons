#include <stdio.h>

//Predefined macros
//__FILE__ - текущия файл, който се обработва от препроцесора
//__LINE__ - текущата линия от код, на която е поставено макрото
//__DATE__ - текущата дата, на която е препроцеснат файла
//__TIME__ - текущото време, на което е препроцеснат файла

int main(void) {

  printf("%s\n", __FILE__);
  printf("%d\n", __LINE__);
  printf("%s\n", __DATE__);
  printf("%s\n", __TIME__);

  return 0;
}