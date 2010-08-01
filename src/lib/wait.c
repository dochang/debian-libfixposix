#include <sys/wait.h>

#include <libfixposix.h>

extern
int lfp_wifexited (int status)
{
  return WIFEXITED(status);
}

extern
int lfp_wexitstatus (int status)
{
  return WEXITSTATUS(status);
}

extern
int lfp_wifsignaled (int status)
{
  return WIFSIGNALED(status);
}

extern
int lfp_wtermsig (int status)
{
  return WTERMSIG(status);
}

extern
int lfp_wcoredump (int status)
{
#ifdef WCOREDUMP
  return WCOREDUMP(status);
#else
  return 0;
#endif
}

extern
int lfp_wifstopped (int status)
{
  return WIFSTOPPED(status);
}

extern
int lfp_wstopsig (int status)
{
  return WSTOPSIG(status);
}

extern
int lfp_wifcontinued (int status)
{
  return WIFCONTINUED(status);
}
