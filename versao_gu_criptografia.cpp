#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>
#include <string.h>

using namespace std;

char m[300000][500];
char m2[300000][500];
char logins[300000][500];
char logins_base[300000][500];
char senhas[300000][500];
char senhas_base[300000][500];
char criptografia[300000][500];
char criptografia_base[300000][500];
char descriptografa[300000][50];
char barra[2];


void arquivo()
{
  
    FILE * file = fopen("base.txt","r");
    
    for(int i = 0 ; i<50000; i++)
    {
        fgets(m[i],50, file);
        fgets(barra,2,file);
    }   
    
    fclose(file);
}

void arquivo2()
{
  
    FILE * file = fopen("base.txt","r");
    
    for(int i = 1 ; i<50000; i++)
    {
        fgets(m2[i],50, file);
    }
  
    fclose(file);
}


void login_e_senha()
{
  int aux = 0;

  for (int i = 0; i < 50000; i++){
    for (int j = 0;j<50 ; j++){   
      
     
      if(m[i][j]=='|' && aux == 0){
        aux++;
        j++;
      }else if(aux==1 && m[i][j]=='|'&& m[i][j+1] == '\n' ){
        aux--;
        j++;
      }
  
      if(aux==0){
        logins[i][j]= m[i][j];
        //printf("%c", logins[i][j]);
      }

      if(aux==1){
        
        senhas[i][j]= m[i][j];
        //printf("%c", senhas[i][j]);
      } 
    }    
  }
}


float tempo = 0;
time_t t_ini = time(NULL);
void basecriptografada(){

  FILE * bc = fopen("base_criptografada.txt","w");


  int aux = 0;
  
  for (int i = 1; i <50000; i++){
    for (int j = 0;j<50 ; j++){   
     
      if(m2[i][j]=='|' && (aux == 0 ||aux == 1)){
        aux++;
        logins_base[i][j] = m2[i][j]; 
      }

      else if(aux==2 && m2[i][j]=='|'&& m2[i][j+1] == '\n' ){
        aux=0;
        senhas_base[i][j]= m2[i][j]; 
      }
  
      if(aux==0 || aux==1) {
        logins_base[i][j]= m2[i][j];
        fprintf(bc,"%c", logins_base[i][j]);      
      }

      if(aux==2){

        senhas_base[i][j]= m2[i][j];

        if(senhas_base[i][j] == 'A'){
          criptografia_base[i][j]= 'B';
        }
        else if(senhas_base[i][j] == 'B'){
          criptografia_base[i][j]= 'C';
        }
        else if(senhas_base[i][j] == 'C'){
          criptografia_base[i][j]= 'D';
        }
        else if(senhas_base[i][j] == 'D'){
          criptografia_base[i][j]= 'E';
        }
        else if(senhas_base[i][j] == 'E'){
          criptografia_base[i][j]= 'F';
        }
        else if(senhas_base[i][j] == 'F'){
          criptografia_base[i][j]= 'G';
        }
        else if(senhas_base[i][j] == 'G'){
          criptografia_base[i][j]= 'H';
        }
        else if(senhas_base[i][j] == 'H'){
          criptografia_base[i][j]= 'I';
        }
        else if(senhas_base[i][j] == 'I'){
          criptografia_base[i][j]= 'J';
        }
        else if(senhas_base[i][j] == 'J'){
          criptografia_base[i][j]= 'K';
        }
        else if(senhas_base[i][j] == 'K'){
          criptografia_base[i][j]= 'L';
        }
        else if(senhas_base[i][j] == 'L'){
          criptografia_base[i][j]= 'M';
        }
        else if(senhas_base[i][j] == 'M'){
          criptografia_base[i][j]= 'N';
        }
        else if(senhas_base[i][j] == 'N'){
          criptografia_base[i][j]= 'O';
        }
        else if(senhas_base[i][j] == 'O'){
          criptografia_base[i][j]= 'P';
        }
        else if(senhas_base[i][j] == 'P'){
          criptografia_base[i][j]= 'Q';
        }
        else if(senhas_base[i][j] == 'Q'){
          criptografia_base[i][j]= 'R';
        }
        else if(senhas_base[i][j] == 'R'){
          criptografia_base[i][j]= 'S';
        }
        else if(senhas_base[i][j] == 'S'){
          criptografia_base[i][j]= 'T';
        }
        else if(senhas_base[i][j] == 'T'){
          criptografia_base[i][j]= 'U';
        }
        else if(senhas_base[i][j] == 'U'){
          criptografia_base[i][j]= 'V';
        }
        else if(senhas_base[i][j] == 'V'){
          criptografia_base[i][j]= 'W';
        }
        else if(senhas_base[i][j] == 'W'){
          criptografia_base[i][j]= 'X';
        }
        else if(senhas_base[i][j] == 'X'){
          criptografia_base[i][j]= 'Y';
        }
        else if(senhas_base[i][j] == 'Y'){
          criptografia_base[i][j]= 'Z';
        }
        else if(senhas_base[i][j] == 'Z'){
          criptografia_base[i][j]= 'A';
        }
        else if(senhas_base[i][j] == '|'){
          criptografia_base[i][j]= '|';
        }
           
        fprintf(bc,"%c",criptografia_base[i][j]);
        //printf("%c",criptografia_base[i][j]);
      
        //printf("%c", senhas_base[i][j]);
       
      }
    } 
  }  
  fclose(bc);  
}

void print_basecriptografada(){

  
  int aux = 0;


  for (int i = 1; i <30; i++){
    for (int j = 0;j<50 ; j++){   
     
      if(m2[i][j]=='|' && (aux == 0 ||aux == 1)){
        aux++;
        logins_base[i][j] = m2[i][j];
        
      }

      else if(aux==2 && m2[i][j]=='|'&& m2[i][j+1] == '\n' ){
        aux=0;
        senhas_base[i][j]= m2[i][j];
        
        
      }
  
      if(aux==0 || aux==1) {
        logins_base[i][j]= m2[i][j];
        printf("%c", logins_base[i][j]);
       // fprintf(bc,"%c", logins_base[i][j]);
       
      }

      if(aux==2){

        senhas_base[i][j]= m2[i][j];

        if(senhas_base[i][j] == 'A'){
          criptografia_base[i][j]= 'B';
        }
        else if(senhas_base[i][j] == 'B'){
          criptografia_base[i][j]= 'C';
        }
        else if(senhas_base[i][j] == 'C'){
          criptografia_base[i][j]= 'D';
        }
        else if(senhas_base[i][j] == 'D'){
          criptografia_base[i][j]= 'E';
        }
        else if(senhas_base[i][j] == 'E'){
          criptografia_base[i][j]= 'F';
        }
        else if(senhas_base[i][j] == 'F'){
          criptografia_base[i][j]= 'G';
        }
        else if(senhas_base[i][j] == 'G'){
          criptografia_base[i][j]= 'H';
        }
        else if(senhas_base[i][j] == 'H'){
          criptografia_base[i][j]= 'I';
        }
        else if(senhas_base[i][j] == 'I'){
          criptografia_base[i][j]= 'J';
        }
        else if(senhas_base[i][j] == 'J'){
          criptografia_base[i][j]= 'K';
        }
        else if(senhas_base[i][j] == 'K'){
          criptografia_base[i][j]= 'L';
        }
        else if(senhas_base[i][j] == 'L'){
          criptografia_base[i][j]= 'M';
        }
        else if(senhas_base[i][j] == 'M'){
          criptografia_base[i][j]= 'N';
        }
        else if(senhas_base[i][j] == 'N'){
          criptografia_base[i][j]= 'O';
        }
        else if(senhas_base[i][j] == 'O'){
          criptografia_base[i][j]= 'P';
        }
        else if(senhas_base[i][j] == 'P'){
          criptografia_base[i][j]= 'Q';
        }
        else if(senhas_base[i][j] == 'Q'){
          criptografia_base[i][j]= 'R';
        }
        else if(senhas_base[i][j] == 'R'){
          criptografia_base[i][j]= 'S';
        }
        else if(senhas_base[i][j] == 'S'){
          criptografia_base[i][j]= 'T';
        }
        else if(senhas_base[i][j] == 'T'){
          criptografia_base[i][j]= 'U';
        }
        else if(senhas_base[i][j] == 'U'){
          criptografia_base[i][j]= 'V';
        }
        else if(senhas_base[i][j] == 'V'){
          criptografia_base[i][j]= 'W';
        }
        else if(senhas_base[i][j] == 'W'){
          criptografia_base[i][j]= 'X';
        }
        else if(senhas_base[i][j] == 'X'){
          criptografia_base[i][j]= 'Y';
        }
        else if(senhas_base[i][j] == 'Y'){
          criptografia_base[i][j]= 'Z';
        }
        else if(senhas_base[i][j] == 'Z'){
          criptografia_base[i][j]= 'A';
        }
        else if(senhas_base[i][j] == '|'){
          criptografia_base[i][j]= '|';
        }
           
        //fprintf(bc,"%c",criptografia_base[i][j]);
        printf("%c",criptografia_base[i][j]);
      
        //printf("%c", senhas_base[i][j]);
       
      }
      }
    }    
  
}

void codifica(){

  FILE * cr = fopen("criptografa.txt","w");
 
  for(int i=1; i < 50000; i++){
    for (int j = 0; j<50; j++){
      
      if(senhas[i][j] == 'A'){
        criptografia[i][j]= 'B';
      }
      if(senhas[i][j] == 'B'){
        criptografia[i][j]= 'C';
      }
      if(senhas[i][j] == 'C'){
        criptografia[i][j]= 'D';
      }
      if(senhas[i][j] == 'D'){
        criptografia[i][j]= 'E';
      }
      if(senhas[i][j] == 'E'){
        criptografia[i][j]= 'F';
      }
      if(senhas[i][j] == 'F'){
        criptografia[i][j]= 'G';
      }
      if(senhas[i][j] == 'G'){
        criptografia[i][j]= 'H';
      }
      if(senhas[i][j] == 'H'){
        criptografia[i][j]= 'I';
      }
      if(senhas[i][j] == 'I'){
        criptografia[i][j]= 'J';
      }
      if(senhas[i][j] == 'J'){
        criptografia[i][j]= 'K';
      }
      if(senhas[i][j] == 'K'){
        criptografia[i][j]= 'L';
      }
      if(senhas[i][j] == 'L'){
        criptografia[i][j]= 'M';
      }
      if(senhas[i][j] == 'M'){
        criptografia[i][j]= 'N';
      }
      if(senhas[i][j] == 'N'){
        criptografia[i][j]= 'O';
      }
      if(senhas[i][j] == 'O'){
        criptografia[i][j]= 'P';
      }
      if(senhas[i][j] == 'P'){
        criptografia[i][j]= 'Q';
      }
      if(senhas[i][j] == 'Q'){
        criptografia[i][j]= 'R';
      }
      if(senhas[i][j] == 'R'){
        criptografia[i][j]= 'S';
      }
      if(senhas[i][j] == 'S'){
        criptografia[i][j]= 'T';
      }
      if(senhas[i][j] == 'T'){
        criptografia[i][j]= 'U';
      }
      if(senhas[i][j] == 'U'){
        criptografia[i][j]= 'V';
      }
      if(senhas[i][j] == 'V'){
        criptografia[i][j]= 'W';
      }
      if(senhas[i][j] == 'W'){
        criptografia[i][j]= 'X';
      }
      if(senhas[i][j] == 'X'){
        criptografia[i][j]= 'Y';
      }
      if(senhas[i][j] == 'Y'){
        criptografia[i][j]= 'Z';
        
      }
      if(senhas[i][j] == 'Z'){
        criptografia[i][j]= 'A';
      }
           
      fprintf(cr,"%c",criptografia[i][j]);
      
    }
  }

   fclose(cr);
}

void print_codifica(){

  for(int i=1; i < 30; i++){
    printf("\n\nSenha Criptografada = ");
    
    for (int j = 0; j<50; j++){
      
      if(senhas[i][j] == 'A'){
        criptografia[i][j]= 'B';
      }
      if(senhas[i][j] == 'B'){
        criptografia[i][j]= 'C';
      }
      if(senhas[i][j] == 'C'){
        criptografia[i][j]= 'D';
      }
      if(senhas[i][j] == 'D'){
        criptografia[i][j]= 'E';
      }
      if(senhas[i][j] == 'E'){
        criptografia[i][j]= 'F';
      }
      if(senhas[i][j] == 'F'){
        criptografia[i][j]= 'G';
      }
      if(senhas[i][j] == 'G'){
        criptografia[i][j]= 'H';
      }
      if(senhas[i][j] == 'H'){
        criptografia[i][j]= 'I';
      }
      if(senhas[i][j] == 'I'){
        criptografia[i][j]= 'J';
      }
      if(senhas[i][j] == 'J'){
        criptografia[i][j]= 'K';
      }
      if(senhas[i][j] == 'K'){
        criptografia[i][j]= 'L';
      }
      if(senhas[i][j] == 'L'){
        criptografia[i][j]= 'M';
      }
      if(senhas[i][j] == 'M'){
        criptografia[i][j]= 'N';
      }
      if(senhas[i][j] == 'N'){
        criptografia[i][j]= 'O';
      }
      if(senhas[i][j] == 'O'){
        criptografia[i][j]= 'P';
      }
      if(senhas[i][j] == 'P'){
        criptografia[i][j]= 'Q';
      }
      if(senhas[i][j] == 'Q'){
        criptografia[i][j]= 'R';
      }
      if(senhas[i][j] == 'R'){
        criptografia[i][j]= 'S';
      }
      if(senhas[i][j] == 'S'){
        criptografia[i][j]= 'T';
      }
      if(senhas[i][j] == 'T'){
        criptografia[i][j]= 'U';
      }
      if(senhas[i][j] == 'U'){
        criptografia[i][j]= 'V';
      }
      if(senhas[i][j] == 'V'){
        criptografia[i][j]= 'W';
      }
      if(senhas[i][j] == 'W'){
        criptografia[i][j]= 'X';
      }
      if(senhas[i][j] == 'X'){
        criptografia[i][j]= 'Y';
      }
      if(senhas[i][j] == 'Y'){
        criptografia[i][j]= 'Z';
        
      }
      if(senhas[i][j] == 'Z'){
        criptografia[i][j]= 'A';
      }
           
      printf("%c",criptografia[i][j]);
      
    }
  
  }

}

void decodifica(){

FILE * dc = fopen("decodifica.txt","w");
 
  for(int i=1; i < 50000; i++){
    fprintf(dc,"\n\nSenha Descriptografada = ");
    
    for (int j = 0; j<50; j++){
      
      if(criptografia[i][j] == 'A'){
        descriptografa[i][j]= 'Z';
      }
      if(criptografia[i][j] == 'Z'){
        descriptografa[i][j]= 'Y';
      }
      if(criptografia[i][j] == 'Y'){
        descriptografa[i][j]= 'X';
      }
      if(criptografia[i][j] == 'X'){
        descriptografa[i][j]= 'W';
      }
      if(criptografia[i][j] == 'W'){
        descriptografa[i][j]= 'V';
      }
      if(criptografia[i][j] == 'V'){
        descriptografa[i][j]= 'U';
      }
      if(criptografia[i][j] == 'U'){
        descriptografa[i][j]= 'T';
      }
      if(criptografia[i][j] == 'T'){
        descriptografa[i][j]= 'S';
      }
      if(criptografia[i][j] == 'S'){
        descriptografa[i][j]= 'R';
      }
      if(criptografia[i][j] == 'R'){
        descriptografa[i][j]= 'Q';
      }
      if(criptografia[i][j] == 'Q'){
        descriptografa[i][j]= 'P';
      }
      if(criptografia[i][j] == 'P'){
        descriptografa[i][j]= 'O';
      }
      if(criptografia[i][j] == 'O'){
        descriptografa[i][j]= 'N';
      }
      if(criptografia[i][j] == 'N'){
        descriptografa[i][j]= 'M';
      }
      if(criptografia[i][j] == 'M'){
        descriptografa[i][j]= 'L';
      }
      if(criptografia[i][j] == 'L'){
        descriptografa[i][j]= 'K';
      }
      if(criptografia[i][j] == 'K'){
        descriptografa[i][j]= 'J';
      }
      if(criptografia[i][j] == 'J'){
        descriptografa[i][j]= 'I';
      }
      if(criptografia[i][j] == 'I'){
        descriptografa[i][j]= 'H';
      }
      if(criptografia[i][j] == 'H'){
        descriptografa[i][j]= 'G';
      }
      if(criptografia[i][j] == 'G'){
        descriptografa[i][j]= 'F';
      }
      if(criptografia[i][j] == 'F'){
        descriptografa[i][j]= 'E';
      }
      if(criptografia[i][j] == 'E'){
        descriptografa[i][j]= 'D';
      }
      if(criptografia[i][j] == 'D'){
        descriptografa[i][j]= 'C';
      }
      if(criptografia[i][j] == 'C'){
        descriptografa[i][j]= 'B';
      }
      if(criptografia[i][j] == 'B'){
        descriptografa[i][j]= 'A';
      }
      
      fprintf(dc,"%c",descriptografa[i][j]);
      //printf("%c",criptografia[i][j]);

    }
  }

  fclose(dc);
}

void print_decodifica(){
 
  for(int i=1; i < 30; i++){
    printf("\n\nSenha Descriptografada = ");
    
    for (int j = 0; j<50; j++){
      
      if(criptografia[i][j] == 'A'){
        descriptografa[i][j]= 'Z';
      }
      if(criptografia[i][j] == 'Z'){
        descriptografa[i][j]= 'Y';
      }
      if(criptografia[i][j] == 'Y'){
        descriptografa[i][j]= 'X';
      }
      if(criptografia[i][j] == 'X'){
        descriptografa[i][j]= 'W';
      }
      if(criptografia[i][j] == 'W'){
        descriptografa[i][j]= 'V';
      }
      if(criptografia[i][j] == 'V'){
        descriptografa[i][j]= 'U';
      }
      if(criptografia[i][j] == 'U'){
        descriptografa[i][j]= 'T';
      }
      if(criptografia[i][j] == 'T'){
        descriptografa[i][j]= 'S';
      }
      if(criptografia[i][j] == 'S'){
        descriptografa[i][j]= 'R';
      }
      if(criptografia[i][j] == 'R'){
        descriptografa[i][j]= 'Q';
      }
      if(criptografia[i][j] == 'Q'){
        descriptografa[i][j]= 'P';
      }
      if(criptografia[i][j] == 'P'){
        descriptografa[i][j]= 'O';
      }
      if(criptografia[i][j] == 'O'){
        descriptografa[i][j]= 'N';
      }
      if(criptografia[i][j] == 'N'){
        descriptografa[i][j]= 'M';
      }
      if(criptografia[i][j] == 'M'){
        descriptografa[i][j]= 'L';
      }
      if(criptografia[i][j] == 'L'){
        descriptografa[i][j]= 'K';
      }
      if(criptografia[i][j] == 'K'){
        descriptografa[i][j]= 'J';
      }
      if(criptografia[i][j] == 'J'){
        descriptografa[i][j]= 'I';
      }
      if(criptografia[i][j] == 'I'){
        descriptografa[i][j]= 'H';
      }
      if(criptografia[i][j] == 'H'){
        descriptografa[i][j]= 'G';
      }
      if(criptografia[i][j] == 'G'){
        descriptografa[i][j]= 'F';
      }
      if(criptografia[i][j] == 'F'){
        descriptografa[i][j]= 'E';
      }
      if(criptografia[i][j] == 'E'){
        descriptografa[i][j]= 'D';
      }
      if(criptografia[i][j] == 'D'){
        descriptografa[i][j]= 'C';
      }
      if(criptografia[i][j] == 'C'){
        descriptografa[i][j]= 'B';
      }
      if(criptografia[i][j] == 'B'){
        descriptografa[i][j]= 'A';
      }
      
      printf("%c",descriptografa[i][j]);
    }
  }
}

void verifica_usuario()
{
  int aux = 0;
  int aux_i = 0;
  int aux_senha = 0;
  int aux_i_senha = 0;
  int flag = 0;
  char login_usuario[40];
  char senha_usuario[40];
  bool usuario_valido = 0;
  bool senha_valida = 0;
  clock_t tic, toc;

  printf("Qual o seu ID de usuario? De 1 a 3000\n ");
  scanf("%d", &aux_i);
  printf("Digite o login: ");
  scanf("%s", login_usuario);
  printf("Digite sua senha: ");
  scanf("%s", senha_usuario);
  printf("senha digitada: %s\n", senha_usuario);

  tic = clock();
  for(int i = 0; i <1; i++ )
  {
    for(int j = 0; j<strlen(logins[aux_i]); j++)
    {
      if (login_usuario[aux] == logins[aux_i][j] && logins[aux_i][j] != '\n')
      {
        aux++;
        usuario_valido = true;
      }
      else if ( login_usuario[aux] != logins[aux_i][j]  )
      {
        usuario_valido = false;
      }
    }
    
      
  }
  for (int i = 0; i < 1; i++)
  {
    for (int j = 0; j<40; j++)
    {
       while(senhas[aux_i][j] == NULL && flag == 0  )
       {
        j++;     
       }

      if ( senha_usuario[aux_senha] == senhas[aux_i][j] && senhas[aux_i][j] != '\n')
      {
        aux_senha++;
        senha_valida = true;
        flag = 1;
      }
      else if (senha_usuario[aux_senha] != senhas[aux_i][j])
      {
        senha_valida = false;
        flag = 1;
        break;
      }
    }
     if(senha_valida == false || usuario_valido == false)
      {
        printf("\n\tUsuário ou senha invalidos\n");
      }
      else
      {
         printf("\n\tUsuario autenticado com sucesso! \n");
      }
  }
  toc = clock();
  printf("Tempo gasto para validar um usuario : %f segundos\n", (double)(toc - tic) / CLOCKS_PER_SEC);

}


void verifica_usuario_criptografado()
{
  int aux = 0;
  int aux_i = 0;
  int aux_senha = 0;
  int flag = 0;
  char login_usuario[40];
  char senha_usuario[40];
  char senha_usuario_criptogrfado[40];
  bool usuario_valido = 0;
  bool senha_valida = 0;
  clock_t tic, toc;

  printf("Qual o seu ID de usuario? De 1 a 3000\n ");
  scanf("%d", &aux_i);
  printf("Digite o login: ");
  scanf("%s", login_usuario);
  printf("Digite sua senha: ");
  scanf("%s", senha_usuario);
  printf("senha digitada: %s\n", senha_usuario);

  tic = clock();
  for(int i = 0; i <1; i++ )
  {
    for(int j = 0; j<strlen(logins[aux_i]); j++)
    {
      if (login_usuario[aux] == logins[aux_i][j] && logins[aux_i][j] != '\n')
      {
        
        aux++;
        usuario_valido = true;
      }
      else if ( login_usuario[aux] != logins[aux_i][j]  )
      {
        usuario_valido = false;
      }
    }   
  }

  for(int i = 0; i < 1; i++)
  {
     printf("SENHA CRIPTOGRAFADA: ");
     for(int j = 0; j < 40; j++)
     {
      if(senha_usuario[j] == 'A'){
        senha_usuario[j]= 'B';
         
      }
      else if(senha_usuario[j] == 'B'){
        senha_usuario[j]= 'C';
         
      }
      else if(senha_usuario[j] == 'C'){
        senha_usuario[j]= 'D';
         
      }
      else if(senha_usuario[j] == 'D'){
        senha_usuario[j]= 'E';
         
      }
      else if(senha_usuario[j] == 'E'){
        senha_usuario[j]= 'F';
         
      }
      else if(senha_usuario[j] == 'F'){
        senha_usuario[j]= 'G';
         
      }
      else if(senha_usuario[j] == 'G'){
        senha_usuario[j]= 'H';
         
      }
      else if(senha_usuario[j] == 'H'){
        senha_usuario[j]= 'I';
         
      }
      else if(senha_usuario[j] == 'I'){
        senha_usuario[j]= 'J';
         
      }
      else if(senha_usuario[j] == 'J'){
        senha_usuario[j]= 'K';
         
      }
      else if(senha_usuario[j] == 'K'){
        senha_usuario[j]= 'L';
         
      }
      else if(senha_usuario[j] == 'L'){
        senha_usuario[j]= 'M';
         
      }
      else if(senha_usuario[j] == 'M'){
        senha_usuario[j]= 'N';
         
      }
      else if(senha_usuario[j] == 'N'){
        senha_usuario[j]= 'O';
         
      }
      else if(senha_usuario[j] == 'O'){
        senha_usuario[j]= 'P';
         
      }
      else if(senha_usuario[j] == 'P'){
        senha_usuario[j]= 'Q';
         
      }
      else if(senha_usuario[j] == 'Q'){
        senha_usuario[j]= 'R';
         
      }
      else if(senha_usuario[j] == 'R'){
        senha_usuario[j]= 'S';
         
      }
      else if(senha_usuario[j] == 'S'){
        senha_usuario[j]= 'T';
         
      }
      else if(senha_usuario[j] == 'T'){
        senha_usuario[j]= 'U';
         
      }
      else if(senha_usuario[j] == 'U'){
        senha_usuario[j]= 'V';
         
      }
      else if(senha_usuario[j] == 'V'){
        senha_usuario[j]= 'W';
         
      }
      else if(senha_usuario[j] == 'W'){
        senha_usuario[j]= 'X';
         
      }
      else if(senha_usuario[j] == 'X'){
        senha_usuario[j]= 'Y';
         
      }
      else if(senha_usuario[j] == 'Y'){
        senha_usuario[j]= 'Z';
         
      }
      else if(senha_usuario[j] == 'Z'){
        senha_usuario[j]= 'A';
         
      }
      else if( senha_usuario[j] == NULL)
      {
        break;
      }

       printf("%c", senha_usuario[j]);
    }
    
  }
  for (int i = 0; i < 1; i++)
  {
    for (int j = 0; j<40; j++)
    {
       while(criptografia[aux_i][j] == NULL && flag == 0  )
       {
        j++;     
       }
      if ( senha_usuario[aux_senha] == criptografia[aux_i][j] && criptografia[aux_i][j] != ' ')
      {
        aux_senha++;
        senha_valida = true;
        flag = 1;
      }
      else if (senha_usuario[aux_senha] != criptografia[aux_i][j] && criptografia[aux_i][j] != NULL)
      {
        senha_valida = false;
        flag = 1;
        break;
      }
      else if(senha_usuario[aux_senha] == ' ')
      {
        break;
      }
    }
     if(senha_valida == false || usuario_valido == false)
      {
        printf("\t\n === Usuário ou senha invalidos ===\n");
      }
      else
      {
         printf("\t\n === Usuario autenticado com sucesso! === \n");
      }
  }
  toc = clock();
  printf("Tempo gasto para validar um usuario criptografado: %f segundos\n", (double)(toc - tic) / CLOCKS_PER_SEC);
  
}


void sair(){

    printf("\n\t\t\t\t\t\t  Finalizando programa......\n\n");
    exit(0);

}

int main() {
  clock_t tic, toc;
  arquivo();
  arquivo2();
  login_e_senha();
  tic = clock();
  basecriptografada();
  toc = clock();
  printf("Tempo gasto para converter a base: %f segundos\n", (double)(toc - tic) / CLOCKS_PER_SEC);

int valor;
  
    puts("\n\n\t========== BASE CRIPTOGRAFADA ==========\n\n");
    puts("\t1 - VISUALIZAR BASE CRIPTOGRAFADA (30 USERS)\n");
    puts("\t2 - AUTENTIFICACAO SEM CRIPTOGRAFIA\n");
    puts("\t3 - AUTENTIFICACAO COM CRIPTOGRAFIA\n");
    puts("\t4 - LISTAR APENAS SENHAS CRIPTOGRAFADAS\n");
    puts("\t5 - LISTAR APENAS SENHAS DESCRIPTOGRAFADAS\n");
    puts("\t6 - Sair\n");
    printf("\n\tDigite uma opcao que deseja ver: ");
    scanf("%d",&valor);

    switch (valor)
    {
      case 1 :
        print_basecriptografada();
      break;
      
      case 2 :
        verifica_usuario();
      break;
      
      case 3 :
        codifica();
        verifica_usuario_criptografado();
      break;
      
      case 4 :
        codifica(); 
        print_codifica();
      break;
      
      case 5 :
        codifica();
        decodifica();
        print_decodifica();
      break;
      
      case 6 :
        sair();
      break;

      default:   
        printf("\n\t\t\t\t========= Opcao invalida! Tente novamente! =========\n\t\t");
        break;
    }
 


}
