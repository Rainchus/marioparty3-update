#ifndef _STRING_H
#define _STRING_H
/*
	string.h
*/

#include "memory.h"

char *stpcpy(char *,const char *);
char *strcat(char *,const char *);
char *strchr(const char *,int);
int  strcmp(const char *,const char *);
char *strcpy(char *,const char *);
unsigned int strcspn(const char *,const char *);
char *strdup(const char *);
char *strerror(int);
int  stricmp(const char *,const char *);
unsigned int strlen(const char *);
char *strlwr(char *);
char *strncat(char *,const char *,unsigned int);
int  strncmp(const char *,const char *,unsigned int);
char *strncpy(char *,const char *,unsigned int);
int  strnicmp(const char *,const char *,unsigned int);
char *strnset(char *,int,unsigned int);
char *strpbrk(const char *,const char *);
char *strrchr(const char *,int);
char *strrev(char *);
char *strset(char *,int);
unsigned int strspn(const char *,const char *);
char *strstr(const char *,const char *);
char *strtok(char *,const char *);
char *strupr(char *);

#define strcmpi(s1,s2)		stricmp(s1,s2)
#define strncmpi(s1,s2,n)	strnicmp(s1,s2,n)

#endif
