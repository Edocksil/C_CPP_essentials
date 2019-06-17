#include <stdio.h>

int main(void)
{
int dayOfWeek = 1;
system("chcp 1251");
  system("cls");
  printf("Введіть номер дня тижня: ");
  scanf("%d",&dayOfWeek);
  printf("День тижня: ");
  switch (dayOfWeek)
  {
    case 1:	printf("понеділок"); break;
    case 2: printf("вівторок"); break;
    case 3: printf("середа"); break;
    case 4: printf("четвер"); break;
    case 5: printf("п'ятниця"); break;
    case 6: printf("субота"); break;
    case 7: printf("неділя"); break;
    default: printf("Неіснуючий день тижня"); break;
  }
  getchar();

return 0;
}

