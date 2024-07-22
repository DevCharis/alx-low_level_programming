#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type describing a dog.
 * @name: The name of the dog, type is char *.
 * @age: The age of the dog, type is float.
 * @owner: The owner of the dog, type is char *.
 */
struct dog
{
char *name;
float age;
char *owner;
};
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */

