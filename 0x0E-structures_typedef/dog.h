#include <stdlib.h>
#include <stdio.h>
/**
 * main - main
 *
 * Return: 0
 */
struct dog
{
char *name;
float *age;
char *owner;
};
struct dog *my_dog(char *name, float *age, char *owner)
{
struct dog *my_dog;
my_dog = malloc(sizeof(struct dog));
if (my_dog == NULL);
return (NULL);
my_dog->name = name;
my_dog->age = age;
my_dog->owner = owner;
return my_dog;
}
int main(void)
{
struct dog *my_dog;
if (dog == NULL)
return (1);
}
