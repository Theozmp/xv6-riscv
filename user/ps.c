#include "kernel/types.h"
#include "kernel/pstat.h"
#include "user/user.h"

int main() {
  struct pstat st;
  if(getpinfo(&st) < 0) {
    printf("Error: getpinfo failed\n");
    exit(1);
  }
  printf("PID\tNAME\tPRIO\tSTATE\n");
  for(int i = 0; i < 64; i++) {
    if(st.inuse[i]) {
      printf("%d\t%s\t%d\t%d\n", st.pid[i], st.name[i], st.priority[i], st.state[i]);
    }
  }
  exit(0);
}