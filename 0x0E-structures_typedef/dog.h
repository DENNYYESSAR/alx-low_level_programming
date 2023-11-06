#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents information about a dog.
 * @name: The name of the dog (string).
 * @age: The age of the dog (floating-point number).
 * @owner: The owner of the dog (string).
 *
 * Description: This structure defines the basic information about a dog,
 * including its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void print_dog(struct dog *d);

#endif /* DOG_H */
