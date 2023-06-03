#include <pthread.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char* word;
    int count;
} word_freq;

typedef struct{
    char* text;
    size_t text_length;
    size_t processed;
    pthread_mutex_t lock;
    word_freq freq;
    size_t num_words;
} shm_t;

void* process_text(void* arg){
    shm_t* data = (shm_t*)arg;

    while(1){
        pthread_mutex_lock(&data->lock);

        if(data->processed >= data->text_length){
            pthread_mutex_unlock(&data->lock);
            return NULL;
        }

        

        pthread_mutex_unlock(&data->lock);


    }
}