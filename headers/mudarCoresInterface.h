#ifndef MUDARCORESINTERFACE_H_INCLUDED
#define MUDARCORESINTERFACE_H_INCLUDED

void mudarCoresInterfaceAllForOne(int vetorSetaXY[3][4], int controleSeta, int Cores[5]){

    //PlaySound(TEXT("menuhit.wav"),NULL, SND_ASYNC);
    PlaySound(TEXT("menuhit.wav"),NULL, SND_ASYNC);
    limparTexto(50,19,71,21);
    gotoxy(vetorSetaXY[0][0],vetorSetaXY[1][0]);printf("   ");
    bordaEspecial(50,19,67,19,1,Cores[2]);
    corInterface(Cores,1);
    while(kbhit())controleSeta = getch();

    do{
        gotoxy(vetorSetaXY[0][1],vetorSetaXY[1][1]);printf("-->");
        controleSeta = getch();

        if (controleSeta == 0xE0){
            controleSeta = getch();
            movimentarSetaGLOBAL(controleSeta,vetorSetaXY,0,4,0,1,0,0,25,36,1);
        }
        else if (controleSeta == 13){//entrando em mudar uma das 4 opções de cores

            if (vetorSetaXY[2][1] == 1){//mudando a cor da biblioteca de gambiarra
                PlaySound(TEXT("menuhit.wav"),NULL, SND_ASYNC);
                gotoxy(vetorSetaXY[0][1],vetorSetaXY[1][1]);printf("   ");
                limparTexto(57,23,58,16);
                printarNomesDasCores(Cores,0,1,vetorSetaXY);
                while(kbhit())controleSeta = getch();

                do{
                gotoxy(vetorSetaXY[0][2],vetorSetaXY[1][2]);printf("-->");
                controleSeta = getch();

                if (controleSeta == 0xE0){
                    controleSeta = getch();
                    movimentarSetaGLOBAL(controleSeta,vetorSetaXY,0,1,20,1,57,70,24,38,2);
                }
                else if (controleSeta == 13){
                    PlaySound(TEXT("menuhit.wav"),NULL, SND_ASYNC);
                    Cores[3] = vetorSetaXY[2][2];
                    bibliotecaGambiarra(Cores[3]);
                    textcolor(Cores[0]);
                }

                }while(controleSeta != 27);
                PlaySound(TEXT("seeya.wav"),NULL, SND_ASYNC);
                controleSeta = reiniciarValoresInterface(Cores,vetorSetaXY);
                while(kbhit())controleSeta = getch();
            }
            else if (vetorSetaXY[2][1] == 2){// mudando a cor da borda normal
                PlaySound(TEXT("menuhit.wav"),NULL, SND_ASYNC);
                gotoxy(vetorSetaXY[0][1],vetorSetaXY[1][1]);printf("   ");
                limparTexto(57,23,58,16);
                printarNomesDasCores(Cores,0,2,vetorSetaXY);
                while(kbhit())controleSeta = getch();

                do{
                    gotoxy(vetorSetaXY[0][2],vetorSetaXY[1][2]);printf("-->");
                    controleSeta = getch();

                    if (controleSeta == 0xE0){
                        controleSeta = getch();
                        movimentarSetaGLOBAL(controleSeta,vetorSetaXY,0,1,20,1,57,70,24,38,2);
                    }
                    else if (controleSeta == 13){
                        PlaySound(TEXT("menuhit.wav"),NULL, SND_ASYNC);
                        Cores[1] = vetorSetaXY[2][2];
                        borda1(1,1,165,42,Cores[1]);
                        borda1(69,27,14,3,Cores[1]);

                        for (int i=19,k=11;k<129;){
                            borda1(k,i,29,3,Cores[1]);
                            i+=3;

                            if (i == 40){
                                i = 19;
                                k+= 117;
                            }
                        }
                        textcolor(Cores[0]);
                    }

                }while(controleSeta != 27);
                PlaySound(TEXT("seeya.wav"),NULL, SND_ASYNC);
                controleSeta = reiniciarValoresInterface(Cores,vetorSetaXY);
                while(kbhit())controleSeta = getch();
            }
            else if (vetorSetaXY[2][1] == 3){//mudando a cor da bordaEspecial
                PlaySound(TEXT("menuhit.wav"),NULL, SND_ASYNC);
                gotoxy(vetorSetaXY[0][1],vetorSetaXY[1][1]);printf("   ");
                limparTexto(57,23,58,16);
                printarNomesDasCores(Cores,0,3,vetorSetaXY);
                while(kbhit())controleSeta = getch();

                do{
                    gotoxy(vetorSetaXY[0][2],vetorSetaXY[1][2]);printf("-->");
                    controleSeta = getch();

                    if (controleSeta == 0xE0){
                        controleSeta = getch();
                        movimentarSetaGLOBAL(controleSeta,vetorSetaXY,0,1,20,1,57,70,24,38,2);
                    }
                    else if (controleSeta == 13){
                        PlaySound(TEXT("menuhit.wav"),NULL, SND_ASYNC);
                        Cores[2] = vetorSetaXY[2][2];
                        bordaEspecial(69,27,18,1,45,Cores[2]);
                        bordaEspecial(50,19,67,19,15,Cores[2]);
                        bordaEspecial(5,18,157,22,1,Cores[2]);
                        while(kbhit())controleSeta = getch();
                        textcolor(Cores[0]);
                }
            }while(controleSeta != 27);
                PlaySound(TEXT("seeya.wav"),NULL, SND_ASYNC);
                controleSeta = reiniciarValoresInterface(Cores,vetorSetaXY);
                while(kbhit())controleSeta = getch();
        }
        else if (vetorSetaXY[2][1] == 4){//mudando a cor da bordaEspecial
                PlaySound(TEXT("menuhit.wav"),NULL, SND_ASYNC);
                gotoxy(vetorSetaXY[0][1],vetorSetaXY[1][1]);printf("   ");
                limparTexto(57,23,58,16);
                printarNomesDasCores(Cores,0,4,vetorSetaXY);
                while(kbhit())controleSeta = getch();

                do{
                    gotoxy(vetorSetaXY[0][2],vetorSetaXY[1][2]);printf("-->");
                    controleSeta = getch();

                    if (controleSeta == 0xE0){
                        controleSeta = getch();
                        movimentarSetaGLOBAL(controleSeta,vetorSetaXY,48,1,20,1,57,70,24,38,2);
                    }
                    else if (controleSeta == 13){
                        PlaySound(TEXT("menuhit.wav"),NULL, SND_ASYNC);
                        if (vetorSetaXY[2][2] < 20){
                            Cores[0] = vetorSetaXY[2][2];
                        }
                        Cores[4] = vetorSetaXY[2][2];
                        gotoxy(8,16);printf("%d ",vetorSetaXY[2][2]);
                        if (vetorSetaXY[2][2]>=20){
                            Cores[4]-=20;
                            textbackground(Cores[4]);
                            gotoxy(1,1);
                            //for (int i=1;i<43;i++)//refazer a tela inteira
                                clrscr();
                                //printf("                                                                                                                                                                       ");
                                bibliotecaGambiarra(Cores[3]);
                                borda1(1,1,165,42,Cores[1]);
                                bordaEspecial(5,18,157,22,0,Cores[2]);
                                borda1(24,14,115,3,15); //borda em baixo do gambiarra

                                for (int i=19,k=11;k<129;){
                                    borda1(k,i,29,3,Cores[1]);
                                    i+=3;

                                    if (i == 40){
                                        i = 19;
                                        k+= 117;
                                    }
                                }

                                opcoes(Cores[0],0);
                                printarNomesDasCores(Cores,0,4,vetorSetaXY);
                                Cores[4]+=20;
                        }
                        else{
                            corInterface(Cores,0);
                            opcoes(Cores[0],0);
                            printarNomesDasCores(Cores,1,4,vetorSetaXY);
                        }
                        if (Cores[4] >= 20)
                            Cores[4]-=20;

                        textcolor(Cores[0]);
                        while(kbhit())controleSeta = getch();
                }
            }while(controleSeta != 27);
                PlaySound(TEXT("seeya.wav"),NULL, SND_ASYNC);
                controleSeta = reiniciarValoresInterface(Cores,vetorSetaXY);
                while(kbhit())controleSeta = getch();
        }
    }
    }while(controleSeta != 27);
    PlaySound(TEXT("seeya.wav"),NULL, SND_ASYNC);

    controleSeta = 0;
    limparTexto(50,19,71,21);
    for (int i=19 ,k = 11;k<129;){
        borda1(k,i,29,3,Cores[1]);
        i+=3;

        if (i==40){
            i = 19;
            k+=39;
        }
    }
    opcoes(Cores[0],1);//antes de voltar ao inicio, printar tudo de volta como estava
}

void corInterface(int Cores[5], int control){
    if (control == 1)
        bordaEspecial(57,20,57,control,control,15);

    setlocale(LC_ALL,"Portuguese");
    textcolor(Cores[0]);
    gotoxy(58,21);printf("Escolha as opções abaixo para personalizar a interface!");
    setlocale(LC_ALL,"C");
    if (control == 1){
        bordaEspecial(57,24,57,control,1,Cores[2]);
        textcolor(Cores[0]);
        gotoxy(58,25);printf("Mudar a cor da biblioteca de gambiarra");

        bordaEspecial(57,28,57,control,1,Cores[2]);
        textcolor(Cores[0]);
        gotoxy(58,29);printf("Mudar a cor da borda(Normal)");

        bordaEspecial(57,32,57,control,1,Cores[2]);
        textcolor(Cores[0]);
        gotoxy(58,33);printf("Mudar a cor da borda(Especial)");

        bordaEspecial(57,36,57,control,1,Cores[2]);
        textcolor(Cores[0]);
        gotoxy(58,37);printf("Mudar a cor do Texto/Fundo");
    }
}

void printarNomesDasCores(int Cores[5], int control, int corNomes, int setaXY[3][4]){
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
        bordaEspecial(69,27,27,1,1,Cores[2]);
        textcolor(Cores[0]);
        gotoxy(70,28);printf("< biblioteca de gambiarra");
    }
    else if (corNomes == 2){
        borda1(69,27,14,3,Cores[1]);
        textcolor(Cores[0]);
        gotoxy(70,28);printf("< borda normal");
    }
    else if (corNomes == 3){
        bordaEspecial(69,27,18,1,1,Cores[2]);
        textcolor(Cores[0]);
        gotoxy(70,28);printf("< borda Especial");
    }
    else if (corNomes == 4){
        bordaEspecial(69,27,29,1,1,Cores[2]);
        textcolor(Cores[0]);
        gotoxy(70,28);printf("< Texto             Fundo >");
    }
}

int reiniciarValoresInterface(int Cores[5], int vetorSetaXY[3][4]){

    limparTexto(50,19,71,21);
    bordaEspecial(50,19,67,19,1,Cores[2]);
    corInterface(Cores,1);
    vetorSetaXY[0][2] = 53;
    vetorSetaXY[1][2] = 24;
    vetorSetaXY[2][2] = 0;

    return 0;
}

#endif // MUDARCORESINTERFACE_H_INCLUDED
