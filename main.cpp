#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio2.h>
#include <windows.h>
#include <time.h>
#include <MMSystem.h>
#include <thread>
#include <queue>
#include "headers/Credenciais.h"
#include "headers/colisaoMapas.h"
#include "headers/snakeMapa.h"
#include "headers/snakeResto.h"
#include "headers/mudarCoresInterface.h"
#include "headers/interfaceGenerica.h"

using namespace std;

int main(){
    //gotoxy(12,15);printf("Expanda o CMD para no minimo a resolucao 1360 x 768 e pressione qualquer tecla para comecar");
	//getch();
    //PlaySound(TEXT("Sound/applause.wav"),NULL, SND_ASYNC);
    system("mode con:cols=167 lines=42");
    //CONSOLE_CURSOR_INFO cursor = {1, FALSE};
    //SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);

    limparTexto(12,15,91,1);
    int controleSeta,vetorSetaXY[3][4];
    int vetorCores[5]={14/*Texto*/,5/*Borda*/,10/*BordaEspecial*/,2/*Biblioteca*/,0/*Fundo*/};
    telaInicial(vetorCores,vetorSetaXY);
    //snakeGameAllForOne(vetorSetaXY,controleSeta,vetorCores);

    do{ //principal
        gotoxy(vetorSetaXY[0][0],vetorSetaXY[1][0]);printf("-->");
        controleSeta = getch();

        if (controleSeta == 0xE0){
            controleSeta = getch();
            movimentarSetaGLOBAL(controleSeta,vetorSetaXY,39,3,10,1,7,115,23,38,0);
        }
        else if (controleSeta == 13){//saindo do inicial
            //gotoxy(8,16);printf("%d ",vetorSetaXY[2][0]);
            if (vetorSetaXY[2][0] == 11){//entrando em Mudar Cores da Interface
                mudarCoresInterfaceAllForOne(vetorSetaXY,controleSeta,vetorCores);
            }
            else if (vetorSetaXY[2][0] == 31){//snakeGame
                snakeGameAllForOne(vetorSetaXY,controleSeta,vetorCores);
            }
        }
    }while(controleSeta!=27); //principal
    PlaySound(TEXT("seeya.wav"),NULL, SND_ASYNC);
    Sleep(1000);
    //ESC eh 27
    //printf("Hello world!\n");
    return 0;
}
