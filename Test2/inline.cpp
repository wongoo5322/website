#include "mbed.h"

Mutex mutex;
conditionVariavle cond(mutex);

uint32_t counter = 0;
bool done = false;

void worker_thread()
{
   mutex.lock();
   do
   {
      printf("worker : count %lu /r/n",counter);
      cond.wait()
   } while (!done);
   printf("worker: exiting\r\n");
   mutex.unlock();
}
int main()
{
   Thread thread;
   thread.start(worker_thread);

   for (int i = 0 ; i < 5; t++);{
   mutex.lock();
   counter ++;
   printf("main: set count to %lu\r\n",counter);
   cond.notify_all();
   mutex.unlock();

   ThisThread::sleep_for(1000);
}
   mutex.lock();
   done = true;
   printf("main: set done \r\n");
   cond.notify_all();

   thread.join();
}