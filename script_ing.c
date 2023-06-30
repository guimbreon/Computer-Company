#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Variaveis globais
int qnt[123],qdias,i,op[123];

//Funções secundárias
int incorreto(){
	system("color 04");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("**********************************************************************\n");
	printf("The entered value does not correspond to any option!\n");
	printf("But the program will continue to run normally!\n");
	printf("**********************************************************************\n");
	printf("\n");
	printf("\n");
	printf("\n");
	system("PAUSE");
	system("color 03");
}

void incorreto2(){
	system("color 04");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("**********************************************************************\n");
	printf("The entered value does not correspond to any day!\n");
	printf("But the program will continue to run normally!\n");
	printf("**********************************************************************\n");
	printf("\n");
	printf("\n");
	printf("\n");
	system("PAUSE");
	system("color 03");
}

void incorreto3(){
	system("color 04");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("**********************************************************************\n");
	printf("The entered value does not exist!\n");
	printf("But the program will continue to run normally!\n");
	printf("**********************************************************************\n");
	printf("\n");
	printf("\n");
	printf("\n");
	system("PAUSE");
	system("color 03");
}
//função principal
int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "english");
	int qdias,i,qnt[123],dia,valor,ment,inc,op[5][5],consuldias,total,media;
	float min,max,diamax,diamin;
	system("color 03");
	
	/*
	Made by:
	Guimbreon (Guilherme Soares)
	*/
	
	FILE *dados;
	// Reads existing data
	
y:	printf("Which month do you want to consult?\n 1: Month with 28 days\n 2: Months with 30 days\n 3: Months with 31 days\n");
	scanf("%d",&op[4][1]);
	switch(op[4][1])
	{
		case 1:
			dados= fopen("dados28.txt","r");// r-->READ w-->WRITE a-->ALTERATE
			qdias=28; 
	
			if(dados == NULL) //In case the file doesn't exist it'll tell you that
			{
				printf("The archive can't be open.\n Because it doesn't exist.\n");
				return 0;
			}
			for(i=1;i<=28;i++)
			{
				fscanf(dados,"%d",&qnt[i]);
			}
			fclose(dados); //to close and save the file in safety
		break;
		case 2:
			dados= fopen("dados30.txt","r");
			qdias=30; 
	
			if(dados == NULL) //In case the file doesn't exist it'll tell you that
			{
				printf("The archive can't be open.\n Because it doesn't exist.\n");
				return 0;
			}
			for(i=1;i<=qdias;i++)
			{
				fscanf(dados,"%d",&qnt[i]);
			}
			fclose(dados); //to close and save the file in safety
		break;
		case 3:
			dados= fopen("dados31.txt","r");
			qdias=31; 
	
			if(dados == NULL) //In case the file doesn't exist it'll tell you that
			{
				printf("The archive can't be open.\n Because it doesn't exist.\n");
				return 0;
			}
			for(i=1;i<=qdias;i++)
			{
				fscanf(dados,"%d",&qnt[i]);
			}
			fclose(dados); //to close and save the file in safety
		break;
		default:
				incorreto();
				goto y;
				
	}	
    
	
	

e:	printf("\n");	
b:	printf("\n");
	printf("Select one of the following options: \n 1:See all the data.\n 2:See the days with lowest and biggest production.\n 3:See if any day produced x value..\n 4:Consult a specific day.\n 5:Total Computers Produced\n 6:Mean Production Value (MPV)\n 7:Change The Month. \n 0:Exit\n");
	scanf("%d",&op[0][0]);
	printf("\n");
	printf("\n");
	switch(op[0][0])
	{
		case 0:
			goto exit;
		break;
		case 1:
m:			printf("There are %d days available.\n",qdias);
			printf("Until when do you want to consult?\n");
			scanf("%i",&consuldias);
			printf("\n");
			if(consuldias>qdias)
			{
				printf("The value is bigger than %d, try again.\n\n",qdias);
				goto m;
			}
			i=0;
 	 		do
 	 		{
  	  	    	i=i+1;
  	   			printf("%d Computers were produced on day %d\n",qnt[i],i);
  	 		}
  	 		while(i<consuldias);
  	 		printf("\n");
  	 		printf("P.S: If the values don't match with the values on the production sheat change the values on the file%d.txt\n",qdias);
  	 		printf("\n");
  	 		printf("Do you want to consult anything else?\n 1:Yes\n 2:No\n"); 
			scanf("%d",&op[1][1]);
			switch(op[1][1])
			{
				case 1:
					goto b;
				break;
				case 2:
					goto exit;
				break;
				default:
					goto g;
			}
		break;
		//PARTE 2
		case 2:
			min=qnt[1];
			for(i=2;i<=qdias;i++)
			{
				if(qnt[i]<min)
				{
					min=qnt[i];
					diamin=i;
				}
			}
			max=qnt[1];
			for(i=2;i<=qdias;i++)
			{
				if(qnt[i]>max)
				{
					max=qnt[i];
					diamax=i;
				}
			}
			printf("The smallest amount produced was %0.0f on day %0.0f\nThe biggest was %0.0f on day %0.0f\n",min,diamin,max,diamax);
h:			printf("\n");
			printf("\n");
			printf("Do you want to consult anything else?\n 1:Yes\n 2:No\n"); 
			
			scanf("%d",&op[1][2]);
			switch(op[1][2])
			{
				case 1:
					goto b;
				break;
				case 2:
					goto exit;
				break;
				default:
					incorreto();
					goto h;
			}
		break;
		case 3:
i:			printf("Which value do you want to consult?\n");
			scanf("%d",&valor);
			printf("\n");
			for(i=1;i<=qdias;i++)
			{
			if(valor==qnt[i])
			{
			printf("\n");
			printf("The value produced on day %d was:(%d)\n",i,valor);
			printf("\n");
			ment=5;
			}
			}
			if(ment!=5)
			{
			printf("That value wasn't produced in any day.\n\n");
			}
j:			printf("Do you want to consult any other values?\n 1:Yes\n 2:No\n");
			scanf("%d",&op[1][3]);
			printf("\n");
			switch(op[1][3])
			{
				case 1:
					goto i;
				break;
				case 2:
					goto l;
				break;
				default:
					goto j;
					
			}
			printf("\n");
			printf("\n");
l:			printf("Do you want to consult anything else?\n 1:Yes\n 2:No\n"); 
			scanf("%d",&op[1][4]);
			switch(op[1][4])
			{
				case 1:
					goto b;
				break;
				case 2:
					goto exit;
				break;
				default:
					incorreto();
					goto l;
			}
		break;
		case 4:
			do
			{
A:				printf("What day do you want to consult?\n(1-%d)\n",qdias);
				scanf("%d",&dia);
				printf("\n");
				if(dia>=1 && dia<=qdias)
				{
						printf("On day %d, there were produced: %d\n",dia,qnt[dia]);
				}else
				{ 
					incorreto2();
					printf("\n");
					printf("\n");
B:					printf("Do you want to consult anything else?\n 1:Yes\n 2:No\n"); 
					scanf("%d",&op[1][5]);
					switch(op[1][5])
				{
					case 1:
						goto A;
					break;
					case 2:
						goto c;
					break;
					default:
						incorreto();
						goto B;
				}
				}
c:				printf("\n");	
				printf("\n");
				printf("Do you want to consult any other day?\n 1:Yes\n 2:No\n"); 
				scanf("%d",&op[2][1]);
				if(op[2][1]!=1 && op[2][1]!=2)
				{
					incorreto();
					goto c;
				}
			}
			while(op[2][1]==1);
			printf("\n");
			printf("\n");
g:			printf("Do you want to consult anything else?\n 1:Yes\n 2:No\n"); 
			scanf("%d",&op[2][2]);
			switch(op[2][2])
			{
				case 1:
					goto b;
				break;
				case 2:
					goto exit;
				break;
				default:
					goto g;
			}
  	 	break;
  	 	case 5:
  	 		for(i=1;i<=qdias;i++)
  	 		{
  	 			total=total+qnt[i];
			}
			printf("There were produced %d computers on the last %d days.\n",total,qdias);
			printf("\n");
			printf("Do you want to consult anything else?\n 1:Yes\n 2:No\n"); 
			scanf("%d",&op[2][2]);
			switch(op[2][2])
			{
				case 1:
					goto b;
				break;
				case 2:
					goto exit;
				break;
				default:
					incorreto();
					goto h;
			}
  	 	break;
  	 	case 6:
  	 		for(i=1;i<=qdias;i++)
  	 		{
  	 			total=total+qnt[i];
			}
			media=total/qdias;
			printf("The mean production on this month was %d\n",media);
			printf("\n");
			printf("Do you want to consult anything else?\n 1:Yes\n 2:No\n"); 
			scanf("%d",&op[1][2]);
			switch(op[1][2])
			{
				case 1:
					goto b;
				break;
				case 2:
					goto exit;
				break;
				default:
					incorreto();
					goto h;
			}
  	 	break;
  	 	case 7:
  	 		goto y;
  	 	break;
		default:
			incorreto();
			printf("Do you want to go back?\n 1:Yes\n 2:No\n");
			scanf("%d",&op[2][3]);
			if(op[2][3]==1)
			{
				goto b;
			}
	}

exit:	printf("\n");
	printf("Goodbye!!\n");
	system("PAUSE");

}
