#include <stdio.h>
#include <ctype.h>
int choice(void);
int CF(void), CF_choice(void);
int CI(void), CI_choice(void);
int KM(void), KM_choice(void);
int GL(void), GL_choice(void);

int main()
{
	int a;
	do
	{
		a = choice();
		//printf("you chose %d\n", a);
	}while (a!=0);
	return 0;
}

int choice(void)
{
        int b = 0;
	do
	{
	printf("\n");
    printf("Choose an option listed below\n");
    printf("\n1 - Conversion between Celsius and Fahrenheit");
    printf("\n2 - Conversion between Centimetre and Inch");
    printf("\n3 - Conversion between Kilometer and Mile");
    printf("\n4 - Conversion between Gallon and Liter");
    printf("\n0 - Quit");
	printf("\n\nEnter a selection: ");

	scanf("%d", &b);

	switch(b)
	{
		case 1:
			CF_choice();
			break;
		case 2:
			CI_choice();
			break;
		case 3:
			KM_choice();
			break;
		case 4:
			GL_choice();
			break;
		case 0:
			printf("Exiting the program. \n");
			break;
		default:
			printf("Invalid input. Please enter a valid option. \n");
	
	}
	break;
	
	}while (b<0 || b>4);
        return b;

}


int CF_choice(void)
{
	char CF_choice = CF();
	float CF_value;
	
	printf("\nEnter your value: ");
	scanf(" %f", &CF_value);
	float C_to_F = ((CF_value *9/5) + 32);
	float F_to_C = ((CF_value - 32) * 5/9);
	

	if (CF_choice == 'C')
			{
			printf("Your new value is %.2f F\n", C_to_F);
			}else if(CF_choice == 'F'){
				printf("Your new value is %.2f C\n", F_to_C);
			}
	return 1;

}

int CF(void)
{
	char CF, CFi;
	do
	{
	printf("\nWhat would you like to do?");
	printf("\nC - Conversion from Celsius to Fahrenheit");
	printf("\nF - Conversion from Fahrenheit to Calsius\n");
	printf("\n\nEnter a selection: ");
	scanf(" %c", &CFi);
	CFi = toupper(CFi);
	if (CFi == 'C' || CFi == 'F' )
	{
		CF = CFi;
	} else
	{
		printf("\n Invalid input. Please enter one of the options provided");
	}
	}while (CFi != 'C' && CFi != 'F' && CFi != 'c' && CFi != 'f');
	return CF;


}

int CI_choice(void)
{
	char CI_choice = CI();
	float CI_value;
	
	printf("\nEnter your value: ");
	scanf(" %f", &CI_value);
	float C_to_I = (CI_value/2.54);
	float I_to_C = (CI_value *2.54);
	if (CI_choice == 'C' || CI_choice == 'c')
			{
			printf("Your new value is %.2f Inches\n", C_to_I);
			}else if(CI_choice == 'I'|| CI_choice == 'i'){
				printf("Your new value is %.2f Centimetre\n", I_to_C);
			}
	return 1;

}

int CI(void)
{
	char CI, CIi;
	do
	{
	printf("\nWhat would you like to do?");
	printf("\nC - Conversion from Centimetre to Inch");
	printf("\nI - Conversion from Inch to Centimetre\n");
	printf("\n\nEnter a selection: ");
	scanf(" %c", &CIi);
	
	if (CIi == 'C' || CIi == 'I' || CIi == 'c' || CIi == 'i')
	{
		CI = CIi;
	} else
	{
		printf("\n Invalid input. Please enter one of the options provided");
	}
	}while (CIi != 'C' && CIi != 'I' && CIi != 'c' && CIi != 'i');
	return CI;


}

int KM_choice(void)
{
	char KM_choice = KM();
	float KM_value;
	
	printf("\nEnter your value: ");
	scanf(" %f", &KM_value);
	float K_to_M = (KM_value/1.609);
	float M_to_K = (KM_value *1.609);
	if (KM_choice == 'K' || KM_choice == 'k')
			{
			printf("Your new value is %.2f Miles\n", K_to_M);
			}else if(KM_choice == 'M'|| KM_choice == 'm'){
				printf("Your new value is %.2f Kilometres\n", M_to_K);
			}
	return 1;

}

int KM(void)
{
	char KM, KMi;
	do
	{
	printf("\nWhat would you like to do?");
	printf("\nK - Conversion from Kilometer to Mile");
	printf("\nM - Conversion from Mile to Kilometer\n");
	printf("\n\nEnter a selection: ");
	scanf(" %c", &KMi);
	
	if (KMi == 'K' || KMi == 'M' || KMi == 'k' || KMi == 'm')
	{
		KM = KMi;
	} else
	{
		printf("\n Invalid input. Please enter one of the options provided");
	}
	}while (KMi != 'K' && KMi != 'M' && KMi != 'k' && KMi != 'm');
	return KM;


}


int GL_choice(void)
{
	char GL_choice = GL();
	float GL_value;
	
	printf("\nEnter your value: ");
	scanf(" %f", &GL_value);
	float G_to_L = (GL_value *3.785);
	float L_to_G = (GL_value / 3.785);
	if (GL_choice == 'G' || GL_choice == 'g')
			{
			printf("Your new value is %.2f Liter\n", G_to_L);
			}else if(GL_choice == 'L'|| GL_choice == 'l'){
				printf("Your new value is %.2f Gallons\n", L_to_G);
			}
	return 1;

}

int GL(void)
{
	char GL, GLi;
	do
	{
	printf("\nWhat would you like to do?");
	printf("\nG - Conversion from Gallon to Liter");
	printf("\nL - Conversion from Liter to gallon\n");
	printf("\n\nEnter a selection: ");
	scanf(" %c", &GLi);
	
	if (GLi == 'G' || GLi == 'L' || GLi == 'g' || GLi == 'l')
	{
		GL = GLi;
	} else
	{
		printf("\n Invalid input. Please enter one of the options provided");
	}
	}while (GLi != 'G' && GLi != 'L' && GLi != 'g' && GLi != 'l');
	return GL;


}
