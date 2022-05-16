#include<stdio.h>
#include<unistd.h>

void ascii_baer(int farbe){
        farbe=farbe%6;
        int array_blinker[]={0, 2, 1, 5, 3, 4, 0, 2, 1, 5, 3, 4, 0, 2, 1, 5, 3, 4, 0, 2, 1, 5, 3, 4, 0, 2, 1, 5, 3, 4,};

        printf("\e[1;1H\e[2J");

        printf("\x1b[30m\x1b[47m                                                           \x1b[0m");
        printf("\n\x1b[47m  \x1b[30m\x1b[%im    :''._..---.._.'';                                  \x1b[47m  \x1b[0m", 41+array_blinker[farbe+0]);
        printf("\n\x1b[47m  \x1b[30m\x1b[%im    `.             .'                                  \x1b[47m  \x1b[0m", 41+array_blinker[farbe+1]);
        printf("\n\x1b[47m  \x1b[30m\x1b[%im    .'    ^   ^    `.                                  \x1b[47m  \x1b[0m", 41+array_blinker[farbe+2]);
        printf("\n\x1b[47m  \x1b[30m\x1b[%im   :      a   a      :                 __....._        \x1b[47m  \x1b[0m", 41+array_blinker[farbe+3]);
        printf("\n\x1b[47m  \x1b[30m\x1b[%im   :     _.-0-._     :---'''''-....--''        '.      \x1b[47m  \x1b[0m", 41+array_blinker[farbe+4]);
        printf("\n\x1b[47m  \x1b[30m\x1b[%im    :  .'   :   `.  :                          `,`.    \x1b[47m  \x1b[0m", 41+array_blinker[farbe+5]);
        printf("\n\x1b[47m  \x1b[30m\x1b[%im     `.: '--'--' :.'                             ; ;   \x1b[47m  \x1b[0m", 41+array_blinker[farbe+6]);
        printf("\n\x1b[47m  \x1b[30m\x1b[%im      : `._`-'_.'                                ;.'   \x1b[47m  \x1b[0m", 41+array_blinker[farbe+7]);
        printf("\n\x1b[47m  \x1b[30m\x1b[%im      `.   '''                                   ;     \x1b[47m  \x1b[0m", 41+array_blinker[farbe+8]);
        printf("\n\x1b[47m  \x1b[30m\x1b[%im       `.               '                        ;     \x1b[47m  \x1b[0m", 41+array_blinker[farbe+9]);
        printf("\n\x1b[47m  \x1b[30m\x1b[%im        `.     `        :           `            ;     \x1b[47m  \x1b[0m", 41+array_blinker[farbe+10]);
        printf("\n\x1b[47m  \x1b[30m\x1b[%im         .`.    ;       ;           :           ;      \x1b[47m  \x1b[0m", 41+array_blinker[farbe+11]);
        printf("\n\x1b[47m  \x1b[30m\x1b[%im       .'    `-.'      ;            :          ;`.     \x1b[47m  \x1b[0m", 41+array_blinker[farbe+12]);
        printf("\n\x1b[47m  \x1b[30m\x1b[%im   __.'      .'      .'              :        ;   `.   \x1b[47m  \x1b[0m", 41+array_blinker[farbe+13]);
        printf("\n\x1b[47m  \x1b[30m\x1b[%im .'      __.'      .'`--..__      _._.'      ;      ;  \x1b[47m  \x1b[0m", 41+array_blinker[farbe+14]);
        printf("\n\x1b[47m  \x1b[30m\x1b[%im `......'        .'         `''''`.'        ;......-'  \x1b[47m  \x1b[0m", 41+array_blinker[farbe+15]);
        printf("\n\x1b[47m  \x1b[30m\x1b[%im       `.......-'                 `........'           \x1b[47m  \x1b[0m", 41+array_blinker[farbe+16]);
        printf("\n\x1b[30m\x1b[47m                                                           \x1b[0m");
        printf("\n");
}

int main () {
        printf("\e[1;1H\e[2J");
        int i;
        for (i=50; i>0; i--) {
                ascii_baer(i);
                usleep(100000);
        }

        printf("\n\n");
        printf("\x1b[0mArt by Joan G. Stark\n");

        return 0;
}
