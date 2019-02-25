#include<iostream>
using namespace std;
int main(){
	
	int cont=0,cont2=0,contReadFunc=0,contReadClasse=0,i=1
	,total1=0,total2=0,total3=0,total4=0,total5=0,total6=0,total7=0,maiorclasse=0
	,classefunc[7],guardaclasse[7],totalclasse[7],maior[7]
	,classefixa[7]={800,1000,1100,1500,2500,4000,6000};
	
	string nomefunc[3];
	
	for (cont=0;cont<3;cont++)
	{
		cout << "Digite o nome do funcionario: ";
		cin >> nomefunc[cont];
		cout << endl;
		cout << "Entre 1 e 7 digite a classe a qual ele pertence: ";
		cin >> classefunc[cont];
		cout << endl;
		if(classefunc[cont]==1)
		{
			total1++;
		}
		maior[0] = total1;
		if(classefunc[cont]==2)
		{
			total2++;
		}
		maior[1] = total2;
		if(classefunc[cont]==3)
		{
			total3++;
		}
		maior[2] = total3;
		if(classefunc[cont]==4)
		{
			total4++;
		}
		maior[3] = total4;
		if(classefunc[cont]==5)
		{
			total5++;
		}
		maior[4] = total5;
		if(classefunc[cont]==6)
		{
			total6++;
		}
		maior[5] = total6;
		if(classefunc[cont]==7)
		{
			total7++;
		}
		maior[6] = total7;
		
		for(cont2=0;cont2<7;cont2++)
			{
				if(classefunc[cont]==cont2)
				{
					guardaclasse[cont] = classefixa[cont2];	
				}
				if(maior[cont2]>maiorclasse)
				{
					maiorclasse = cont2;
				}
			}
		
	}	
	cout << "*******************************************************************************************\n\n";
	cout << "Nosso banco de funcionarios: \n\n";
	
	for (contReadFunc=0;contReadFunc<3;contReadFunc++)
	{
		cout << "O sujeito de chama " << nomefunc[contReadFunc] << " e recebe como salario R$" << guardaclasse[contReadFunc] << endl;
		cout << endl;	
	}	
	cout << "*******************************************************************************************\n\n";
	cout << "O total das nossas classes e: \n\n";
	
	for (contReadClasse=0;contReadClasse<7;contReadClasse++)
	{
		cout << "\nTotal de funcionarios da classe " << i++ << ": " << maior[contReadClasse] << "\n";
	}	

	
	cout << "*******************************************************************************************\n\n";
	cout << "A classe com maior numero de funcionarios e: " << maiorclasse+1 << ". Ela tem " << maior[maiorclasse] << " funcionarios.\n\n";
	
	system("pause");
	return 0;
}
