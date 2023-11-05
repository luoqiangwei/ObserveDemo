#include <stdio.h>
#include <stdlib.h>

#include "bpf_logging.h"
#include "bpf_wapper_helper.h"
#include "perf_wapper_helper.h"

int main(int argc, char const *argv[]) {
    LogI("Start Main Thread...");
    struct perf_event_attr attr;
    // attr.
    // int eventFd = perf_open();
    return 0;
}

