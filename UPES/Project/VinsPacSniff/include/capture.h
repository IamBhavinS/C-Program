#ifndef CAPTURE_H
#define CAPTURE_H

#include <pcap.h>

int initialize_capture();     // pick interface
void start_capture();         // start listening
void packet_handler(u_char *args, const struct pcap_pkthdr *header, const u_char *packet);
void close_capture();         // close

#endif
