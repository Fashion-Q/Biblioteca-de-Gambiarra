#ifndef CREDENCIAIS_H_INCLUDED
#define CREDENCIAIS_H_INCLUDED

void telaInicial(int corBorda, int corBiblioteca, int corBordaEspecial, int corTexto, int vetorSetaXY[3][4]);
void mudarCoresInterfaceAllForOne(int vetorSetaXY[3][4], int controleSeta,int Cores[5]);
void opcoes(int cor, int control);
void movimentarSetaGLOBAL(int seta,int setaXY[3][4], int xVezes, int yVezes, int xContador, int yContador, int xMaximoES, int xMaximoDI, int yMaximoUp, int yMaximoDown, int down);
void limparTexto(int x, int y, int xVezes, int yVezes);
void borda1(int x, int y, int xVezes, int yVezes, int cor);
void bordaEspecial (int x, int y, int xVezes, int yVezes, int MilGrau, int cor);
void bibliotecaGambiarra(int cor);
void corInterface(int Cores[5], int control);
void printarNomesDasCores(int Cores[5], int control, int corNomes, int setaXY[3][4]);
int reiniciarValoresInterface(int Cores[5],int vetorSetaXY[3][4]);
void snakeGameAllForOne(int vetorSetaXY[3][4], int controleSeta, int Cores[5]);
void menuSnakeGame(int Cores[5]);
//int snakeColisao(queue <int> x, queue<int> y,int vett[5],int Coli[5], int Cores[5], int M[100][2]);
int reiniciarValoresSnake(int Cores[5], int vetorSetaXY[3][4]);
void menuSnakeRepetirMusica(int Cores[5], int vetorSetaXY[3][4]);
void threadParaComecar(int v[3][4]);
void direcaoSnake(int snake,int v[6], int vet[5]);
void snakeStart(int v[6], int vet[5],int Coli[5], int Cores[5], int M[100][2]);
void winDefeat(bool wDef, int Coli[5]);
void snakeMap(int Coli[5], int M[100][2]);
//int colisaoMapa2(int Coli[5], int Cores[5], int vett[5], int a, int b);
void snakeMapa2();



#endif // CREDENCIAIS_H_INCLUDED
