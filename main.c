#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio2.h>
#include <windows.h>

void mudarCoresInterfaceAllForOne(int vetorSetaXY[3][3], int corBorda, int corBordaEspecial, int corBiblioteca, int corFundo, int corTexto, int controleSeta){

    limparTexto(50,19,71,21);
    gotoxy(vetorSetaXY[0][0],vetorSetaXY[1][0]);printf("   ");
    bordaEspecial(50,19,67,19,1,corBordaEspecial);
    corInterface(corTexto,corBordaEspecial,1);

    do{
        gotoxy(vetorSetaXY[0][1],vetorSetaXY[1][1]);printf("-->");
        controleSeta = getch();

        if (controleSeta == 0xE0){//Primeira seta da interface, cima e baixo apenas
            controleSeta = getch();
            movimentarSetaGLOBAL(controleSeta,vetorSetaXY,0,4,0,1,0,0,25,36,1);
        }
        else if (controleSeta == 13){//entrando em mudar uma das 4 opções de cores
            //gotoxy(8,16);printf("%d ",vetorSetaXY[2][1]);

            if (vetorSetaXY[2][1] == 1){//mudando a cor da biblioteca de gambiarra
                gotoxy(vetorSetaXY[0][1],vetorSetaXY[1][1]);printf("   ");
                limparTexto(57,23,58,16);
                printarNomesDasCores(corTexto,corBordaEspecial,corBorda,0,1,vetorSetaXY);

                do{
                gotoxy(vetorSetaXY[0][2],vetorSetaXY[1][2]);printf("-->");
                controleSeta = getch();

                if (controleSeta == 0xE0){
                    controleSeta = getch();
                    movimentarSetaGLOBAL(controleSeta,vetorSetaXY,0,1,20,1,57,70,24,38,2);
                }
                else if (controleSeta == 13){
                    //gotoxy(10,16);printf("%d ",vetorSetaXY[2][2]);
                    bibliotecaGambiarra(vetorSetaXY[2][2]);
                    textcolor(corTexto);
                }

                }while(controleSeta != 27);
                controleSeta = reiniciarValoresInterface(corBordaEspecial,corTexto,vetorSetaXY);
            }
            else if (vetorSetaXY[2][1] == 2){// mudando a cor da borda normal
                gotoxy(vetorSetaXY[0][1],vetorSetaXY[1][1]);printf("   ");
                limparTexto(57,23,58,16);
                printarNomesDasCores(corTexto,corBordaEspecial,corBorda,0,2,vetorSetaXY);

                do{
                    gotoxy(vetorSetaXY[0][2],vetorSetaXY[1][2]);printf("-->");
                    controleSeta = getch();

                    if (controleSeta == 0xE0){
                        controleSeta = getch();
                        movimentarSetaGLOBAL(controleSeta,vetorSetaXY,0,1,20,1,57,70,24,38,2);
                    }
                    else if (controleSeta == 13){
                        borda1(1,1,165,42,vetorSetaXY[2][2]);
                        borda1(69,27,14,3,vetorSetaXY[2][2]);

                        for (int i=19,k=11;k<129;){
                            borda1(k,i,29,3,vetorSetaXY[2][2]);
                            i+=3;

                            if (i == 40){
                                i = 19;
                                k+= 117;
                            }
                        }
                        textcolor(corTexto);
                        corBorda = vetorSetaXY[2][2];
                    }

                }while(controleSeta != 27);
                controleSeta = reiniciarValoresInterface(corBordaEspecial,corTexto,vetorSetaXY);
            }
            else if (vetorSetaXY[2][1] == 3){//mudando a cor da bordaEspecial
                gotoxy(vetorSetaXY[0][1],vetorSetaXY[1][1]);printf("   ");
                limparTexto(57,23,58,16);
                printarNomesDasCores(corTexto,corBordaEspecial,corBorda,0,3,vetorSetaXY);

                do{
                    gotoxy(vetorSetaXY[0][2],vetorSetaXY[1][2]);printf("-->");
                    controleSeta = getch();

                    if (controleSeta == 0xE0){
                        controleSeta = getch();
                        movimentarSetaGLOBAL(controleSeta,vetorSetaXY,0,1,20,1,57,70,24,38,2);
                    }
                    else if (controleSeta == 13){
                        corBordaEspecial = vetorSetaXY[2][2];
                        bordaEspecial(69,27,18,1,45,corBordaEspecial);
                        bordaEspecial(50,19,67,19,15,corBordaEspecial);
                        bordaEspecial(5,18,157,22,1,corBordaEspecial);
                        textcolor(corTexto);
                }
            }while(controleSeta != 27);
                controleSeta = reiniciarValoresInterface(corBordaEspecial,corTexto,vetorSetaXY);
        }
        else if (vetorSetaXY[2][1] == 4){//mudando a cor da bordaEspecial
                gotoxy(vetorSetaXY[0][1],vetorSetaXY[1][1]);printf("   ");
                limparTexto(57,23,58,16);
                printarNomesDasCores(corTexto,corBordaEspecial,corBorda,0,4,vetorSetaXY);

                do{
                    gotoxy(vetorSetaXY[0][2],vetorSetaXY[1][2]);printf("-->");
                    controleSeta = getch();

                    if (controleSeta == 0xE0){
                        controleSeta = getch();
                        movimentarSetaGLOBAL(controleSeta,vetorSetaXY,48,1,20,1,57,70,24,38,2);
                    }
                    else if (controleSeta == 13){
                        if (vetorSetaXY[2][2] < 20){
                            corTexto = vetorSetaXY[2][2];
                        }

                        corFundo = vetorSetaXY[2][2];
                        gotoxy(8,16);printf("%d ",vetorSetaXY[2][2]);
                        if (vetorSetaXY[2][2]>=20){
                            corFundo-=20;
                            textbackground(corFundo);
                            gotoxy(1,1);
                            for (int i=1;i<43;i++)//refazer a tela inteira
                                printf("                                                                                                                                                                       ");
                                bibliotecaGambiarra(corBiblioteca);
                                borda1(1,1,165,42,corBorda);
                                bordaEspecial(5,18,157,22,0,corBordaEspecial);
                                borda1(24,14,115,3,15); //borda em baixo do gambiarra

                                for (int i=19,k=11;k<129;){
                                    borda1(k,i,29,3,corBorda);
                                    i+=3;

                                    if (i == 40){
                                        i = 19;
                                        k+= 117;
                                    }
                                }

                                opcoes(corTexto,0);
                                printarNomesDasCores(corTexto,corBordaEspecial,corBorda,0,4,vetorSetaXY);
                                corFundo+=20;
                        }
                        else{
                            corInterface(corTexto,corBordaEspecial,0);
                            opcoes(corTexto,0);
                            printarNomesDasCores(corTexto,corBordaEspecial,corBorda,1,4,vetorSetaXY);
                        }
                        if (corTexto >= 20)
                            corTexto-=20;

                        textcolor(corTexto);
                }
            }while(controleSeta != 27);
                controleSeta = reiniciarValoresInterface(corBordaEspecial,corTexto,vetorSetaXY);
        }
    }

    }while(controleSeta != 27);

    controleSeta = 0;
    limparTexto(50,19,71,21);
    for (int i=19 ,k = 11;k<129;){
        borda1(k,i,29,3,corBorda);
        i+=3;

        if (i==40){
            i = 19;
            k+=39;
        }
    }
    opcoes(corTexto,1);//antes de voltar ao inicio, printar tudo de volta como estava
}

void telaInicial(int corBorda, int corBiblioteca, int corBordaEspecial, int corTexto, int vetorSetaXY[3][3]){
    bibliotecaGambiarra(corBiblioteca);
    borda1(1,1,165,42,corBorda);
    bordaEspecial(5,18,157,22,0,corBordaEspecial);
    borda1(24,14,115,3,15); //borda em baixo do gambiarra

    for (int i=19 ,k = 11;k<129;){
        borda1(k,i,29,3,corBorda);
        i+=3;

        if (i==40){
            i = 19;
            k+=39;
        }
    }

    opcoes(corTexto,1);

    vetorSetaXY[0][0] = 7; //movimentar a seta do inicio
    vetorSetaXY[1][0] = 23;
    vetorSetaXY[2][0] = 1;

    vetorSetaXY[0][1] = 52; //movimentar a primeira seta da interface
    vetorSetaXY[1][1] = 25;
    vetorSetaXY[2][1] = 1;

    vetorSetaXY[0][2] = 53;
    vetorSetaXY[1][2] = 24;
    vetorSetaXY[2][2] = 0;

}

void opcoes(int cor, int control){
    textcolor(cor);

    gotoxy(56,15);printf("%c%c%c%c",27,24,26,25);
    setlocale(LC_ALL,"Portuguese");

    gotoxy(25,15);printf("Pressione as setas do teclado [");
    gotoxy(60,15);printf("] para a movimentação da seta e pressione [Enter] para entrar e [ESC] para sair!");

    gotoxy(12,23);printf("Visitar questões do TheHuxley");
    gotoxy(140,20);printf("Jogos");
    gotoxy(21,20);printf("Exercícios");

    if (control == 1){

        gotoxy(63,20);printf("Artes");
        gotoxy(101,20);printf("Projetos");
        gotoxy(53,23);printf("Mudar cores da interface");
    }
    setlocale(LC_ALL,"C");


}

void movimentarSetaGLOBAL(int seta,int setaXY[3][3], int xVezes, int yVezes, int xContador, int yContador, int xMaximoES, int xMaximoDI, int yMaximoUp, int yMaximoDown, int down){
    if (seta == 72 && yVezes != 0){
        if (setaXY[1][down] > yMaximoUp){
            gotoxy(setaXY[0][down],setaXY[1][down]);printf("   "); //seta para cima
            setaXY[1][down]-=yVezes;
            setaXY[2][down]-=yContador;
        }
    }
    else if (seta == 75 && xVezes != 0){
        if (setaXY[0][down]>xMaximoES){
            gotoxy(setaXY[0][down],setaXY[1][down]);printf("   "); // seta para esquerda
            setaXY[0][down]-=xVezes;
            setaXY[2][down]-=xContador;
        }
    }
    else if (seta == 77 && xVezes != 0){
        if (setaXY[0][down]<xMaximoDI){
            gotoxy(setaXY[0][down],setaXY[1][down]);printf("   "); //seta para direita
            setaXY[0][down]+=xVezes;
            setaXY[2][down]+=xContador;
        }
    }
    else if (seta == 80 && yVezes != 0){
        if (setaXY[1][down]<yMaximoDown){
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

int bibliotecaGambiarra(int cor){
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

void corInterface(int corTexto, int corBordaEspecial, int control){
    if (control == 1)
        bordaEspecial(57,20,57,control,control,15);

    setlocale(LC_ALL,"Portuguese");
    textcolor(corTexto);
    gotoxy(58,21);printf("Escolha as opções abaixo para personalizar a interface!");
    setlocale(LC_ALL,"C");
    if (control == 1){
        bordaEspecial(57,24,57,control,1,corBordaEspecial);
        textcolor(corTexto);
        gotoxy(58,25);printf("Mudar a cor da biblioteca de gambiarra");

        bordaEspecial(57,28,57,control,1,corBordaEspecial);
        textcolor(corTexto);
        gotoxy(58,29);printf("Mudar a cor da borda(Normal)");

        bordaEspecial(57,32,57,control,1,corBordaEspecial);
        textcolor(corTexto);
        gotoxy(58,33);printf("Mudar a cor da borda(Especial)");

        bordaEspecial(57,36,57,control,1,corBordaEspecial);
        textcolor(corTexto);
        gotoxy(58,37);printf("Mudar a cor do Texto/Fundo");
    }
}

void printarNomesDasCores(int corTexto,int corBordaEspecial, int corBordaNormal, int control, int corNomes, int setaXY[3][3]){
    if (control == 0){
        char cores[15][15];
        int right=57,down=24,controleCor=0;

        strcpy(cores[0],"BLACK");
        strcpy(cores[1],"BLUE");
        strcpy(cores[2],"GREEN");
        strcpy(cores[3],"CYAN");
        strcpy(cores[4],"RED");
        strcpy(cores[5],"MAGENTA");
        strcpy(cores[6],"BROWN");
        strcpy(cores[7],"LIGHTGRAY");
        strcpy(cores[8],"DARKGRAY");
        strcpy(cores[9],"LIGHTBLUE");
        strcpy(cores[10],"LIGHTGREEN");
        strcpy(cores[11],"LIGHTCYAN");
        strcpy(cores[12],"LIGHTRED");
        strcpy(cores[13],"LIGHTMAGENTA");
        strcpy(cores[14],"YELLOW");

        for (int i=0;i<15;i++,down++){
            for(int j=0;j<strlen(cores[i]);j++,right++){
                textcolor(controleCor);
                gotoxy(right,down);printf("%c",cores[i][j]);
                Sleep(1);
            }
            if (setaXY[2][1] == 4){
            right = 105;
            gotoxy(right,down);printf("%s",cores[i]);
            }

            right = 57;
            controleCor++;
        }
    }
    if (corNomes == 1){
        bordaEspecial(69,27,27,1,1,corBordaEspecial);
        textcolor(corTexto);
        gotoxy(70,28);printf("< biblioteca de gambiarra");
    }
    else if (corNomes == 2){
        borda1(69,27,14,3,corBordaNormal);
        textcolor(corTexto);
        gotoxy(70,28);printf("< borda normal");
    }
    else if (corNomes == 3){
        bordaEspecial(69,27,18,1,1,corBordaEspecial);
        textcolor(corTexto);
        gotoxy(70,28);printf("< borda Especial");
    }
    else if (corNomes == 4){
        bordaEspecial(69,27,29,1,1,corBordaEspecial);
        textcolor(corTexto);
        gotoxy(70,28);printf("< Texto             Fundo >");
    }
}

int reiniciarValoresInterface(int corBordaEspecial, int corTexto, int vetorSetaXY[3][3]){

    limparTexto(50,19,71,21);
    bordaEspecial(50,19,67,19,1,corBordaEspecial);
    corInterface(corTexto,corBordaEspecial,1);
    vetorSetaXY[0][2] = 53;
    vetorSetaXY[1][2] = 24;
    vetorSetaXY[2][2] = 0;

    return 0;
}

int main(){
    gotoxy(12,15);printf("Expanda o CMD para no minimo a resolucao 1360 x 768 e pressione qualquer tecla para comecar");
    getch();
    limparTexto(12,15,91,1);
    int corTexto=14,corBorda=5,corBordaEspecial=10,corBiblioteca=2,corFundo=0;
    int controleSeta,vetorSetaXY[3][3];

    telaInicial(corBorda, corBiblioteca, corBordaEspecial,corTexto,vetorSetaXY);

    do{ //principal
        gotoxy(vetorSetaXY[0][0],vetorSetaXY[1][0]);printf("-->");
        controleSeta = getch();

        if (controleSeta == 0xE0){
            controleSeta = getch();
            movimentarSetaGLOBAL(controleSeta,vetorSetaXY,39,3,10,1,7,115,23,38,0);
        }
        else if (controleSeta == 13){//saindo do inicial
            if (vetorSetaXY[2][0] == 11){//entrando em Mudar Cores da Interface
                mudarCoresInterfaceAllForOne(vetorSetaXY,corBorda,corBordaEspecial,corBiblioteca,corFundo,corTexto,controleSeta);
                opcoes(corTexto,1);//antes de voltar ao inicio, printar tudo de volta como estava
            }
        }//Mudar cor da interface acaba aqui

    }while(controleSeta!=27); //principal
    //ESC eh 27
    //printf("Hello world!\n");
    return 0;
}
