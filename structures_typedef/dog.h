#ifndef __dog_h__
#define __dog_h__
/**
 * dog - Is a struct.
 * @name: Is a string.
 * @age: Is a float.
 * @owner: Is a string.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;/*
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);*/
#endif
