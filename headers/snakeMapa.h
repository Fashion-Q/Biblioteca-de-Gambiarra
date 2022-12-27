#ifndef SNAKEMAPA_H_INCLUDED
#define SNAKEMAPA_H_INCLUDED

void snakeMapa1(){

    int x=130,y=25,i=0;

    for (;i<6;i++,y--){
        gotoxy(x,y);printf("%c",186);
    }
    x=80;
    y=33;
    for (;i<12;i++,y++){
        if (i == 8)
            y++;
        gotoxy(x,y);printf("%c",186);
    }

    y = 32;
    gotoxy(x++,y);printf("%c",201);
    for (;i<65;i++,x++){
        gotoxy(x,y);printf("%c",205);
    }
    y=28;x=59;
    for(;i<136;i++,x++){
        gotoxy(x,y);printf("%c",205);
    }
    gotoxy(x,y--);printf("%c",188);
    gotoxy(x,y);printf("%c",186);
    x = 100;y=35;
    for(;i<131;i++,x++){
        gotoxy(x,y);printf("%c",205);
    }
}

void snakeMapa2(){

        int x=76,y=39,i;
        for (i=0;i<4;i++,y--){//Desenhando o mapa
        gotoxy(x,y);printf("%c",186);
        }
        y--;

        for (;i<10;i++,y--){
        gotoxy(x,y);printf("%c",186);
        }
        gotoxy(x,y);printf("%c",201);
        x++;

        for (;i<62;i++,x++){
        gotoxy(x,y);printf("%c",205);
        }
        gotoxy(x,y);printf("%c",187);
        y++;

        for (;i<70;i++,y++){
        gotoxy(x,y);printf("%c",186);
        }
        gotoxy(x,y);printf("%c",200);
        x++;

        for (;i<89;i++,x++){
        gotoxy(x,y);printf("%c",205);
        }
        gotoxy(x,y);printf("%c",188);
        y--;

        for (;i<102;i++,y--){
        gotoxy(x,y);printf("%c",186);
        }
        gotoxy(x,y);printf("%c",187);
        x--;

        for (;i<185;i++,x--){
        gotoxy(x,y);printf("%c",205);
        }
        gotoxy(x,y);printf("%c",201);
        y++;
        i++;
        gotoxy(x,y);printf("%c",200);
        i++;
        x++;

        for (;i<210;i++,x++){
        gotoxy(x,y);printf("%c",205);
        }
        gotoxy(x,y);printf("%c",187);
        y++;i++;
        gotoxy(x,y);printf("%c",186);

        y+=2;i++;

        gotoxy(x,y);printf("%c",188);
        i++;x--;

        for (;i<243;i++,x--){
        gotoxy(x,y);printf("%c",205);
        }
        //Agora serão os obstáculos do tubo 1******************
        x = 85;
        y = 39;
        gotoxy(x,y);printf("%c",186);
        y-=2;

        for (;i<249;i++,y--){
            gotoxy(x,y);printf("%c",186);
        }
        gotoxy(x++,y);printf("%c",201);

        for (;i<273;i++,x++){
            gotoxy(x,y);printf("%c",205);
            if (i == 256)
                x+=5;
            if (i == 264)
                x+=5;
        }
        x=128;
        y+=4;
        for (;i<310;i++,x--){
            gotoxy(x,y);printf("%c",205);
        }

        x+=3;
        y-=2;
        for(;i<320;i++,x++){
            gotoxy(x,y);printf("%c",205);
            if(i==314)
                x+=8;
        }
        //Agora serão os obstáculos do tubo 2******************
        gotoxy(137,39);printf("%c",186);
        gotoxy(149,38);printf("%c",186);

        x = 150;
        for (i;i<324;i++,x++){
            gotoxy(x,35);printf("%c",205);
        }
        x++;
        for (i;i<328;i++,x++){
            gotoxy(x,30);printf("%c",205);
        }
        x = 151;
        for(i;i<333;i++,x++){
            gotoxy(x,25);printf("%c",205);
        }
        gotoxy(153,25);printf("%c",188);
        y = 24;
        for(i;i<335;i++,y--){
            gotoxy(153,y);printf("%c",186);
        }

        for(x=140,y=20;i<341;i++,x-=15){

            if (i % 2 == 0){
                y = 22;
                gotoxy(x,y);printf("%c",186);
            }
            else{
                y = 20;
                gotoxy(x,y++);printf("%c",186);
                gotoxy(x,y++);printf("%c",186);
            }
        }
        //gotoxy(153,21);printf("@");
}

void snakeMapa3(int Coli[5], int M[100][2]){

    int x=59,y=34,i=0;

    for(;i < 75;x++,i++){//tubo 1
        gotoxy(x,y);printf("%c",205);
    }
    gotoxy(x,y);printf("%c",188);
    i++;y--;
    for(;i < 85;y--,i++){//tubo 2
        gotoxy(x,y);printf("%c",186);
    }
    gotoxy(x,y);printf("%c",187);
    i++;x--;
    for(;i < 156;x--,i++){//tubo 3
        gotoxy(x,y);printf("%c",205);
    }
    gotoxy(x,y);printf("%c",201);
    i++;y++;
    for(;i < 163;y++,i++){//tubo 4
        gotoxy(x,y);printf("%c",186);
    }
    gotoxy(x,y);printf("%c",200);
    i++;x++;
    for(;i < 170;x++,i++){
        gotoxy(x,y);printf("%c",205);
    }
    x=89;y=25;
    for(;i < 173;y++,i++){
        gotoxy(x,y);printf("%c",186);
    }
    gotoxy(x,y);printf("%c",200);i++;x++;
    for(;i < 213;x++,i++){
        gotoxy(x,y);printf("%c",205);
        if (i == 193)
            x++;
    }
    gotoxy(x,y);printf("%c",188);i++;y--;
    for(;i < 217;y--,i++){
        gotoxy(x,y);printf("%c",186);
    }
    //##############################################################
    //obstaculos
    x=100;y=35;
    for(i=0;i < 2;i++,y++){
        M[i][0] = x;
        M[i][1] = y;
        gotoxy(M[i][0],M[i][1]);printf("%c",186);
    }
    x=134;y=39;
    for(i;i < 4;i++,y--){
        M[i][0] = x;
        M[i][1] = y;
        gotoxy(M[i][0],M[i][1]);printf("%c",186);
    }
    x++;y=33;
    for(i;i < 12;i++,x++){
        M[i][0] = x;
        M[i][1] = y;
        gotoxy(M[i][0],M[i][1]);printf("%c",205);
    }
    x=158;y=24;
    for(i;i < 20;i++,x--){
        M[i][0] = x;
        M[i][1] = y;
        gotoxy(M[i][0],M[i][1]);printf("%c",205);
    }
    x=87;y=23;
    for(i;i < 23;i++,y--){//o chefe
        M[i][0] = x;
        M[i][1] = y;
        gotoxy(M[i][0],M[i][1]);printf("%c",186);
    }
    M[i][0] = x;
    M[i][1] = y;
    gotoxy(M[i][0],M[i][1]);printf("%c",201);
    i++;x++;
    for(i;i < 50;i++,x++){//o chefe
        M[i][0] = x;
        M[i][1] = y;
        gotoxy(M[i][0],M[i][1]);printf("%c",205);
    }
    x=100;y=30;

    for(i;i < 71;i++,x++){
        M[i][0] = x;
        M[i][1] = y;
        gotoxy(M[i][0],M[i][1]);printf("%c",205);
    }

    gotoxy(63,23);printf("@");
    gotoxy(63,32);printf("@");
    /*gotoxy(100,32);printf("@");
    gotoxy(89,29);printf("@");
    getch();
    limparTexto(58,19,103,22);
    for (i=0;i<71;i++){
        gotoxy(M[i][0],M[i][1]);printf("@");
    }*/

}

void snakeMap(int Coli[5], int M[100][2]){

    textcolor(4);

    if (Coli[0] == 1){
        snakeMapa1();
    }
    else if (Coli[0] == 2){
        snakeMapa2();
    }
    else if (Coli[0] == 3){
        snakeMapa3(Coli,M);
    }

}

#endif // SNAKEMAPA_H_INCLUDED
