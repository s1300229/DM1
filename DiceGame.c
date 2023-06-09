#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int dc1,dc2;

printf("Rolling dice...\n");
srand(time(NULL));
dc1 = rand() % 6 + 1;
dc2 = rand() % 6 + 1;

printf("Dice 1: %d\n",dc1);
printf("Dice 2: %d\n",dc2);
printf("total value: %d\n",dc1 + dc2);

return 0;
}
