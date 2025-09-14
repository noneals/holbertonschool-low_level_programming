#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This structure stores information about a dog, 
 * including its name, age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
