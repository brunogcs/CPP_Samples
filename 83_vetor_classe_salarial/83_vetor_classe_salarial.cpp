#include<iostream>
using namespace std;
int main(){
	
	int cont=0,cont2=0,cont3=0,contReadFunc=0,contReadClasse=0
	,total1=0,total2=0,total3=0,total4=0,total5=0,total6=0,total7=0,maiorclasse=0
	,classefunc[4],guardaclasse[8],totalclasse[8],maior[8]
	,classefixa[8]={0,800,1000,1100,1500,2500,4000,6000};
	
	string nomefunc[4];
	
	for (cont=1;cont<=3;cont++)
	{
		//Digita os dados para gravar nos vetores
		cout << "Digite o nome do funcionario: ";
		cin >> nomefunc[cont];
		cout << endl;
		cout << "Entre 1 e 7 digite a classe a qual ele pertence: ";
		cin >> classefunc[cont];
		cout << endl;
		
		//Armazena o total digitado de cada classe
		if(classefunc[cont]==1){total1++;} maior[1] = total1;
		if(classefunc[cont]==2){total2++;} maior[2] = total2;
		if(classefunc[cont]==3){total3++;} maior[3] = total3;
		if(classefunc[cont]==4){total4++;} maior[4] = total4;
		if(classefunc[cont]==5){total5++;} maior[5] = total5;
		if(classefunc[cont]==6){total6++;} maior[6] = total6;
		if(classefunc[cont]==7){total7++;} maior[7] = total7;
		
		//Guarda salario
		for(cont2=1;cont2<=3;cont2++)
			{
				if(classefunc[cont]==cont2)
				{
					guardaclasse[cont] = classefixa[cont2];	
				}
			}
	}
	//Guarda a classe com maior numero cadastrado
	for(cont3=1;cont3<8;cont3++)
	{
		if(maiorclasse<=maior[cont3])
		{
			maiorclasse = cont3;
			cout << maiorclasse << " e maior que " << maior[cont3] << endl;
		}
		else
		{
			cout << maiorclasse << " e menor que " << maior[cont3] << endl;
		}
	}
	//Printa todos os cadastros	
	cout << "*******************************************************************************************\n\n";
	cout << "Nosso banco de funcionarios: \n\n";
	
	for (contReadFunc=1;contReadFunc<=3;contReadFunc++)
	{
		cout << "O sujeito de chama " << nomefunc[contReadFunc] << " e recebe como salario R$" << guardaclasse[contReadFunc] << endl;
		cout << endl;	
	}
	
	//Printa o numero de funcionarios cadastrados em cada parte	
	cout << "*******************************************************************************************\n\n";
	cout << "O total das nossas classes e: \n\n";
	
	for (contReadClasse=1;contReadClasse<8;contReadClasse++)
	{
		cout << "\nTotal de funcionarios da classe " << contReadClasse << ": " << maior[contReadClasse] << "\n";
	}	

	//Printa qual a classe com maior cadastro e quantas pessoas tem cadastradas nela
	cout << "*******************************************************************************************\n\n";
	cout << "A classe com maior numero de funcionarios e: " << maiorclasse << ". Ela tem " << maior[maiorclasse] << " funcionarios.\n\n";
	
	system("pause");
	return 0;
}
