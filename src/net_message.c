#include "net_message.h"

/*
 * Convert header to network byte order
 */
void hton_header(void *header, int type, int size) {
    struct net_header *nh = (struct net_header *) header;
    
    /* Convert to network byte order */
    nh->type = (uint8_t) type;
    nh->length = htons((uint16_t) size);
}

/*
 * Convert header to host byte order
 */
void ntoh_header(void *header) {
    struct net_header *nh = (struct net_header *) header;

    /* Convert to host byte order */
    nh->length = ntohs(nh->length);
}
