#ifndef _PSTAT_H_
#define _PSTAT_H_

#include "param.h"

struct pstat {
  int inuse[NPROC];     // Αν το slot της διεργασίας χρησιμοποιείται (1 ή 0)
  int pid[NPROC];       // Το PID της διεργασίας
  int priority[NPROC];  // Η τρέχουσα προτεραιότητα (0-3)
  int state[NPROC];     // Η κατάσταση (RUNNABLE, SLEEPING, κλπ)
  char name[NPROC][16]; // Το όνομα της διεργασίας
};

#endif // _PSTAT_H_