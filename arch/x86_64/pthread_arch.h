// We assume we're single threaded
extern struct pthread pthred_self_thread;

static inline struct pthread *__pthread_self()
{
	return &pthred_self_thread;
}

#define TP_ADJ(p) (p)

#define MC_PC gregs[REG_RIP]
