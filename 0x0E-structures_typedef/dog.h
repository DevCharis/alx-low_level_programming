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

#endif /* DOG_H */

