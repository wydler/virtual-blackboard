#ifndef BLACKBOARD_COMMONS_H_
#define BLACKBOARD_COMMONS_H_

#include <pthread.h>
#include <stdio.h>
#include <sys/signal.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <limits.h>
#include <string.h>
#include <getopt.h>
#include <sys/time.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <sys/wait.h>
#include <sys/types.h>

 /****** Dipl.-Inform.(FH) Elias Drotleff / HS Ravensburg-Weingarten *******\
 *                                                                          *
 * Projekt:                    Blackboard                                   *
 *                                                                          *
 * Modulname:                  commons                                      *
 *                                                                          *
 * Modultyp:                   Globale Dataten                              *
 *                                                                          *
 * Sprache:                    C                                            *
 *                                                                          *
 * Kurzbeschreibung:    Globale Deklarationen und Konstanten (Schnittstelle)*
 *                                                                          *
 * Ersteller/Fach:      Elias Drotleff / Projektarbeit Sysop                *
 * Erstellungsdatum:	03.05.2007                                          *
 * letzte Aenderung:	11.03.2009                                          *
 *                                                                          *
 \**************************************************************************/

/* Consts */
#define BLACKBOARD_COLUMNS 		80
#define BLACKBOARD_ROWS			15
#define BLACKBOARD_BYTESIZE		( BLACKBOARD_COLUMNS * BLACKBOARD_ROWS )
#define DEFAULT_PORT            "50000"
#define PORT_RANGE_MIN          49152
#define PORT_RANGE_MAX          65535

#define INDIFFERENT 0
#define STUDENT 1
#define DOCENT 2

#endif /* BLACKBOARD_COMMONS_H_ */

