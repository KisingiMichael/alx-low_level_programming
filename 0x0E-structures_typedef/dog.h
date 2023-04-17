#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name: name
 * @age: age
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for gog structure
 */
typedef struct dog dog_t;
#endif 
