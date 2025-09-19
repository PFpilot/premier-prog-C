#include <stdio.h>
        #define capmaximale 36


int main() {

 int altitude = 0, vitesse = 0, cap = 38; 
 
 int cap3=(cap -3 + capmaximale) %capmaximale;
 int cap2=(cap -2 + capmaximale) %capmaximale;
 int cap1=(cap -1 + capmaximale) %capmaximale;
 int cap4=(cap +1 ) %capmaximale;
 int cap5=(cap +2 ) %capmaximale;
 



    printf("--------------------------------------------------------------\n"                                         );
    printf("    SPEED     |    GS    |    LOC    |   CAT3   |  AP1+2      \n"                                         );
    printf("              |          |           |   DUAL   |  1FD2       \n"                                         );
    printf("              |          |           |          |  A/THR      \n"                                         );
    printf("                                                       __     \n"                                         );
    printf("                        .                 5000        |6-     \n"                                         );
    printf("_______         .       ^        .       ________     | -     \n"                                         );
    printf("|%03d-|       . ___________________ .     |   -|       |2-     \n"       ,vitesse + 30                     );
    printf("|    |                -----              |    |       | -     \n"                                         );
    printf("|   -|                 ---               |   -|       |1-     \n"                                         );
    printf("|    |            10 ---|--- 10       °  |    |       |       \n"                                         );
    printf("|%03d-|                 -|-              >|%03d-|       | -     \n"      ,vitesse + 10, altitude + 5       );
    printf("|    |                --|--           °  |    |       |       \n"                                         );
    printf("|   -|                 -|-               | __|20|     |       \n"                                         );
    printf("-  --|<|     ++++++----[+]----++++++ -<->-|%3d00|     --      \n"       ,altitude                         );
    printf("|%03d-|            |    -|-    |          |   |80|     |       \n"       ,vitesse - 10                     );
    printf("|    |                --|--           ° >|%03d-|       |   /   \n"      ,altitude - 5                     );
    printf("|   -|                 -|-               |    |       | -/    \n"                                         );
    printf("|    |            10 ---|--- 10       °  |   -|       | /08   \n"                                         );
    printf("|%03d-|               =-----=             |    |       |1-     \n"       ,vitesse - 30                      );
    printf("|    |            20 ------- 20          |   -|       | -     \n"                                         );
    printf("|   -|        .___________________.      |    |       |2-     \n"                                         );
    printf("|____|         .     %3d00      .        |___-|       | -     \n"       ,altitude                         );
    printf("                                                      |6-     \n"                                         );
    printf("                °   °  <|>  °   °                     ---     \n"                                         );
    printf("                                          QNH 1013            \n"                                         );
    printf(" LFBD     ______________|______________                       \n"                                         );
    printf(" 110.30  ||  '  |  '  | ◊'  |  '  |  ' |                      \n"                                         );
    printf(" 7.4 NM  |%02d    %02d    %02d    %02d    %02d   |                      \n"    ,cap3, cap2, cap1, cap4, cap5);
    printf("--------------------------------------------------------------\n"                                         );
    return 0;
}
