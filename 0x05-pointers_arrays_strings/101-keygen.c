#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10
/**
  * main - main program
  * Return: 0 success
  */
int main(void) {
	int i;

	char password[PASSWORD_LENGTH + 1];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=";
	const size_t charset_size = sizeof(charset) - 1;
	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = charset[rand() % charset_size];
	}
	password[PASSWORD_LENGTH] = '\0';
	printf("Generated password: %s\n", password);
	return (0);
}

