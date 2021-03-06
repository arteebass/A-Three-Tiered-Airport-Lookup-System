/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _PLACESTOAIRPORT_H_RPCGEN
#define _PLACESTOAIRPORT_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

extern char* fileName;

struct airports {
	char code[4];
	char name[64];
	char state[3];
	double lat;
	double lon;
	double dist;
	struct airports *next;
};
typedef struct airports airports;

struct LatLon {
	double lat;
	double lon;
};
typedef struct LatLon LatLon;

struct returnTypeA {
	int err;
	union {
		airports *resultA;
	} returnTypeA_u;
};
typedef struct returnTypeA returnTypeA;

#define PLACES_TO_AIRPORT 0x20755215
#define PLACES_TO_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define PToA 1
extern  returnTypeA * ptoa_1(LatLon *, CLIENT *);
extern  returnTypeA * ptoa_1_svc(LatLon *, struct svc_req *);
extern int places_to_airport_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define PToA 1
extern  returnTypeA * ptoa_1();
extern  returnTypeA * ptoa_1_svc();
extern int places_to_airport_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_airports (XDR *, airports*);
extern  bool_t xdr_LatLon (XDR *, LatLon*);
extern  bool_t xdr_returnTypeA (XDR *, returnTypeA*);

#else /* K&R C */
extern bool_t xdr_airports ();
extern bool_t xdr_LatLon ();
extern bool_t xdr_returnTypeA ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_PLACESTOAIRPORT_H_RPCGEN */
