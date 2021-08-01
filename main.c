#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio2.h>

void opcoes(){

    gotoxy(64,15);printf("%c%c%c%c",27,24,26,25);
    setlocale(LC_ALL,"Portuguese");

    gotoxy(33,15);printf("Pressione as setas do teclado [");
    gotoxy(68,15);printf("] para a movimentação da seta e pressione [Enter] para entrar!");
    gotoxy(12,20);printf("Visitar questões do TheHuxley");
    gotoxy(12,23);printf("Mudar configurações do Menu");

}

int movimentarCeta(int seta,int setaXY[]){
    if (seta == 72){
        if (setaXY[1]>20){
            gotoxy(setaXY[0],setaXY[1]);printf("   "); //seta para cima
            setaXY[1]-=3;
            setaXY[2]-=1;
        }
    }
    else if (seta == 75){
        if (setaXY[0]>7){
            gotoxy(setaXY[0],setaXY[1]);printf("   "); // seta para esquerda
            setaXY[0]-=39;
            setaXY[2]-=10;
        }
    }
    else if (seta == 77){
        if (setaXY[0]<115){
            gotoxy(setaXY[0],setaXY[1]);printf("   "); //seta para direita
            setaXY[0]+=39;
            setaXY[2]+=10;
        }
    }
    else if (seta == 80){
        if (setaXY[1]<38){
            gotoxy(setaXY[0],setaXY[1]);printf("   "); //seta para baixo
            setaXY[1]+=3;
            setaXY[2]+=1;
        }
    }
    else{
    }

}

void limparTexto(int texto,int x,int y){
    gotoxy(x,y);
    for (int i=0;i<texto;i++)
        printf(" ");
}

void borda1(int controle,int x, int y, int xVezes, int yVezes){
    int cor=controle,i,j;
    textcolor(6);

    do{
        if (controle != -1){
            scanf("%d",&cor);
            textcolor(cor);
        }

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
    y--;

}while (cor != -1);
}

void bibliotecaGambiarra(int controle){

    int cor = controle;
    textcolor(10);
    do{
        if(controle != -1){
            scanf("%d",&cor);
            textcolor(cor);
        }
    gotoxy(28,5);printf(" _     _ _     _ _       _                       _                              _     _                      ");
    gotoxy(28,6);printf("| |   (_) |   | (_)     | |                     | |                            | |   (_)                     ");
    gotoxy(28,7);printf("| |__  _| |__ | |_  ___ | |_ ___  ___ __ _    __| | ___    __ _  __ _ _ __ ___ | |__  _  __ _ _ __ _ __ __ _ ");
    gotoxy(28,8);printf("| '_ \\| | '_ \\| | |/ _ \\| __/ _ \\/ __/ _` |  / _` |/ _ \\  / _` |/ _` | '_ ` _ \\| '_ \\| |/ _` | '__| '__/ _` |");
    gotoxy(28,9);printf("| |_) | | |_) | | | (_) | ||  __/ (_| (_| | ( (_| |  __/ ( (_| | (_| | | | | | | |_) | | (_| | |  | | | (_| |");
    gotoxy(28,10);printf("|_.__/|_|_.__/|_|_|\\___/ \\__\\___|\\___\\__,_|  \\__,_|\\___|  \\__, |\\__,_|_| |_| |_|_.__/|_|\\__,_|_|  |_|  \\__,_|");
    gotoxy(28,11);printf("                                                           __/ |                                             ");
    gotoxy(28,12);printf("                                                          |___/                                              ");
    }while(cor!=-1);

}

int main(){
    //setlocale(LC_ALL,"portuguese");
    gotoxy(12,15);printf("Expanda o CMD para no minimo a resolucao 1360 x 768 e pressione qualquer tecla para comecar");
    getch();
    bibliotecaGambiarra(-1);
    limparTexto(91,12,15);
    borda1(-1,1,1,165,42);
    borda1(-1,5,18,157,23);
    borda1(-1,32,14,97,3); //borda em baixo do gambiarra

    for (int i=19 ,k = 11;k<129;){
        borda1(-1,k,i,29,3);
        i+=3;

        if (i==40){
            i = 19;
            k+=39;
        }
    }

    textcolor(14);
    opcoes();

    int controleSeta,n=1,vetorSetaXY[3]={7,20,1};
    do{
        gotoxy(vetorSetaXY[0],vetorSetaXY[1]);printf("-->");
        controleSeta = getch();

        if (controleSeta == 0xE0){
            controleSeta = getch();
            movimentarCeta(controleSeta,vetorSetaXY);
        }
        if (controleSeta == 13){
            gotoxy(5,16);printf("%d ",vetorSetaXY[2]);

        }

    }while(controleSeta!=48);

    printf("Hello world!\n");
    return 0;
}
