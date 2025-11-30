// src/main.c
#include <stdio.h>
#include "../include/capture.h"

int main() {
    printf("=== Vins Sniff (quick test) ===\n");
    if (initialize_capture() != 0) {
        printf("Init failed\n");
        return 1;
    }
    start_capture();   // will run pcap_loop and call packet_handler
    close_capture();
    return 0;
}
