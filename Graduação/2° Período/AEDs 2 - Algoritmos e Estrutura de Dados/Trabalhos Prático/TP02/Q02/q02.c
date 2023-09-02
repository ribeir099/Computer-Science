#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char id[100];
} String;

typedef struct {
  int ano;
  int dia;
  char mes[3];
} Data;

typedef struct {
  int app_id;
  char name[100];
  Data release_date;
  char owners[100];
  int age;
  float price;
  int dlcs;
  String languages[100];
  char website[100];
  int windows;
  int mac;
  int linuxx;
  float upvotes;
  int avg_pt;
  char developers[100];
  String genres[100];
} Game;

int isFim(char palavra[]){
  return (strlen(palavra) == 3 && palavra[0] == 'F' && palavra[1] == 'I' && palavra[2] == 'M');
}

// Game clone(Game jogo){
//   Game cloneGame;
//   cloneGame.app_id = jogo.app_id;
//   cloneGame.name = jogo.name;
//   cloneGame.release_date = jogo.release_date;
//   cloneGame.owners = jogo.owners;
//   cloneGame.age = jogo.age;
//   cloneGame.price = jogo.price;
//   cloneGame.dlcs = jogo.dlcs;
//   cloneGame.languages = jogo.languages;
//   cloneGame.website = jogo.website;
//   cloneGame.windows = jogo.windows;
//   cloneGame.mac = jogo.mac;
//   cloneGame.linuxx = jogo.linuxx;
//   cloneGame.upvotes = jogo.upvotes;
//   cloneGame.avg_pt = jogo.avg_pt;
//   cloneGame.developers = jogo.developers;
//   cloneGame.genres = jogo.genres;
//   return cloneGame;
// }

String getLanguages(Game jogo){
  String languages;
  return languages;
}

String getBoolean(int bool){
  String boolen;
  if(bool){
    strcpy(boolen.id, "true");
    return boolen;
  } else {
    strcpy(boolen.id, "false");
    return boolen;
  }
}

// void imprimir(Game jogo){
//   printf("%d ", jogo.app_id);
//   printf(" %[^\n] ", jogo.name);
//   printf("%c%c%c/%d ", jogo.release_date.mes[0] ,jogo.release_date.mes[1], jogo.release_date.mes[2], jogo.release_date.ano);
//   printf(" %[^\n] ", jogo.owners);
//   printf("%d ", jogo.age);
//   printf("%.2f ", jogo.price);
//   printf("%d ", jogo.dlcs);
//   printf(" %[^\n] ", getLanguages(jogo));
//   printf(" %[^\n] ", jogo.website);
//   printf(" %[^\n] ", getBoolean(jogo.windows));

// }

int main(void) {
  String entrada[1000];
  int numEntrada = 0;
  int teste = 0;
  do {
    scanf(" %s", entrada[numEntrada].id);
   } while (isFim(entrada[numEntrada++].id) == 0);
  numEntrada--;

  Game games[numEntrada];

  for(int j = 0; j < numEntrada; j++){
    games[j].app_id = atoi(entrada[j].id);
    // printf("%d \n", games[j].app_id);
  }

  printf("\n %s \n", getBoolean(0).id);

  // printf("\n %d \n", (int)strlen(entrada[0].id));

  return 0;
}