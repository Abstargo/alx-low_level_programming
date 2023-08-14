#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure representing information about the dog
 * @name: the name of the dog
 * @age: Age of the dog
 * @owner: the name of the owner
 *
 * Description: This structure stores information about a dog
 * it's name, age and owner's name.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
