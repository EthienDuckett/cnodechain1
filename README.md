# cnodechain1
A node chain that I made so I can learn some c memory management

I still don't know anything about licenses I just want credit for my work.
If you like this linked list watch for more, I will make a revision with a few more functions.

To use the function look at the header file
but this should help you as well


struct node nn = {10};
// node, position, counter, value to assign
assign(&nn, 0, 0, 33);
printf("%d\n",locate(&nn, 1, 10));
unsigned int pos=0;
int a = read(&nn, pos, 0);
if (!isnull(a)) printf("%d\n",a);
else printf("position %d could not be found\n", pos);

isnull() is used to detect if a number (0x8000 or -0 is used as null) could not be found in functions that return an integer instead of a boolean of true or false.
