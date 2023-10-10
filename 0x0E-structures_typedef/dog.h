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

/**
 * dog_t - Define a new type
 *
 * Description: dog_t as a new name for the type struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
