//
//  LookupResolv.h
//  RimotoSDK
//
//  Created by Helge Hess on 03.07.17.
//  Copyright © 2017 Rimoto. All rights reserved.
//

#ifndef LookupResolv_h
#define LookupResolv_h

#include <arpa/inet.h>

extern struct in_addr _rimoto_dns_lookup4(struct in_addr dnsServer,
                                          const char *host);

extern struct in6_addr _rimoto_dns_lookup6(struct in6_addr dnsServer,
                                           const char *host);

#endif /* LookupResolv_h */
