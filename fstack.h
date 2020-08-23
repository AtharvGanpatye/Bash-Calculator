#define MAX 64
typedef struct fstack{
	float a[MAX];
	int i;
}fstack;
/* User to call init before calling other functions.
 * User to check isempty() before calling pop()
 * User to check isfull() before calling push()
 */
void finit(fstack *s);
void fpush(fstack *s, float n);
float fpop(fstack *s);
int fisempty(fstack *s);
int fisfull(fstack *s);

