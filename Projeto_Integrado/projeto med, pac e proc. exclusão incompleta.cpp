#include <stdio.h>
#include <string.h>
#define TF 100

int main(void)
{
    // Declarar variaveis
    int i, operacao, cadastro, vMed[TF], tlm = 0, igual = 0, codigo, achou,tlp=0, vPac[TF],tlproc=0,vProc[TF], exclusao,j;
    char vMedico[TF][30],vPaciente[TF][30], vProcedimento[TF][30];
    // Loop até o usuario digitar o numero 5 - Finalizar
    do
    {
        // Montar menu
        printf("-------------------------------------------\n");
        printf("1 - Cadastrar\n");
        printf("2 - Exclusao\n");
        printf("3 - Lancamento\n");
        printf("4 - Relatorio\n");
        printf("5 - Finalizar\n");
        printf("-------------------------------------------\n");
        printf("Escolha uma operacao: ");
        scanf("%d", &operacao);
        // Switch para operacao
        switch (operacao)
        {
        // 1 - Cadastro
        case 1:
            // Montar outro menu
            printf("-------------------------------------------\n");
            printf("1 - Cadastro de medico\n");
            printf("2 - Cadastro de paciente\n");
            printf("3 - Cadastro de procedimento\n");
            printf("4 - Retornar\n");
            printf("-------------------------------------------\n");
            printf("Escolha uma opcao: ");
            scanf("%d", &cadastro);
            printf("-------------------------------------------\n");
            // Switch para o tipo de cadastro
            switch (cadastro)
            {
            // 1 - Médico
            case 1:
                printf("Codigo do medico: ");
                scanf("%d", &codigo);
                i = 0;
                achou = 0;
                // Loop para comparar o vMed com todos os vMeds já cadastrados
                while (i < tlm && achou == 0)
                {
                    if (vMed[i] == codigo)
                    {
                        achou = 1;
                    }
                    i++;
                }
                // Se já existe esse médico cadastrado
                if (achou == 1) {
                    printf("Medico ja cadastrado!\n");
                }
                // Senão
                else {
                    // Verificar se existe espaço suficiente para adicionar um médico
                    if (tlm < TF) {
                        vMed[tlm] = codigo;
                        printf("Nome do medico: ");
                        scanf("%s", vMedico[tlm]);
                        printf("Medico cadastrado com sucesso!\n");
                        tlm++;
                    }
                    else {
                        printf("Numero maximo de medicos cadastrados atingido!\n");
                    }
                }
                break;
                // 2 - Pacientes
            case 2: 
				printf("Codigo do paciente: ");
                		scanf("%d",&codigo);
                		i=0;
                		achou=0;
                	while(i < tlp && achou == 0)
                	{
                		if(vPac[i]== codigo)
                				achou=1;
                		i++;
                	}
                if(achou == 1)
					{
					printf("Paciente ja cadastrado!\n");
					}
				else
					if(tlp < TF)
					{
						vPac[tlp] = codigo;
						printf("\nNome do paciente: ");
						fflush(stdin);
						scanf("%s",&vPaciente[tlp]);
						printf("Paciente cadastrado com sucesso!\n");
						tlp++;
					}		
					else
					printf("Numero maximo de pacientes cadastrados atingido!\n");
					break;
                // 3 - Procedimentos
            case 3:
				printf("Codigo do procedimento: ");
                		scanf("%d",&codigo);
                		i=0;
                		achou=0;
                	while(i < tlproc && achou == 0)
                	{
                		if(vProc[i]== codigo)
                				achou=1;
                		i++;
                	}
                if(achou == 1)
					{
					printf("Procedimento ja cadastrado!\n");
					}
				else
					if(tlproc < TF)
					{
						vProc[tlproc] = codigo;
						printf("\nNome do procedimento: ");
						fflush(stdin);
						scanf("%s",&vProcedimento[tlproc]);
						printf("Procedimento cadastrado com sucesso!\n");
						tlproc++;
					}		
					else
					printf("Numero maximo de procedimentos cadastrados atingido!\n");
					break;
				
                // 4 - Retornar
            }
        // 2 - Exclusão
        case 2: 
        	// Montar outro menu
            printf("-------------------------------------------\n");
            printf("1 - Excluir medico\n");
            printf("2 - Excluir paciente\n");
            printf("3 - Excluir procedimento\n");
            printf("4 - Retornar\n");
            printf("-------------------------------------------\n");
            printf("Escolha uma opcao: ");
            scanf("%d", &exclusao);
            printf("-------------------------------------------\n");
            //entrar com o codigo a ser excluido
            switch(exclusao){
            
            	case 1: printf("\nEntre com o codigo do medico: ");
            			scanf("%d",&codigo);
            			i=0;
            			//buscar codigo do medico
            			while(vMed[i] != codigo && i<tlm)
            			{
            				i++;
            			}	
            			if(i<tlm) //achou
            			{
            				for(j=i;j<tlm;j++)
            				{			
            					vMed[j] = vMed[j+1];
            					strcpy(vMedico[j],vMedico[j+1]);
            				}
            				tlm--;
            			}
            			else
							printf("\nMedico nao cadastrado!");
						break;	
							
				case 2:  printf("\nEntre com o codigo do paciente: ");
            			 scanf("%d",&codigo);
            			 i=0;
            			 //buscar codigo do medico
            			 while(vPac[i] != codigo && i<tlp)
            			 {
            				 i++;
            			 }	
            			 if(i<tlp) //achou
            			 {
            				 for(j=i;j<tlp;j++)
            				 {			
            					 vPac[j] = vPac[j+1];
            					 strcpy(vPaciente[j],vPaciente[j+1]);
            				 }
            				 tlm--;	
            			 }
            			 else
							 printf("\nPaciente nao cadastrado!");	
							 		break;
				case 3: 
            break;
            }
        // 3 - Lançamento
        case 3:
            break;
        // 4 - Relatório
        case 4:
            break;
        // 5 - Finalizar
        case 5:
            break;
        }
    } while (operacao != 5);
}
