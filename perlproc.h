#ifndef H_PERLPROC
#define H_PERLPROC 1

#ifdef PERL_OBJECT

#include "ipproc.h"

#define PerlProc_abort() piProc->Abort()
#define PerlProc_exit(s) piProc->Exit((s))
#define PerlProc__exit(s) piProc->_Exit((s))
#define PerlProc_execl(c, w, x, y, z) piProc->Execl((c), (w), (x), (y), (z))
#define PerlProc_execv(c, a) piProc->Execv((c), (a))
#define PerlProc_execvp(c, a) piProc->Execvp((c), (a))
#define PerlProc_getuid() piProc->Getuid()
#define PerlProc_geteuid() piProc->Geteuid()
#define PerlProc_getgid() piProc->Getgid()
#define PerlProc_getegid() piProc->Getegid()
#define PerlProc_getlogin() piProc->Getlogin()
#define PerlProc_kill(i, a) piProc->Kill((i), (a))
#define PerlProc_killpg(i, a) piProc->Killpg((i), (a))
#define PerlProc_pause() piProc->PauseProc()
#define PerlProc_popen(c, m) piProc->Popen((c), (m))
#define PerlProc_pclose(f) piProc->Pclose((f))
#define PerlProc_pipe(fd) piProc->Pipe((fd))
#define PerlProc_setuid(u) piProc->Setuid((u))
#define PerlProc_setgid(g) piProc->Setgid((g))
#define PerlProc_sleep(t) piProc->Sleep((t))
#define PerlProc_times(t) piProc->Times((t))
#define PerlProc_wait(t) piProc->Wait((t))
#define PerlProc_setjmp(b, n) Sigsetjmp((b), (n))
#define PerlProc_longjmp(b, n) Siglongjmp((b), (n))
#define PerlProc_signal(n, h) piProc->Signal((n), (h))
#ifdef WIN32
#define PerlProc_GetSysMsg(s,l,e) piProc->GetSysMsg((s), (l), (e))
#define PerlProc_FreeBuf(s) piProc->FreeBuf((s))
#define PerlProc_Cmd(s) piProc->DoCmd((s))
#define do_spawn(s) piProc->Spawn((s))
#define do_spawnvp(m, c, a) piProc->Spawnvp((m), (c), (a))
#define PerlProc_aspawn(m, c, a) piProc->ASpawn((m), (c), (a))
#endif
#else
#define PerlProc_abort() abort()
#define PerlProc_exit(s) exit((s))
#define PerlProc__exit(s) _exit((s))
#define PerlProc_execl(c, w, x, y, z) execl((c), (w), (x), (y), (z))
#define PerlProc_execv(c, a) execv((c), (a))
#define PerlProc_execvp(c, a) execvp((c), (a))
#define PerlProc_getuid() getuid()
#define PerlProc_geteuid() geteuid()
#define PerlProc_getgid() getgid()
#define PerlProc_getegid() getegid()
#define PerlProc_getlogin() getlogin()
#define PerlProc_kill(i, a) kill((i), (a))
#define PerlProc_killpg(i, a) killpg((i), (a))
#define PerlProc_pause() Pause()
#define PerlProc_popen(c, m) my_popen((c), (m))
#define PerlProc_pclose(f) my_pclose((f))
#define PerlProc_pipe(fd) pipe((fd))
#define PerlProc_setuid(u) setuid((u))
#define PerlProc_setgid(g) setgid((g))
#define PerlProc_sleep(t) sleep((t))
#define PerlProc_times(t) times((t))
#define PerlProc_wait(t) wait((t))
#define PerlProc_setjmp(b, n) Sigsetjmp((b), (n))
#define PerlProc_longjmp(b, n) Siglongjmp((b), (n))
#define PerlProc_signal(n, h) signal((n), (h))
#endif	/* PERL_OBJECT */

#endif /* Include guard */
