#include <stdio.h>
int main(){
  int god, prestupna = 0;
  printf("Ime Studenta: Zdravko Narancic,Studentski Index: 68/24");
  printf("Unesite vasu godinu rodjenja:");
  scanf("%d",&god);
  if(god % 4 == 0)
  {
    prestupna = god;  
  }
  if(prestupna != 0){
    printf("Godina prestupna);
  }
  printf("Godina NIJE prestupna);
  return 0;
}
