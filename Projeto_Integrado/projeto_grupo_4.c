/* 
10442324882 - ANA BEATRIZ BARILLI NOGUEIRA
10442324176 - DEBORA JANAINE LAGOS SOARES
10442324069 - DIOGO SEIDI KITAHARA
10442324748 - IGOR MORALES PEREIRA
10442324819 - LUIS FILIPE EDUARDO DE MORAES
10442324550 - VIDALEGRE VENTURA BASTOS
10442324612 - YURI MARQUES PILONI
*/

#include <stdio.h>
#include <string.h>
#define TF 100

int main(void)
{
    // Declarar variaveis
    int i, k, operacao, cadastro, vMed[TF], vMedHist[TF], tlm = 0, tlpp = 0, igual = 0, codigo, achou,tlp=0, vPac[TF], vPacHist[TF], tlproc=0,vProc[TF], vProcHist[TF], exclusao,j, lancamento, tlmh = 0, tlph = 0, tlproch = 0,nao_apagar = 0;
    char vMedico[TF][30],vPaciente[TF][30], vProcedimento[TF][30], vData[TF][10], data[10];
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
						fflush(stdin);
                        gets(vMedico[tlm]);
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
                	// Loop para comparar o vPac com todos os vPacs já cadastrados
                	while(i < tlp && achou == 0)
                	{
                		if(vPac[i]== codigo)
                				achou=1;
                		i++;
                	}
                	// Se já existe esse paciente cadastrado
                if(achou == 1)
					{
					printf("Paciente ja cadastrado!\n");
					}
				else
					// Verificar se existe espaço suficiente para adicionar um paciente
					if(tlp < TF)
					{
						vPac[tlp] = codigo;
						printf("Nome do paciente: ");
						fflush(stdin);
						gets(vPaciente[tlp]);
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
                	// Loop para comparar o vProc com todos os vProc já cadastrados
                	while(i < tlproc && achou == 0)
                	{
                		if(vProc[i]== codigo)
                				achou=1;
                		i++;
                	}
                	// Se já existe esse procedimento cadastrado
                if(achou == 1)
					{
					printf("Procedimento ja cadastrado!\n");
					}
					// Verificar se existe espaço suficiente para adicionar um procedimento
				else
					if(tlproc < TF)
					{
						vProc[tlproc] = codigo;
						printf("Nome do procedimento: ");
						fflush(stdin);
						gets(vProcedimento[tlproc]);
						printf("Procedimento cadastrado com sucesso!\n");
						tlproc++;
					}		
					else
					printf("Numero maximo de procedimentos cadastrados atingido!\n");
					break;
                // 4 - Retornar
                case 4:
                	break;
				// Mensagem caso seja digitado uma opcao invalida
				default:
					printf("Opcao invalida. Por favor, tente novamente!\n");
        	}
		break;
        // 2 - Exclusão
        case 2: 
        	// Montar outro menu
            printf("-------------------------------------------\n");
            printf("1 - Excluir medico\n");
            printf("2 - Excluir paciente\n");
            printf("3 - Excluir procedimento\n");
            printf("4 - Excluir lancamento\n");
			printf("5 - Retornar\n");
            printf("-------------------------------------------\n");
            printf("Escolha uma opcao: ");
            scanf("%d", &exclusao);
            printf("-------------------------------------------\n");
            //entrar com o codigo a ser excluido
            switch(exclusao){
            
            	case 1:
					printf("Codigo do medico: ");
            		scanf("%d",&codigo);
            		i=0;
					k=0;
					nao_apagar=0;
            		// Procurar o codigo do medico
           			while(vMed[i] != codigo && i<tlm)
           			{
           				i++;
           			}
					while (k < tlmh) {
						if (vMedHist[k] == codigo) {
							printf("O médico só poderá ser excluído se este nao estiver em nenhum lancamento!\n");
							nao_apagar = 1;
						}
						k++;
					}
					if (nao_apagar == 1) {
						break;
					}
					// Se encontrou
           			if(i<tlm)
            		{
						printf("Medico exluido com sucesso!\n");
            			for(j=i;j<tlm;j++)
            			{			
           					vMed[j] = vMed[j+1];
           					strcpy(vMedico[j],vMedico[j+1]);
           				}
           				tlm--;
           			}		
					break;
				case 2:
					printf("Codigo do paciente: ");
            	 	scanf("%d",&codigo);
            		i=0;
					k=0;
					nao_apagar=0;
           			// Procurar o codigo do paciente
           			while(vPac[i] != codigo && i<tlp)
           			{
           				i++;
           			}	
					while (k < tlph) {
						if (vPacHist[k] == codigo) {
							printf("O paciente só poderá ser excluído se este nao estiver em nenhum lancamento!\n");
							nao_apagar = 1;
						}
						k++;
					}
					if (nao_apagar == 1) {
						break;
					}
					// Se encontrou
            		if(i<tlp)
            		{
						printf("Paciente exluido com sucesso!\n");
            			for(j=i;j<tlp;j++)
            			{			
           					vPac[j] = vPac[j+1];
           					strcpy(vPaciente[j],vPaciente[j+1]);
           				}
           				tlp--;	
           			}
					break;
				case 3:
					printf("Codigo do procedimento: ");
					scanf("%d", &codigo);
					i=0;
					k=0;
					nao_apagar=0;
					// Procurar o codigo do procedimento
					while (i < tlproc && vProc[i] != codigo) {
						i++;
					}
					while (k < tlproch) {
						if (vProcHist[k] == codigo) {
							printf("O procedimento só poderá ser excluído se este nao estiver em nenhum lancamento!\n");
							nao_apagar = 1;
						}
						k++;
					}
					if (nao_apagar == 1) {
						break;
					}
					// Se encontrou 
					if (i < tlproc) {
						printf("Procedimento exluido com sucesso!\n");
						for (j = i; j < tlproc; j++) {
							vProc[j] = vProc[j + 1];
							strcpy(vProcedimento[j], vProcedimento[j+1]);
						}
						tlproc--;
					}
					break;
				// Retornar
				case 4:
					printf("Data do lancamento: ");
					fflush(stdin);
					gets(data);
					i = 0;
					// Procurar pelo lancamento
					while (strcmp(vData[i], data) == 1 && i < tlpp) {
						i++;
					}
					// Se encontrou
					if (i < tlpp) {
						printf("Lancamento excluido com sucesso!\n");
						for(j = i; j < tlpp; j++) {
							vMedHist[j] = vMedHist[j + 1];
							vPacHist[j] = vPacHist[j + 1];
							vProcHist[j] = vProcHist[j + 1];
							strcpy(vData[j], vData[j + 1]);
						}
						tlpp--;
					}
					break;
				case 5: 
					break;
				// Mensagem caso seja digitado uma opcao invalida
				default:
					printf("Opcao invalida. Por favor, tente novamente!\n");
            }
		break;
        // 3 - Lançamento
        case 3:
			printf("Codigo do medico: ");
			scanf("%d", &codigo);
			i = 0;
			achou = 0;
			// Verificar se existe o medico
			while (i < tlm && achou == 0) {
				if (vMed[i] == codigo) {
					achou++;
				}
				i++;
			}
			if (achou == 0) {
				printf("Nao foi possivel realizar o lancamento pois este medico nao esta cadastrado!\n");
				break;
			}
			if (achou == 1) {
				vMedHist[tlmh] = codigo;
				tlmh++;
			}
			printf("Codigo do paciente: ");
			scanf("%d", &codigo);
			i = 0;
			// Verificar se existe o paciente
			while (i < tlp && achou == 1) {
				if (vPac[i] == codigo) {
					achou++;
				}
				i++;
			}
				if (achou == 1) {
				printf("Nao foi possivel realizar o lancamento pois este paciente nao esta cadastrado!\n");
				break;
			}
			if (achou == 2) {
				vPacHist[tlph] = codigo;
				tlph++;
			}
			printf("Codigo do procedimento: ");
			scanf("%d", &codigo);
			i = 0;
			// Verificar se existe o procedimento
			while (i < tlproc && achou == 2) {
				if (vProc[i] == codigo) {
					achou++;
				}
				i++;
			}
				if (achou == 2) {
				printf("Nao foi possivel realizar o lancamento pois este procedimento nao esta cadastrado!\n");
				break;
			}
			if (achou == 3) {
				vProcHist[tlproch] = codigo;
				tlproch++;
			}
			// Adicionar data de lancamento
			if (tlpp < TF) {
				printf("Data do lancamento [dd/mm/aaaa]: ");
				fflush(stdin);
				gets(vData[tlpp]);
				printf("Data do lancamento cadastrado com sucesso!\n");
				tlpp++;
			}
			else {
				printf("Numero maximo de lancamentos cadastrados atingido!\n");
			}
            break;
        // 4 - Relatório
        case 4:
        	// Montar outro menu
            printf("-------------------------------------------\n");
            printf("1 - Relatorio de medicos\n");
            printf("2 - Relatorio de pacientes\n");
            printf("3 - Relatorio de procedimentos\n");
            printf("4 - Relatorio de lancamentos\n");
            printf("5 - Retornar\n");
            printf("-------------------------------------------\n");
            printf("Escolha uma opcao: ");
            scanf("%d", &lancamento);
            printf("-------------------------------------------\n");
			switch(lancamento) {
				case 1: 
					if (tlm > 0) {
						printf("Medicos cadastrados:\n");
						for (i = 0; i < tlm; i++) {
							printf("%d - Nome: %s | Codigo: %d\n", i + 1, vMedico[i], vMed[i]);
						}
					}
					else {
						printf("Nenhum medico cadastrado!\n");
					}
					break;
				case 2: 
					if (tlp > 0) {
						printf("Pacientes cadastrados:\n");
						for (i = 0; i < tlp; i++) {
							printf("%d - Nome: %s | Codigo: %d\n", i + 1, vPaciente[i], vPac[i]);
						}
					}
					else {
						printf("Nenhum paciente cadastrado!\n");
					}
					break;
				case 3: 
					if (tlproc > 0) {
						printf("Procedimentos cadastrados:\n");
						for (i = 0; i < tlproc; i++) {
							printf("%d - Nome: %s | Codigo: %d\n", i + 1, vProcedimento[i], vProc[i]);
						}
					}
					else {
						printf("Nenhum procedimento cadastrado!\n");
					}
					break;
				case 4: 
					if (tlpp > 0) {
						printf("Lancamentos cadastrados:\n");
						for (i = 0; i < tlpp; i++) {
							printf("%d - Data: %s\n", i + 1, vData[i]);
						}
					}
					else {
						printf("Nenhum lancamento cadastrado!\n");
					}
					break;
				// Retornar
				case 5:
					break;
				// Mensagem caso seja digitado uma opcao invalida
				default:
					printf("Opcao invalida. Por favor, tente novamente!\n");
			}
            break;
        // 5 - Finalizar
        case 5:
            break;
        default:
            printf("Opcao invalida. Por favor, tente novamente!\n");
        }
    } while (operacao != 5);
}
