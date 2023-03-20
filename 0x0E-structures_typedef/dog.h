#ifndef DOG_H
#define DOG_H

/**
 * struct dog - entry point
 * @name: mem 1
 * @age: mem 2
 * @owner: mem 3
 * Description: dog structure .
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - entry point
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
