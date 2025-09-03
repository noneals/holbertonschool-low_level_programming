<<<<<<< HEAD
=======

>>>>>>> 50881b9a14dbb999530c0a082e5fa1fbc7d0a947
/**
 * _strncpy - copies a string
 * @dest: buffer where we copy the string
 * @src: the source string
 * @n: maximum number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
