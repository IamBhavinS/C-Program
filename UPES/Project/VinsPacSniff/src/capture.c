#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pcap.h>
#include "capture.h"

pcap_t *handle;          // capture session
char device_name[50];    // selected interface
char errbuf[PCAP_ERRBUF_SIZE];

int initialize_capture() {

    pcap_if_t *all, *d;
    int i = 0, pick;

    printf("Finding network interfaces...\n");

    if (pcap_findalldevs(&all, errbuf) == -1) {
        printf("Error: %s\n", errbuf);
        return -1;
    }

    // show list
    for (d = all; d; d = d->next)
        printf("%d. %s\n", ++i, d->name);

    if (i == 0) {
        printf("No interfaces found.\n");
        return -1;
    }

    printf("Pick one: ");
    scanf("%d", &pick);

    d = all;
    for (int j = 1; j < pick; j++)
        d = d->next;

    strcpy(device_name, d->name);
    pcap_freealldevs(all);

    printf("Using: %s\n", device_name);
    return 0;
}

void start_capture() {

    handle = pcap_open_live(device_name, BUFSIZ, 1, 1000, errbuf);
    if (!handle) {
        printf("Can't open %s: %s\n", device_name, errbuf);
        exit(1);
    }

    printf("Sniffing started... Ctrl+C to stop.\n");
    pcap_loop(handle, 0, packet_handler, NULL);
}

void packet_handler(u_char *args, const struct pcap_pkthdr *header, const u_char *packet) {

    // small output (we add more later)
    printf("Packet: %d bytes\n", header->len);

    // later:
    // analyze_packet()
    // detect_spike()
    // write_csv()
    // save_log()
}

void close_capture() {
    if (handle) {
        pcap_close(handle);
        printf("Done.\n");
    }
}

