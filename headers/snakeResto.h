#ifndef SKANERESTO_H_INCLUDED
#define SKANERESTO_H_INCLUDED
#include <thread>
#include <queue>
using namespace std;

int reiniciarValoresSnake(int Cores[5], int vetorSetaXY[3][4]){
    limparTexto(9,26,46,14);
    vetorSetaXY[0][0] = 8;
    vetorSetaXY[1][0] = 21;
    vetorSetaXY[2][0] = 1;
    return 0;
}

void menuSnakeRepetirMusica(int Cores[5], int vetorSetaXY[3][4]){

    gotoxy(vetorSetaXY[0][0],vetorSetaXY[1][0]);printf("   ");
    bordaEspecial(9,26,46,12,0,15);
    vetorSetaXY[0][0] = 10;
    vetorSetaXY[1][0] = 28;
    vetorSetaXY[2][0] = 1;

    for(int x=14,y=27,xVezes=38,yVezes=1,i=1;x<20;i++,y+=3){
        bordaEspecial(x,y,xVezes,yVezes,0,Cores[2]);
        if(i == 4){
            i = 0;
            y = 17;
            x+=23;
        }
    }
    textcolor(Cores[0]);

    setlocale(LC_ALL,"Portuguese");
    gotoxy(24,28);printf("TheFatRat - Unity");
    gotoxy(18,31);printf("Mandragora - Vapo Vapo (Remix)");
    gotoxy(19,34);printf("Tribalista - Velha Infância");
    gotoxy(19,37);printf("Snake Eyes (Feint feat. CoMa)");
    setlocale(LC_ALL,"C");

}

void threadParaComecar(int v[3][4]){

    setlocale(LC_ALL,"Portuguese");int i=0, j=0;
    do{
        if (i >= 0 && i <= 50){
            if (i == 0){
               gotoxy(91,26);printf("Pressione qualquer tecla para começar!");
            }
            Sleep(10);
            i++;
        }
        else if (j >=0 && j <= 30){
            if (j == 0){
                gotoxy(91,26);printf("                                      ");
            }
            Sleep(10);
            j++;
        }
        else{
            i=0;
            j=0;
        }

    }while(v[1][3] != true);
    setlocale(LC_ALL,"C");
    limparTexto(91,26,38,1);
    gotoxy(104,26);printf("CHEGADA!");

    Sleep(50);
}

void direcaoSnake(int snake,int v[6], int vet[5]){

    if (snake == 72 && v[0] != 2 && v[0] != 8 && vet[0] == true){
        //snake para cima
        if (v[0] == 6){
            v[3] = false;
            v[5] = 6;
        }
        else{
            v[3] = false;
            v[5] = 4;
        }
        Sleep(2);
        v[4] = false;
        v[0] = 8;
        v[3] = true;
    }
    else if (snake == 75 && v[0] != 6 && v[0] != 4 && vet[0] == true){
        // snake para esquerda
        if (v[0] == 8){
            v[5] = 8;
        }
        else{
            v[5] = 2;
        }
        Sleep(2);
        v[0] = 4;
        v[4] = false;
    }
    else if (snake == 77 && v[0] != 4 && v[0] != 6 && vet[0] == true){
        //snake para direita
        if (v[0] == 8){
            v[5] = 8;
        }
        else{
            v[5] = 2;
        }
        Sleep(2);
        v[0] = 6;
        v[4] = false;
    }
    else if (snake == 80 && v[0] != 8 && v[0] != 2 && vet[0] == true){
        //snake para baixo
        if (v[0] == 6){
            v[3] = false;
            v[5] = 6;
        }
        else{
            v[3] = false;
            v[5] = 4;
        }
        Sleep(2);
        v[4] = false;
        v[0] = 2;
        v[3] = true;
    }
    else{
    }
    vet[0] = false;
}

void winDefeat(bool wDef, int Coli[5]){
    int i=0,j=0,contador=0;
    gotoxy(91,26);printf("                                      ");
    setlocale(LC_ALL,"Portuguese");
    textcolor(15);
    if (wDef){
    do{
        if (i >= 0 && i <= 50){
            if (i == 0){
                gotoxy(104,26);printf("Você ganhou!");
            }
            Sleep(10);
            i++;
        }
        else if (j >= 0 && j <= 30){
            if (j == 0){
                gotoxy(104,26);printf("            ");
            }
            Sleep(10);
            j++;
        }
        else{
            i=0;j=0;
        }
        contador++;
    }while(contador < 400 && Coli[4] == -1);
    Sleep(10);
    }
    else{
    do{
        if (i >= 0 && i <= 50){
            if (i == 0){
                gotoxy(104,26);printf("Você perdeu!");
            }
            Sleep(10);
            i++;
        }
        else if (j >= 0 && j <= 30){
            if (j == 0){
                gotoxy(104,26);printf("            ");
            }
            Sleep(10);
            j++;
        }
        else{
            i=0;j=0;
        }
        contador++;
    }while(contador < 400 && Coli[4] == -1);
    Sleep(10);
    }
    gotoxy(92,26);printf("Pressione qualquer tecla para sair!");
    setlocale(LC_ALL,"C");
}

void menuSnakeGame(int Cores[5]){

    limparTexto(6,19,154,22);
    bordaEspecial(7,19,50,20,0,Cores[2]);//Borda do Menu
    bordaEspecial(58,19,102,20,0,4);//Borda de Colisão da Snake Life

    for(int x=12,y=20,xVezes=18,yVezes=1,i=1;x<36;i++,y+=3){
        bordaEspecial(x,y,xVezes,yVezes,0,Cores[2]);
        if(i == 2){
            i = 0;
            y = 17;
            x+=23;
        }
    }
    textcolor(Cores[0]);
    gotoxy(18,21);printf("Jogar");
    gotoxy(36,21);printf("Sobre Snake Life");
    setlocale(LC_ALL,"Portuguese");
    gotoxy(14,24);printf("Editar Música");
    setlocale(LC_ALL,"C");
    gotoxy(38,24);printf("Editar Level");

}

int snakeColisao(queue <int> x, queue<int> y,int vett[5], int Coli[5], int Cores[5], int M[100][2]){

    int t,a,b;//t = pegar o índice ATUAL do vetor da snake
    t = x.size();                       // a = pegar o índice (a,?)
                                        // b = pegar o índice (?,b)
                                        //Coli[0] = mapa,Coli[2] = TUBO
    t--;
    a = x.back();
    b = y.back();
    for (int i=0;i<t-1;i++){
        if (a == x.front())
            if (b == y.front()){
                vett[1] = false;
                Coli[4] = false;
                return 0;
            }
        x.pop();
        y.pop();
    }

    if(Coli[0]== 1){
        colisaoMapa1(Coli,Cores,vett,a,b);
    }
    else if (Coli[0] == 2){
        colisaoMapa2(Coli,Cores,vett,a,b);
    }
    else if (Coli[0] == 3){
        colisaoMapa3(Coli,Cores,vett,a,b,M);
    }

}

void snakeStart(int v[6], int vet[5], int Coli[5], int Cores[5], int M[100][2]){

    v[1] = 77;
    v[2] = 35;
    queue <int> x,y;

    for (int i=65;i<78;i++)
        x.push(i);
    for (int i=0;i<13;i++)
        y.push(35);


    do{

        if (v[0] == 8 && v[2] > 19 && v[3] == true){
            if (v[4] == true){
            gotoxy(x.front(),y.front());printf(" ");
            x.pop();
            y.pop();
            gotoxy(v[1],--v[2]);
            printf("%c",186);
            x.push(v[1]);
            y.push(v[2]);
            vet[0] = true;
            thread snakeColi(snakeColisao,x,y,vet,Coli,Cores,M);
            Sleep(vet[2]);
            if (vet[4] == true){
                vet[2] = 100;
                vet[4] = false;
            }
            snakeColi.join();
            }
            else{
                if (v[5] == 4){
                    //gotoxy(x.front(),y.front());printf(" ");
                    //x.pop();
                   //y.pop();
                    gotoxy(v[1],v[2]);
                    printf("%c",200);
                    //x.push(v[1]);
                    //y.push(v[2]);
                    vet[4] = true;
                    vet[2]=150;
                    //Sleep(vet[2]);
                }
                else{
                    //gotoxy(x.front(),y.front());printf(" ");
                    //x.pop();
                    //y.pop();
                    gotoxy(v[1],v[2]);
                    printf("%c",188);
                   //x.push(v[1]);
                    //y.push(v[2]);
                    vet[4] = true;
                    vet[2]=150;
                    //Sleep(vet[2]);
                }
                v[4] = true;
            }
        }
        else if (v[0] == 6 && v[1] < 159 && v[3] == true){ // direita
            if (v[4] == true){
            gotoxy(x.front(),y.front());printf(" ");
            x.pop();
            y.pop();
            gotoxy(++v[1],v[2]);
            printf("%c",205);
            x.push(v[1]);
            y.push(v[2]);
            vet[0] = true;
            thread snakeColi(snakeColisao,x,y,vet,Coli,Cores,M);
            Sleep(vet[3]);
            if (vet[4] == true){
                vet[3] = 50;
                vet[4] = false;
            }
            snakeColi.join();
            }
            else{
                if (v[5] == 2){
                    //gotoxy(x.front(),y.front());printf(" ");
                    //x.pop();
                    //y.pop();
                    gotoxy(v[1],v[2]);
                    printf("%c",200);
                    //x.push(v[1]);
                    //y.push(v[2]);
                    vet[3]=150;
                    vet[4] = true;
                    //Sleep(vet[3]);
                }
                else{
                    //gotoxy(x.front(),y.front());printf(" ");
                    //x.pop();
                    //y.pop();
                    gotoxy(v[1],v[2]);
                    printf("%c",201);
                    //x.push(v[1]);
                    //y.push(v[2]);
                    vet[3]=150;
                    vet[4] = true;
                    //Sleep(vet[3]);
                }
                v[4] = true;
            }
        }
        else if (v[0] == 4 && v[1] > 58 && v[3] == true){ // esquerda
            if (v[4] == true){
            gotoxy(x.front(),y.front());printf(" ");
            x.pop();
            y.pop();
            gotoxy(--v[1],v[2]);
            printf("%c",205);
            x.push(v[1]);
            y.push(v[2]);
            vet[0] = true;
            thread snakeColi(snakeColisao,x,y,vet,Coli,Cores,M);
            Sleep(vet[3]);
            if (vet[4] == true){
                vet[3] = 50;
                vet[4] = false;
            }
            snakeColi.join();
            }
            else{
                if (v[5] == 2){
                    //gotoxy(x.front(),y.front());printf(" ");
                    //x.pop();
                    //y.pop();
                    gotoxy(v[1],v[2]);
                    printf("%c",188);
                    //x.push(v[1]);
                    //y.push(v[2]);
                    vet[4] = true;
                    vet[3]=150;
                    //Sleep(vet[3]);
                }
                else{
                    //gotoxy(x.front(),y.front());printf(" ");
                    //x.pop();
                    //y.pop();
                    gotoxy(v[1],v[2]);
                    printf("%c",187);
                    //x.push(v[1]);
                    //y.push(v[2]);
                    vet[4] = true;
                    vet[3]=150;
                    //Sleep(vet[3]);
                }
                v[4] = true;
            }
        }
        else if (v[0] == 2 && v[2] < 40 && v[3] == true){
            if (v[4] == true){
            gotoxy(x.front(),y.front());printf(" ");
            x.pop();
            y.pop();
            gotoxy(v[1],++v[2]);
            printf("%c",186);
            x.push(v[1]);
            y.push(v[2]);
            vet[0] = true;
            thread snakeColi(snakeColisao,x,y,vet,Coli,Cores,M);
            Sleep(vet[2]);
            if (vet[4] == true){
                vet[2] = 100;
                vet[4] = false;
            }
            snakeColi.join();
            }
            else{
                if (v[5] == 4){
                    //gotoxy(x.front(),y.front());printf(" ");
                    //x.pop();
                    //y.pop();
                    gotoxy(v[1],v[2]);
                    printf("%c",201);
                    //x.push(v[1]);
                    //y.push(v[2]);
                    vet[4] = true;
                    vet[2]=150;
                    //Sleep(vet[2]);
                }
                else{
                    //gotoxy(x.front(),y.front());printf(" ");
                    //x.pop();
                    //y.pop();
                    gotoxy(v[1],v[2]);
                    printf("%c",187);
                    //x.push(v[1]);
                    //y.push(v[2]);
                    vet[4] = true;
                    vet[2]=150;
                    //Sleep(vet[2]);
                }
                v[4] = true;
            }
        }
        else{
            Sleep(2);
        }
    }while(v[1] > 58 && v[1] < 159 && v[2] > 19 && v[2] < 40 && vet[1] == true);

    if (Coli[4] == true){
        Coli[4] = -1;
        thread winDef (winDefeat,true,Coli);
        winDef.join();
        if (Coli[0] == 1)
        {
            Coli[0]++;
        }
        else
        {
            Coli[0] = 1;
        }
    }
    else{
        Coli[4] = -1;
        thread winDef (winDefeat,false,Coli);
        winDef.join();
    }
}


void snakeGameAllForOne(int vetorSetaXY[3][4], int controleSeta, int Cores[5]){

    //PlaySound(TEXT("1TheFatRat.wav"),NULL, SND_ASYNC);
    vetorSetaXY[0][3] = false;//serve para a thread de Começar a Snake
    //vetorSetaXY[1][3] = 1; // Guardar o mapa da cobra;

    vetorSetaXY[0][0] = 8;
    vetorSetaXY[1][0] = 21;
    vetorSetaXY[2][0] = 1;
    menuSnakeGame(Cores);
    int Level = 1;

    do{
        gotoxy(vetorSetaXY[0][0],vetorSetaXY[1][0]);printf("-->");
        controleSeta = getch();

        if (controleSeta == 0xE0){//Menu do Snake Game
            controleSeta = getch();
            movimentarSetaGLOBAL(controleSeta,vetorSetaXY,23,3,10,1,8,30,21,22,0);
        }
        else if (controleSeta == 13){
            //gotoxy(8,16);printf("%d ",vetorSetaXY[2][0]);
            if (vetorSetaXY[2][0] == 11){//Opção de "Sair" e voltar à biblioteca
                //Faz nada
            }
            else if(vetorSetaXY[2][0] == 1){//Snake Life start
                vetorSetaXY[1][3] = false;
                bordaEspecial(90,25,40,1,0,Cores[2]);//Borda da thread de iniciar
                textcolor(Cores[0]);

                for (int i=65;i<78;i++){
                    gotoxy(i,35);printf("%c",205);//printando o inicio da cobra
                }

                int vetor[6] = {6,0,0,1,1,0},controleSnake,M[100][2];
                int vett[5]={0},vetorColisao[5]={Level/*Level/Mapa*/,0/**/,1/*TUBO*/,/*Preencher quando da pass*/0,0};
                vett[0] = true;
                vett[1] = true;
                vett[2] = 75;
                vett[3] = 50;
                vett[4] = false;
                snakeMap(vetorColisao,M);
                textcolor(WHITE);
                if (vetorColisao[0] == 1){
                    gotoxy(129,26);printf(" ");
                }
                else if (vetorColisao[0] == 2){
                    gotoxy(90,26);printf(" ");
                }
                else if (vetorColisao[0] == 3){
                    gotoxy(110,27);printf(" ");
                }

                thread n1(threadParaComecar,vetorSetaXY);
                getch();
                vetorSetaXY[1][3] = true;
                n1.join();
                textcolor(Cores[0]);
                Sleep(20);
                thread goSnake(snakeStart,vetor,vett,vetorColisao,Cores,M);

                do{ //principal
                    controleSnake = getch();

                    if (controleSnake == 0xE0){
                        controleSnake = getch();
                        direcaoSnake(controleSnake,vetor,vett);
                    }
                }while(vetorColisao[4] != -1); //principal
                vetorColisao[4] = 0;

                goSnake.join();
                Level = vetorColisao[0];
                Sleep(25);
                limparTexto(58,19,103,22);
                bordaEspecial(58,19,102,20,0,4);
                textcolor(Cores[0]);
            }
            else if(vetorSetaXY[2][0] == 2){//Editar Música
                menuSnakeRepetirMusica(Cores,vetorSetaXY);

                do{
                    gotoxy(vetorSetaXY[0][0],vetorSetaXY[1][0]);printf("-->");
                    controleSeta = getch();

                    if (controleSeta == 0xE0){//Menu do Editar Música
                    controleSeta = getch();
                    movimentarSetaGLOBAL(controleSeta,vetorSetaXY,0,3,0,1,0,0,28,35,0);
                    }
                    else if (controleSeta == 13){
                        if (vetorSetaXY[2][0] == 1)
                            PlaySound(TEXT("1TheFatRat.wav"),NULL, SND_ASYNC);
                        else if (vetorSetaXY[2][0] == 2){
                            PlaySound(TEXT("VapoVapo.wav"),NULL, SND_ASYNC);
                        }
                        else if (vetorSetaXY[2][0] == 3)
                            PlaySound(TEXT("VelhaInfancia.wav"),NULL, SND_ASYNC);
                        else
                            PlaySound(TEXT("SnakeEyesCoMa.wav"),NULL, SND_ASYNC);
                    }

                }while(controleSeta != 27);
                controleSeta = reiniciarValoresSnake(Cores,vetorSetaXY);//voltar ao Menu da Snake Life
            }
            else if (vetorSetaXY[2][0] == 12){//Editar Level
                gotoxy(vetorSetaXY[0][0],vetorSetaXY[1][0]);printf("   ");
                bordaEspecial(9,26,46,12,0,15);
                getch();
                limparTexto(9,26,46,14);
                controleSeta = reiniciarValoresSnake(Cores,vetorSetaXY);
            }
        }
    }while(controleSeta != 27);



    //gotoxy(2,4);printf("cabou");
    //getch();
    limparTexto(6,19,154,22);
        for (int i=19 ,k = 11;k<129;){
        borda1(k,i,29,3,Cores[1]);
        i+=3;

        if (i==40){
            i = 19;
            k+=39;
        }
    }
    vetorSetaXY[0][0] = 124;
    vetorSetaXY[1][0] = 23;
    vetorSetaXY[2][0] = 31;
    vetorSetaXY[0][3] = true;
    opcoes(Cores[0],1);
}

#endif // SKANERESTO_H_INCLUDED
