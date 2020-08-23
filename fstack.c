#include "fstack.h"

void finit(fstack *s) {
	s -> i = 0;
}
void fpush(fstack *s, float n) {
	s -> a[s -> i] = n;
	s -> i++;
}
float fpop(fstack *s) {
	float t;
	t = s -> a[s -> i -1];
	s -> i--;
	return t;
}
int fisempty(fstack *s) {
	return s -> i == 0;
}
int fisfull(fstack *s) {
	return s -> i == MAX;
}
