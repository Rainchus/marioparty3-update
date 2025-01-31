#ifndef _MEMORY_H
#define _MEMORY_H
/*
	memory.h
*/

void *memccpy(void *,void *,int,unsigned int);
void *memchr(void *,int,unsigned int);
int  memcmp(const void *,const void *,unsigned int);
void *memcpy(void *,const void *,unsigned int);
int  memicmp(void *,void *,unsigned int);
void *memmove(void *,void *,unsigned int);
void *memset(void *,int,unsigned int);

void movmem(void *,void *,unsigned);
void setmem(void *,unsigned,int);

#endif
