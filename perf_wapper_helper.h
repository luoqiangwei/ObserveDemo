#ifndef __PERF_WAPPER_HELPER__
#define __PERF_WAPPER_HELPER__

#include <linux/perf_event.h>    /* Definition of PERF_* constants */
#include <linux/hw_breakpoint.h> /* Definition of HW_* constants */
#include <sys/syscall.h>         /* Definition of SYS_* constants */
#include <unistd.h>

int perf_open(struct perf_event_attr *attr,
        pid_t pid, int cpu, int group_fd, unsigned long flags) {
    return syscall(SYS_perf_event_open, pid, cpu,
            group_fd, flags);
}

#endif // __PERF_WAPPER_HELPER__