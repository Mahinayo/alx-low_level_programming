#ifndef DOG_H
#define DOG_H
/**
 * dog_t - Typedef ofr struct dog
 */
typedef struct dog dog_t;
/**
 * struct dog - struct that store information of a god
 * @name: name
 * @age: age
 * @owner: owner
 * Description: struct dog is that store its name.age and owner 
 */
struct dog
{
char *name;
float *age;
char *owner;
};
void init _dog(struct dog *d, char *name, float *age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
