#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void* file_system_thread(void* arg) {
    printf("File system thread is running...\n");
    sleep(1);
    printf("File system thread finished.\n");
    return NULL;
}

void* printing_thread(void* arg) {
    printf("Printing thread is running...\n");
    sleep(1);
    printf("Printing thread finished.\n");
    return NULL;
}

void* network_thread(void* arg) {
    printf("Network thread is running...\n");
    sleep(1);
    printf("Network thread finished.\n");
    return NULL;
}

void* database_thread(void* arg) {
    printf("Database thread is running...\n");
    sleep(1);
    printf("Database thread finished.\n");
    return NULL;
}

void* logging_thread(void* arg) {
    printf("Logging thread is running...\n");
    sleep(1);
    printf("Logging thread finished.\n");
    return NULL;
}

int main() {
    pthread_t threads[5];

    pthread_create(&threads[0], NULL, file_system_thread, NULL);
    pthread_create(&threads[1], NULL, printing_thread, NULL);
    pthread_create(&threads[2], NULL, network_thread, NULL);
    pthread_create(&threads[3], NULL, database_thread, NULL);
    pthread_create(&threads[4], NULL, logging_thread, NULL);

    for(int i = 0; i < 5; i++) {
        pthread_join(threads[i], NULL);
    }

    printf("All threads have finished execution.\n");
    return 0;
}
