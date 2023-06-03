#include <pthread.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct{
    char* text;
    size_t text_length;
    size_t processed;
    pthread_mutex_t lock;
} shm_t;