#include <stdio.h>

int main() {
    int t1, t2, t3;
    float total_time;

    printf("ВЕДІТЬ ТРИ ЗНАЧЕННЯ\n");
    scanf("%d %d %d", &t1, &t2, &t3);

    total_time = t1 + t2 + t3;

    printf("Загальний час, необхідний для з'їдання пирога: %.2f годин\n", total_time);

    return 0;
}
