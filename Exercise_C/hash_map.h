#ifndef HASH_MAP_H
#define HASH_MAP_H

#define M 249997
typedef struct hash_map{
	
}hash_map;

unsigned int BKDR_hash(char* str)
{
	unsigned int seed=131;
	unsigned int hash=0;

	while(*str){
		hash=hash*seed+(*str++);
	}

	return (hash%M);
}

#endif
