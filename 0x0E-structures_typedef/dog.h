#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a new type
 * @name: input
 * @age: input
 * @owner: input
 *
 * Description: dog's basic information
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
