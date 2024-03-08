#include <stdio.h>

void vulnerable_function() {
    
	char buffer[8];
	int password_is_good = 0;

	printf("L'adresse de buffer est: %p.\nCelle de password_is_good est: %p.\nLa différende de l'adresse buffer et password_is_good est: %p\n",buffer, &password_is_good, buffer - &password_is_good);
	
	/*
	 *Sachant que la différence est égale à -4 car password_is_good est un int donc de taille de 4 octets.
	 *On a alors la variable password_is_good 4 adresse en arrière. Donc pour modifier sa valeur on fait. 
	 */

	buffer[-4] = 98;

    printf("Entrez une chaîne de caractères : ");
    scanf("%s", buffer);
    printf("Vous avez entré : %s\n", buffer);
	if(password_is_good == 98)
	{
		printf("Vous avez cassé le MDP !");
	}
	else
	{
		printf("password_is_good == %d", password_is_good);
	}
}

int main() {
    vulnerable_function();
    return 0;
}