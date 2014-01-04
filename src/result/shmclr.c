#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#define SHMSTART 1024
#define SHMKEY 2000
#define SHMEND 40960
int main()
{
    int shmid;
    shmid = shmget(2000, SHMEND - SHMSTART, 0666|IPC_CREAT);
   	char* shm_addr = shmat(shmid, (char *)0, 0);
   	memset(shm_addr, 0, SHMEND - SHMSTART);
}
