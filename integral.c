#include <stdio.h>

int main(){
  char input;
  int fra, til, i;
  double bokser, høyde, output;
  int antall = 100000;
  printf("%s\n", "Laks eller laken?:");
  scanf("%c", &input);
  scanf("%d", &fra);
  scanf("%d", &til);
  bokser = (til - fra)/antall;
  høyde = fra;
  for (i = 0; i < antall; i++) {
    output += høyde*bokser;
    høyde += bokser;
  }
  printf("%lf\n%lf\n", output, bokser);

  return 0;
}
