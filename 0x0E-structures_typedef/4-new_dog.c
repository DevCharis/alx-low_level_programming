#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the new dog (of type dog_t),
 *         or NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
char *name_copy, *owner_copy;

if (name == NULL || owner == NULL)
return (NULL);

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

name_copy = malloc(strlen(name) + 1);
if (name_copy == NULL)
{
free(dog);
return (NULL);
}
strcpy(name_copy, name);

owner_copy = malloc(strlen(owner) + 1);
if (owner_copy == NULL)
{
free(name_copy);
free(dog);
return (NULL);
}
strcpy(owner_copy, owner);

dog->name = name_copy;
dog->age = age;
dog->owner = owner_copy;

return (dog);
}

