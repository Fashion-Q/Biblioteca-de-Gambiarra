#ifndef COLISAOMAPAS_H_INCLUDED
#define COLISAOMAPAS_H_INCLUDED
#include <queue>

int colisaoMapa1(int Coli[5], int Cores[5], int vett[5], int x, int y){

    if (x == 80 && y >= 32 && y != 35){
        vett[1] = false;
        Coli[4] = false;
        return 0;
    }
    else if (y == 28 && x <= 130){
        vett[1] = false;
        Coli[4] = false;
        return 0;
    }
    else if (x == 129 && y == 26){
        vett[1] = false;
        Coli[4] = true;
        return 0;
    }
    else if (x == 130 && y < 29 && y != 26){
        vett[1] = false;
        Coli[4] = false;
        return 0;
    }
    else if (x >= 80 && x <= 133 && y == 32){
        vett[1] = false;
        Coli[4] = false;
        return 0;
    }

}

int colisaoMapa2(int Coli[5], int Cores[5], int vett[5], int a, int b){
    if (Coli[2] == 1){
            if (Coli[3] < 13)
                Coli[3]++;
            else if (Coli[3] == 13){
                textcolor(4);
                gotoxy(76,35);printf("%c",186);
                textcolor(Cores[0]);
                Coli[3]++;
            }
            if (a == 130){
                Coli[3] = 0;
                Coli[2]++;
                textcolor(4);
                gotoxy(129,38);printf("%c",186);
                gotoxy(129,39);printf("%c",186);
                textcolor(Cores[0]);
            }
            else if (a == 76){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            else if (b == 28){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            else if (a == 129 && b != 39 && b != 38){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            else if (a == 85 && b != 38 && b != 30 && b != 29){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            else if (b == 31 && (a >= 85 && a <= 93)){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            else if (b == 31 && (a >= 99 && a <= 106)){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            else if (b == 31 && (a >= 112 && a <= 119)){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            else if (b == 33 && (a >= 94 &&a <= 98)){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            else if (b == 33 && (a >=107 && a <= 111)){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            else if (b == 35 && (a >= 92 && a <= 128)){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            //***********************************1
        }
        else if(Coli[2] == 2){
            if (Coli[3] < 13)
                Coli[3]++;
            else if (Coli[3] == 13){
                textcolor(4);
                gotoxy(129,38);printf("%c",186);
                gotoxy(129,39);printf("%c",186);
                textcolor(Cores[0]);
                Coli[3]++;
            }
            if (b == 36){
                Coli[2]++;
                Coli[3] = 0;
                textcolor(4);
                for (int i=150;i<159;i++){
                    gotoxy(i,37);printf("%c",205);
                }
                textcolor(Cores[0]);
            }
            else if (a == 129){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            else if (b == 37 && a != 150 && a != 151 && a != 152 && a != 153 && a != 154 && a != 155 && a != 156 && a != 157 && a != 158){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            else if (a == 137 && b == 39){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            else if (a == 149 && b == 38){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            //***********************************2
        }
        else if (Coli[2] == 3){
            if (Coli[3] < 13)
                Coli[3]++;
            else if (Coli[3] == 13){
                textcolor(4);
                for (int i=150;i<159;i++){
                    gotoxy(i,37);printf("%c",205);
                }
                textcolor(Cores[0]);
                Coli[3]++;
            }
            if (a == 148){
                Coli[2]++;
                Coli[3] = 0;
                textcolor(4);
                gotoxy(149,20);printf("%c",186);
                gotoxy(149,21);printf("%c",186);
                gotoxy(149,22);printf("%c",186);
                textcolor(Cores[0]);
            }
            else if (a == 149 && b != 20 && b != 21 && b != 22){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            else if (b == 37){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            else if (b == 35 && a <= 153){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            else if (b == 30 && a >= 155){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            else if (b == 25 && a != 150 && a != 156 && a != 157 && a != 158){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            else if (a == 153 && (b == 23 || b == 24)){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
           //***********************************3
        }
        else if (Coli[2] == 4){
            if (Coli[3] < 13)
                Coli[3]++;
            else if (Coli[3] == 13){
                textcolor(4);
                gotoxy(149,20);printf("%c",186);
                gotoxy(149,21);printf("%c",186);
                gotoxy(149,22);printf("%c",186);
                textcolor(Cores[0]);
                Coli[3]++;
            }

            if (b == 25){
                Coli[2]++;
                Coli[3] = 0;
                textcolor(4);
                for (int i=64; i > 58;i--){
                    gotoxy(i,24);printf("%c",205);
                }
                textcolor(Cores[0]);
            }
            else if (a == 149){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            else if ((b == 23 || b == 24) && a != 64 && a != 63 && a != 62 && a != 61 && a != 60 && a != 59){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            else if (a == 140 && (b == 21 || b == 20)){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            else if (a == 125 && b == 22){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            else if (a == 110 && (b == 21 || b == 20)){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            else if (a == 95 && b == 22){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            else if (a == 80 && (b == 21 || b == 20)){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            else if (a == 65 && b == 22){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            //***********************************4
        }
        else if (Coli[2] == 5){
            if (Coli[3] < 13)
                Coli[3]++;
            else if (Coli[3] == 13){
                textcolor(4);
                for (int i=64; i > 58;i--){
                    gotoxy(i,24);printf("%c",205);
                }
                textcolor(Cores[0]);
                Coli[3]++;
            }
            if (a == 90){
                vett[1] = false;
                Coli[4] = true;
                return 0;
            }
            if (b == 24 || b == 27){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
            else if (b == 25 && a == 89){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
        }
}

int colisaoMapa3(int Coli[5], int Cores[5], int vett[5], int x, int y, int M[100][2]){

    if (Coli[2] == 1){
        if (x == 135){
            Coli[2]++;
        }
        else if (y == 34){
            vett[1] = false;
            Coli[4] = false;
            return 0;
        }
    }
    else if (Coli[2] == 2){
        if (x == 133 && y < 24){
            Coli[2]++;
        }
        else if (x == 133 && y > 34){
            Coli[2]--;
        }
        else if (x == 134 && y <= 34 && y >= 24){
            vett[1] = false;
            Coli[4] = false;
            return 0;
        }
    }
    else if (Coli[2] == 3){
        if (x < 63 && y == 24){
            Coli[2]++;
        }
        else if (x == 135){
            Coli[2]--;
        }
        else if (y == 24){
            vett[1] = false;
            Coli[4] = false;
            return 0;
        }
    }
    else if (Coli[2] == 4){
        if (y == 32){
            Coli[2]++;
        }
        else if (y == 23){
            Coli[2]--;
        }
        else if (x >= 63){
            vett[1] = false;
            Coli[4] = false;
            return 0;
        }
    }
    else if (Coli[2] == 5){
        if (x < 63 && y == 31){
            Coli[2]--;
        }
        else if (x == 110 && y == 27){
            vett[1] = false;
            Coli[4] = true;
            return 0;
        }
        else if (x >= 63 && x <= 69 && y == 31){
            vett[1] = false;
            Coli[4] = false;
            return 0;
        }
        else if (y == 24){
            vett[1] = false;
            Coli[4] = false;
            return 0;
        }
        else if (x == 134){
            vett[1] = false;
            Coli[4] = false;
            return 0;
        }
        else if (x == 89 && y >= 25 && y <= 28){
            vett[1] = false;
            Coli[4] = false;
            return 0;
        }
        else if (x == 130 && y >= 25 && y <= 28){
            vett[1] = false;
            Coli[4] = false;
            return 0;
        }
        else if (y == 28 && x > 89 && x < 130 && x != 110){
            vett[1] = false;
            Coli[4] = false;
            return 0;
        }
        else if (y > 24 && y < 31 && x == 63){
            vett[1] = false;
            Coli[4] = false;
            return 0;
        }
    }

}



#endif // COLISAOMAPAS_H_INCLUDED
