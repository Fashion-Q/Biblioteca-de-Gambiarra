#ifndef INTERFACEGENERICA_H_INCLUDED
#define INTERFACEGENERICA_H_INCLUDED

void telaInicial(int Cores[5], int vetorSetaXY[3][4]){
    bibliotecaGambiarra(Cores[3]);
    borda1(1,1,165,42,Cores[1]);
    bordaEspecial(5,18,157,22,0,Cores[2]);
    borda1(24,14,115,3,15); //borda em baixo do gambiarra

    for (int i=19 ,k = 11;k<129;){
        borda1(k,i,29,3,Cores[1]);
        i+=3;

        if (i==40){
            i = 19;
            k+=39;
        }
    }
    opcoes(Cores[0],1);

    vetorSetaXY[0][0] = 7; //movimentar a seta do inicio
    vetorSetaXY[1][0] = 23;
    vetorSetaXY[2][0] = 1;

    vetorSetaXY[0][1] = 52; //movimentar a primeira seta da interface
    vetorSetaXY[1][1] = 25;
    vetorSetaXY[2][1] = 1;

    vetorSetaXY[0][2] = 53;
    vetorSetaXY[1][2] = 24;
    vetorSetaXY[2][2] = 0;

    vetorSetaXY[0][3] = true;
}

void opcoes(int cor, int control){
    textcolor(cor);

    gotoxy(56,15);printf("%c%c%c%c",29,24,26,25);
    //printf("%c%c%c%c",27,24,26,25);
    setlocale(LC_ALL,"Portuguese");

    gotoxy(25,15);printf("Pressione as setas do teclado [");
    gotoxy(60,15);printf("] para a movimentação da seta e pressione [Enter] para entrar e [ESC] para sair!");

    //gotoxy(12,23);printf("Visitar questões do TheHuxley");
    gotoxy(140,20);printf("Jogos");
    gotoxy(138,23);printf("Snake Life");
    gotoxy(21,20);printf("Exercícios");

    if (control == 1){

        gotoxy(63,20);printf("Artes");
        gotoxy(101,20);printf("Projetos");
        gotoxy(53,23);printf("Mudar cores da interface");
    }
    setlocale(LC_ALL,"C");
}

void movimentarSetaGLOBAL(int seta,int setaXY[3][4], int xVezes, int yVezes, int xContador, int yContador, int xMaximoES, int xMaximoDI, int yMaximoUp, int yMaximoDown, int down){
    if (seta == 72 && yVezes != 0){
        if (setaXY[1][down] > yMaximoUp){
            if (setaXY[0][3] == true)
                PlaySound(TEXT("menuclick.wav"),NULL, SND_ASYNC);
            gotoxy(setaXY[0][down],setaXY[1][down]);printf("   "); //seta para cima
            setaXY[1][down]-=yVezes;
            setaXY[2][down]-=yContador;
        }
    }
    else if (seta == 75 && xVezes != 0){
        if (setaXY[0][down]>xMaximoES){
            if (setaXY[0][3] == true)
                PlaySound(TEXT("menuclick.wav"),NULL, SND_ASYNC);
            gotoxy(setaXY[0][down],setaXY[1][down]);printf("   "); // seta para esquerda
            setaXY[0][down]-=xVezes;
            setaXY[2][down]-=xContador;
        }
    }
    else if (seta == 77 && xVezes != 0){
        if (setaXY[0][down]<xMaximoDI){
            if (setaXY[0][3] == true)
                PlaySound(TEXT("menuclick.wav"),NULL, SND_ASYNC);
            gotoxy(setaXY[0][down],setaXY[1][down]);printf("   "); //seta para direita
            setaXY[0][down]+=xVezes;
            setaXY[2][down]+=xContador;
        }
    }
    else if (seta == 80 && yVezes != 0){
        if (setaXY[1][down]<yMaximoDown){
            if (setaXY[0][3] == true)
                PlaySound(TEXT("menuclick.wav"),NULL, SND_ASYNC);
            gotoxy(setaXY[0][down],setaXY[1][down]);printf("   "); //seta para baixo
            setaXY[1][down]+=yVezes;
            setaXY[2][down]+=yContador;
        }
    }
    else{
    }
}

void limparTexto(int x, int y, int xVezes, int yVezes){
    for (int j=0;j<yVezes;j++){
        gotoxy(x,y);
        for (int i=0;i<xVezes;i++)
            printf(" ");
        y++;
    }
}

void borda1(int x, int y, int xVezes, int yVezes, int cor){
    int i,j;
    textcolor(cor);

        gotoxy(x,y);
        printf("%c",201);

        for (i=0;i<xVezes;i++)
            printf("%c",205);
        printf("%c",187);

        xVezes+=x + 1;
        y++;
        gotoxy(x,y);
        j = 2;

        for (i=y;j<yVezes;i++,j++){
            gotoxy(x,i);
            printf("%c",186);
            gotoxy(xVezes,i);
            printf("%c",186);
    }

    gotoxy(x,i);
    printf("%c",200);
    gotoxy(xVezes,i);
    printf("%c",188);
    gotoxy(x+1,i);

    xVezes = xVezes - x - 1;

    for (i=0;i<xVezes;i++)
        printf("%c",205);
}

void bordaEspecial (int x, int y, int xVezes, int yVezes, int MilGrau, int cor){
    textcolor(cor);
    if (xVezes % 2 != 0){
        xVezes++;
    }
        int bugVezes = x + (xVezes / 2);

        int esquerda = bugVezes,direita = bugVezes - 1;

        for (int i= bugVezes;i!= x;i--){
            gotoxy(esquerda--,y);
            printf("%c",205);

            gotoxy(direita++,y);
            printf("%c",205);

            Sleep(MilGrau);
        }

        gotoxy(x,y);
        printf("%c",201);
        gotoxy((x + xVezes - 1),y);
        printf("%c",187);
        y++;

        for (int i=y,j=0;j<yVezes;i++,j++){
            gotoxy(x,i);
            printf("%c",186);

            gotoxy(direita,i);
            printf("%c",186);
            Sleep(MilGrau);
        }

        gotoxy(x,(y + yVezes));
        printf("%c",200);
        gotoxy((x + xVezes - 1),(y + yVezes));
        printf("%c",188);

        esquerda = x + 1;
        direita = x + xVezes - 2;
        //printf("%d",xVezes);
        //getch();
        y--;
        for (int i= bugVezes;i!= x;i--){
            gotoxy(esquerda++,(y + yVezes + 1));
            if (esquerda != (bugVezes+1))
                printf("%c",205);

            gotoxy(direita--,(y + yVezes + 1));
            if (direita != (bugVezes-2))
                printf("%c",205);

            Sleep(MilGrau);
        }
}

void bibliotecaGambiarra(int cor){
    textcolor(cor);

    gotoxy(28,5);printf(" _     _ _     _ _       _                       _                              _     _                      ");
    gotoxy(28,6);printf("| |   (_) |   | (_)     | |                     | |                            | |   (_)                     ");
    gotoxy(28,7);printf("| |__  _| |__ | |_  ___ | |_ ___  ___ __ _    __| | ___    __ _  __ _ _ __ ___ | |__  _  __ _ _ __ _ __ __ _ ");
    gotoxy(28,8);printf("| '_ \\| | '_ \\| | |/ _ \\| __/ _ \\/ __/ _` |  / _` |/ _ \\  / _` |/ _` | '_ ` _ \\| '_ \\| |/ _` | '__| '__/ _` |");
    gotoxy(28,9);printf("| |_) | | |_) | | | (_) | ||  __/ (_| (_| | ( (_| |  __/ ( (_| | (_| | | | | | | |_) | | (_| | |  | | | (_| |");
    gotoxy(28,10);printf("|_.__/|_|_.__/|_|_|\\___/ \\__\\___|\\___\\__,_|  \\__,_|\\___|  \\__, |\\__,_|_| |_| |_|_.__/|_|\\__,_|_|  |_|  \\__,_|");
    gotoxy(28,11);printf("                                                           __/ |                                             ");
    gotoxy(28,12);printf("                                                          |___/                                              ");
}

#endif // INTERFACEGENERICA_H_INCLUDED
